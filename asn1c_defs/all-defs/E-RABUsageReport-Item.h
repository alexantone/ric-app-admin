/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_E_RABUsageReport_Item_H_
#define	_E_RABUsageReport_Item_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <INTEGER.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct ProtocolExtensionContainer;

/* E-RABUsageReport-Item */
typedef struct E_RABUsageReport_Item {
	OCTET_STRING_t	 startTimeStamp;
	OCTET_STRING_t	 endTimeStamp;
	INTEGER_t	 usageCountUL;
	INTEGER_t	 usageCountDL;
	struct ProtocolExtensionContainer	*iE_Extensions;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E_RABUsageReport_Item_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E_RABUsageReport_Item;

#ifdef __cplusplus
}
#endif

#endif	/* _E_RABUsageReport_Item_H_ */
#include <asn_internal.h>
