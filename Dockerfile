ARG SCHEMA_PATH=schemas
ARG STAGE_DIR=/tmp/ac-xapp
#ARG DOCKER_REPO=nexus3.o-ran-sc.org:10004
ARG DOCKER_REPO=akrainoenea

#==================================================================================

FROM buildpack-deps:stretch as mdclog_build

RUN apt-get update && apt-get -q -y install \
  autoconf \
  autoconf-archive \
  automake \
  libjsoncpp-dev \
  libtool \
  pkg-config \
  rpm \
  devscripts \
  debhelper \
  gawk \
  build-essential

# Build mdclog from sources
ARG MDC_VER=0.0.4-aarch64
RUN git clone "https://github.com/alexantone/oran-mdclog.git" -b ${MDC_VER} mdclog \
    && cd mdclog \
    && ./autogen.sh && ./configure && make test \
    && ./package.sh --skip-config --skip-test debian


FROM ${DOCKER_REPO}/bldr-ubuntu16-c-go:3-u16.04-nng as ricbuild

# to override repo base, pass in repo argument when running docker build:
# docker build --build-arg REPOBASE=http://abc.def.org . ....
ARG REPOBASE=https://gerrit.oran-osc.org/r
ARG SCHEMA_FILE
ARG SCHEMA_PATH
ARG STAGE_DIR

# Install necessary packages
WORKDIR ${STAGE_DIR}
RUN apt-get update  \
     && apt-get install -y \
     libcurl4-openssl-dev \
     libcurl3 \
     cmake \
     git \
     build-essential \
     automake \
     autoconf-archive \
     autoconf \
     pkg-config \
     gawk \
     libtool \
     wget \
     zlib1g-dev \
     libffi-dev \
     && apt-get clean

# Install mdclog using debian packages built previously
COPY --from=mdclog_build /tmp/mdclog*.deb ${STAGE_DIR}/
RUN dpkg -i ${STAGE_DIR}/mdclog_*.deb
RUN dpkg -i ${STAGE_DIR}/mdclog-dev_*.deb

# Install RMr from sources
ARG RMR_VER=1.13.0
RUN git clone https://gerrit.o-ran-sc.org/r/ric-plt/lib/rmr -b ${RMR_VER} \
    && mkdir -p rmr/build \
    && cd rmr/build \
    && ( cmake -DDEV_PKG=1 .. && make package && make install && ldconfig ) \
    && ( cmake -DDEV_PKG=0 .. && make package && make install && ldconfig ) \
    && cp *.deb ${STAGE_DIR}/ \
    && cd ${STAGE_DIR} \
    && rm -rf rmr


## Install rapidjson
RUN git clone https://github.com/Tencent/rapidjson && \
    cd rapidjson && \
    mkdir build && \
    cd build && \
    cmake -DCMAKE_INSTALL_PREFIX=/usr/local .. && \
    make install && \
    cd ${STAGE_DIR} && \
    rm -rf rapidjson


##-----------------------------------
# Now install the program
#------------------------------------
COPY ./ ${STAGE_DIR}
RUN export CPATH=$CPATH:/usr/local/include && \ 
    cd src && \
    make clean && \
    make install 
 
COPY ${SCHEMA_PATH}/* /etc/xapp/ 
COPY init/init_script.py /etc/xapp/init_script.py

#---------------------------------------------
# Build the final version
#FROM nexus3.o-ran-sc.org:10004/bldr-ubuntu16-c-go:1-u16.04-nng1.1.1

FROM ubuntu:16.04

ARG SCHEMA_PATH
ARG STAGE_DIR

# copy just the needed libraries install it into the final image
COPY --from=ricbuild ${STAGE_DIR}/*.deb /tmp/
COPY --from=ricbuild /usr/local/lib/libnng* /usr/local/lib/
RUN dpkg -i /tmp/*.deb
RUN apt-get update && \
    apt-get install -y libcurl3 python3 && \
    apt-get clean
COPY --from=ricbuild /etc/xapp/* /etc/xapp/
COPY --from=ricbuild /usr/local/bin/adm-ctrl-xapp /usr/local/bin/adm-ctrl-xapp
#COPY --from=ricbuild /usr/local/bin/e2e-test-client /usr/local/bin/e2e-test-client
#COPY --from=ricbuild /usr/local/bin/mock-e2term-server /usr/local/bin/mock-e2term-server
#COPY --from=ricbuild /usr/local/bin/e2e-perf-client /usr/local/bin/e2e-perf-client
#COPY --from=ricbuild /usr/local/bin/e2e-perf-server /usr/local/bin/e2e-perf-server
#COPY --from=ricbuild /usr/local/bin/mock-a1-server /usr/local/bin/mock-a1-server


RUN ldconfig


#ENV  PYTHONHOME=/opt/python3 \
#     PYTHONPATH=/opt/python3 \
ENV  RMR_RTG_SVC="127.0.0.1" \
     NAME=ADM_CTRL_XAPP \
     PORT=tcp:4560 \
     THREADS=1\
     VERBOSE=0 \
     MESSAGE_TYPE=10002 \
     RATE=1 \
     CONFIG_FILE=/opt/ric/config/config-file.json
     
      

CMD python3 /etc/xapp/init_script.py $CONFIG_FILE
