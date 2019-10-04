/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-PDU-Contents"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_ServedEUTRAcellsENDCX2ManagementList_H_
#define	_ServedEUTRAcellsENDCX2ManagementList_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include "ServedCell-Information.h"
#include <constr_SEQUENCE.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NRNeighbour_Information;
struct ProtocolExtensionContainer;

/* Forward definitions */
typedef struct ServedEUTRAcellsENDCX2ManagementList__Member {
	ServedCell_Information_t	 servedEUTRACellInfo;
	struct NRNeighbour_Information	*nrNeighbourInfo;	/* OPTIONAL */
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedEUTRAcellsENDCX2ManagementList__Member;

/* ServedEUTRAcellsENDCX2ManagementList */
typedef struct ServedEUTRAcellsENDCX2ManagementList {
	A_SEQUENCE_OF(ServedEUTRAcellsENDCX2ManagementList__Member) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} ServedEUTRAcellsENDCX2ManagementList_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_ServedEUTRAcellsENDCX2ManagementList;

#ifdef __cplusplus
}
#endif

#endif	/* _ServedEUTRAcellsENDCX2ManagementList_H_ */
#include <asn_internal.h>
