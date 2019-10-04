/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_RelativeNarrowbandTxPower_H_
#define	_RelativeNarrowbandTxPower_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>
#include "RNTP-Threshold.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPorts {
	RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPorts_one	= 0,
	RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPorts_two	= 1,
	RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPorts_four	= 2
	/*
	 * Enumeration is extensible
	 */
} e_RelativeNarrowbandTxPower__numberOfCellSpecificAntennaPorts;

/* Forward declarations */
struct ProtocolExtensionContainer;

/* RelativeNarrowbandTxPower */
typedef struct RelativeNarrowbandTxPower {
	BIT_STRING_t	 rNTP_PerPRB;
	RNTP_Threshold_t	 rNTP_Threshold;
	long	 numberOfCellSpecificAntennaPorts;
	long	 p_B;
	long	 pDCCH_InterferenceImpact;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} RelativeNarrowbandTxPower_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_numberOfCellSpecificAntennaPorts_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_RelativeNarrowbandTxPower;
extern asn_SEQUENCE_specifics_t asn_SPC_RelativeNarrowbandTxPower_specs_1;
extern asn_TYPE_member_t asn_MBR_RelativeNarrowbandTxPower_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _RelativeNarrowbandTxPower_H_ */
#include <asn_internal.h>
