/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#include "EnhancedRNTP.h"

#include "EnhancedRNTPStartTime.h"
#include "ProtocolExtensionContainer.h"
static int
memb_enhancedRNTPBitmap_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	const BIT_STRING_t *st = (const BIT_STRING_t *)sptr;
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	if(st->size > 0) {
		/* Size in bits */
		size = 8 * st->size - (st->bits_unused & 0x07);
	} else {
		size = 0;
	}
	
	if((size >= 12 && size <= 8800)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_enhancedRNTPBitmap_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  14,  14,  12,  8800 }	/* (SIZE(12..8800,...)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_EnhancedRNTP_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct EnhancedRNTP, enhancedRNTPBitmap),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BIT_STRING,
		0,
		{ 0, &asn_PER_memb_enhancedRNTPBitmap_constr_2,  memb_enhancedRNTPBitmap_constraint_1 },
		0, 0, /* No default value */
		"enhancedRNTPBitmap"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct EnhancedRNTP, rNTP_High_Power_Threshold),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RNTP_Threshold,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rNTP-High-Power-Threshold"
		},
	{ ATF_POINTER, 2, offsetof(struct EnhancedRNTP, enhancedRNTPStartTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EnhancedRNTPStartTime,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"enhancedRNTPStartTime"
		},
	{ ATF_POINTER, 1, offsetof(struct EnhancedRNTP, iE_Extensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ProtocolExtensionContainer_8231P135,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"iE-Extensions"
		},
};
static const int asn_MAP_EnhancedRNTP_oms_1[] = { 2, 3 };
static const ber_tlv_tag_t asn_DEF_EnhancedRNTP_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_EnhancedRNTP_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* enhancedRNTPBitmap */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rNTP-High-Power-Threshold */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* enhancedRNTPStartTime */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* iE-Extensions */
};
static asn_SEQUENCE_specifics_t asn_SPC_EnhancedRNTP_specs_1 = {
	sizeof(struct EnhancedRNTP),
	offsetof(struct EnhancedRNTP, _asn_ctx),
	asn_MAP_EnhancedRNTP_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_EnhancedRNTP_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_EnhancedRNTP = {
	"EnhancedRNTP",
	"EnhancedRNTP",
	&asn_OP_SEQUENCE,
	asn_DEF_EnhancedRNTP_tags_1,
	sizeof(asn_DEF_EnhancedRNTP_tags_1)
		/sizeof(asn_DEF_EnhancedRNTP_tags_1[0]), /* 1 */
	asn_DEF_EnhancedRNTP_tags_1,	/* Same as above */
	sizeof(asn_DEF_EnhancedRNTP_tags_1)
		/sizeof(asn_DEF_EnhancedRNTP_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_EnhancedRNTP_1,
	4,	/* Elements count */
	&asn_SPC_EnhancedRNTP_specs_1	/* Additional specs */
};

