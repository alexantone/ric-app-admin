/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_E_RAB_Level_QoS_Parameters_H_
#define	_X2N_E_RAB_Level_QoS_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include "X2N_QCI.h"
#include "X2N_AllocationAndRetentionPriority.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct X2N_GBR_QosInformation;
struct X2N_ProtocolExtensionContainer;

/* X2N_E-RAB-Level-QoS-Parameters */
typedef struct X2N_E_RAB_Level_QoS_Parameters {
	X2N_QCI_t	 qCI;
	X2N_AllocationAndRetentionPriority_t	 allocationAndRetentionPriority;
	struct X2N_GBR_QosInformation	*gbrQosInformation;	/* OPTIONAL */
	struct X2N_ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} X2N_E_RAB_Level_QoS_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_X2N_E_RAB_Level_QoS_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_X2N_E_RAB_Level_QoS_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_X2N_E_RAB_Level_QoS_Parameters_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_E_RAB_Level_QoS_Parameters_H_ */
#include <asn_internal.h>
