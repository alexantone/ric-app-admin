/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_SubbandCQIList_H_
#define	_SubbandCQIList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct SubbandCQIItem;

/* SubbandCQIList */
typedef struct SubbandCQIList {
	A_SEQUENCE_OF(struct SubbandCQIItem) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SubbandCQIList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_SubbandCQIList;
extern asn_SET_OF_specifics_t asn_SPC_SubbandCQIList_specs_1;
extern asn_TYPE_member_t asn_MBR_SubbandCQIList_1[1];
extern asn_per_constraints_t asn_PER_type_SubbandCQIList_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _SubbandCQIList_H_ */
#include <asn_internal.h>
