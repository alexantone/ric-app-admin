/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "X2AP-IEs"
 * 	found in "../../asn_defs/asn1/x2ap-15-04.asn"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_X2N_UE_S1AP_ID_H_
#define	_X2N_UE_S1AP_ID_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>

#ifdef __cplusplus
extern "C" {
#endif

/* X2N_UE-S1AP-ID */
typedef unsigned long	 X2N_UE_S1AP_ID_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_X2N_UE_S1AP_ID_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_X2N_UE_S1AP_ID;
extern const asn_INTEGER_specifics_t asn_SPC_UE_S1AP_ID_specs_1;
asn_struct_free_f UE_S1AP_ID_free;
asn_struct_print_f UE_S1AP_ID_print;
asn_constr_check_f UE_S1AP_ID_constraint;
ber_type_decoder_f UE_S1AP_ID_decode_ber;
der_type_encoder_f UE_S1AP_ID_encode_der;
xer_type_decoder_f UE_S1AP_ID_decode_xer;
xer_type_encoder_f UE_S1AP_ID_encode_xer;
per_type_decoder_f UE_S1AP_ID_decode_uper;
per_type_encoder_f UE_S1AP_ID_encode_uper;
per_type_decoder_f UE_S1AP_ID_decode_aper;
per_type_encoder_f UE_S1AP_ID_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _X2N_UE_S1AP_ID_H_ */
#include <asn_internal.h>
