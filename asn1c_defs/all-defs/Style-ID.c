/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "../../asn_defs/asn1/e2sm-gNB-X2-release-1-v041.asn.txt"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "Style-ID.h"

/*
 * This type is implemented using NativeInteger,
 * so here we adjust the DEF accordingly.
 */
static const ber_tlv_tag_t asn_DEF_Style_ID_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (2 << 2))
};
asn_TYPE_descriptor_t asn_DEF_Style_ID = {
	"Style-ID",
	"Style-ID",
	&asn_OP_NativeInteger,
	asn_DEF_Style_ID_tags_1,
	sizeof(asn_DEF_Style_ID_tags_1)
		/sizeof(asn_DEF_Style_ID_tags_1[0]), /* 1 */
	asn_DEF_Style_ID_tags_1,	/* Same as above */
	sizeof(asn_DEF_Style_ID_tags_1)
		/sizeof(asn_DEF_Style_ID_tags_1[0]), /* 1 */
	{ 0, 0, NativeInteger_constraint },
	0, 0,	/* No members */
	0	/* No specifics */
};
