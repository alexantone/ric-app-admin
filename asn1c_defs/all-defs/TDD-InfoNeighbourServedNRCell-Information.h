/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_TDD_InfoNeighbourServedNRCell_Information_H_
#define	_TDD_InfoNeighbourServedNRCell_Information_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NRFreqInfo.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* TDD-InfoNeighbourServedNRCell-Information */
typedef struct TDD_InfoNeighbourServedNRCell_Information {
	NRFreqInfo_t	 nRFreqInfo;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} TDD_InfoNeighbourServedNRCell_Information_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_TDD_InfoNeighbourServedNRCell_Information;
extern asn_SEQUENCE_specifics_t asn_SPC_TDD_InfoNeighbourServedNRCell_Information_specs_1;
extern asn_TYPE_member_t asn_MBR_TDD_InfoNeighbourServedNRCell_Information_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _TDD_InfoNeighbourServedNRCell_Information_H_ */
#include <asn_internal.h>
