/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "X2N_ForbiddenInterRATs.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_X2N_ForbiddenInterRATs_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  2,  2,  0,  3 }	/* (0..3,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_X2N_ForbiddenInterRATs_value2enum_1[] = {
	{ 0,	3,	"all" },
	{ 1,	5,	"geran" },
	{ 2,	5,	"utran" },
	{ 3,	8,	"cdma2000" },
	{ 4,	13,	"geranandutran" },
	{ 5,	16,	"cdma2000andutran" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_X2N_ForbiddenInterRATs_enum2value_1[] = {
	0,	/* all(0) */
	3,	/* cdma2000(3) */
	5,	/* cdma2000andutran(5) */
	1,	/* geran(1) */
	4,	/* geranandutran(4) */
	2	/* utran(2) */
	/* This list is extensible */
};
const asn_INTEGER_specifics_t asn_SPC_X2N_ForbiddenInterRATs_specs_1 = {
	asn_MAP_X2N_ForbiddenInterRATs_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_X2N_ForbiddenInterRATs_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	5,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_X2N_ForbiddenInterRATs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_X2N_ForbiddenInterRATs = {
	"ForbiddenInterRATs",
	"ForbiddenInterRATs",
	&asn_OP_NativeEnumerated,
	asn_DEF_X2N_ForbiddenInterRATs_tags_1,
	sizeof(asn_DEF_X2N_ForbiddenInterRATs_tags_1)
		/sizeof(asn_DEF_X2N_ForbiddenInterRATs_tags_1[0]), /* 1 */
	asn_DEF_X2N_ForbiddenInterRATs_tags_1,	/* Same as above */
	sizeof(asn_DEF_X2N_ForbiddenInterRATs_tags_1)
		/sizeof(asn_DEF_X2N_ForbiddenInterRATs_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_X2N_ForbiddenInterRATs_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_X2N_ForbiddenInterRATs_specs_1	/* Additional specs */
};
