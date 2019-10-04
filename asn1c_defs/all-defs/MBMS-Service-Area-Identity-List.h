/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_MBMS_Service_Area_Identity_List_H_
#define	_MBMS_Service_Area_Identity_List_H_


#include <asn_application.h>

/* Including external dependencies */
#include "MBMS-Service-Area-Identity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* MBMS-Service-Area-Identity-List */
typedef struct MBMS_Service_Area_Identity_List {
	A_SEQUENCE_OF(MBMS_Service_Area_Identity_t) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} MBMS_Service_Area_Identity_List_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_MBMS_Service_Area_Identity_List;

#ifdef __cplusplus
}
#endif

#endif	/* _MBMS_Service_Area_Identity_List_H_ */
#include <asn_internal.h>
