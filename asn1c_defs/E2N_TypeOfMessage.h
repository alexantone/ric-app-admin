/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "../../asn_defs/asn1/e2sm-gNB-X2-release-1-v041.asn.txt"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_E2N_TypeOfMessage_H_
#define	_E2N_TypeOfMessage_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum E2N_TypeOfMessage {
	E2N_TypeOfMessage_nothing	= 0,
	E2N_TypeOfMessage_initiating_message	= 1,
	E2N_TypeOfMessage_successful_outcome	= 2,
	E2N_TypeOfMessage_unsuccessful_outcome	= 3
} e_E2N_TypeOfMessage;

/* E2N_TypeOfMessage */
typedef long	 E2N_TypeOfMessage_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_E2N_TypeOfMessage_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_E2N_TypeOfMessage;
extern const asn_INTEGER_specifics_t asn_SPC_TypeOfMessage_specs_1;
asn_struct_free_f TypeOfMessage_free;
asn_struct_print_f TypeOfMessage_print;
asn_constr_check_f TypeOfMessage_constraint;
ber_type_decoder_f TypeOfMessage_decode_ber;
der_type_encoder_f TypeOfMessage_encode_der;
xer_type_decoder_f TypeOfMessage_decode_xer;
xer_type_encoder_f TypeOfMessage_encode_xer;
per_type_decoder_f TypeOfMessage_decode_uper;
per_type_encoder_f TypeOfMessage_encode_uper;
per_type_decoder_f TypeOfMessage_decode_aper;
per_type_encoder_f TypeOfMessage_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _E2N_TypeOfMessage_H_ */
#include <asn_internal.h>
