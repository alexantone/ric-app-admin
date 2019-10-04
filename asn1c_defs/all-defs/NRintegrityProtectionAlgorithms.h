/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-modified-15-05.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_NRintegrityProtectionAlgorithms_H_
#define	_NRintegrityProtectionAlgorithms_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NRintegrityProtectionAlgorithms */
typedef BIT_STRING_t	 NRintegrityProtectionAlgorithms_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NRintegrityProtectionAlgorithms_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NRintegrityProtectionAlgorithms;
asn_struct_free_f NRintegrityProtectionAlgorithms_free;
asn_struct_print_f NRintegrityProtectionAlgorithms_print;
asn_constr_check_f NRintegrityProtectionAlgorithms_constraint;
ber_type_decoder_f NRintegrityProtectionAlgorithms_decode_ber;
der_type_encoder_f NRintegrityProtectionAlgorithms_encode_der;
xer_type_decoder_f NRintegrityProtectionAlgorithms_decode_xer;
xer_type_encoder_f NRintegrityProtectionAlgorithms_encode_xer;
per_type_decoder_f NRintegrityProtectionAlgorithms_decode_uper;
per_type_encoder_f NRintegrityProtectionAlgorithms_encode_uper;
per_type_decoder_f NRintegrityProtectionAlgorithms_decode_aper;
per_type_encoder_f NRintegrityProtectionAlgorithms_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NRintegrityProtectionAlgorithms_H_ */
#include <asn_internal.h>