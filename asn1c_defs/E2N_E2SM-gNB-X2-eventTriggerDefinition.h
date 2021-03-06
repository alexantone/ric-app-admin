/*
 * Generated by asn1c-0.9.29 n1 (http://lionet.info/asn1c)
 * From ASN.1 module "E2SM-gNB-X2-IEs"
 * 	found in "../../asn_defs/asn1/e2sm-gNB-X2-release-1-v041.asn.txt"
 * 	`asn1c -fcompound-names -fno-include-deps -findirect-choice -gen-PER -no-gen-OER`
 */

#ifndef	_E2N_E2SM_gNB_X2_eventTriggerDefinition_H_
#define	_E2N_E2SM_gNB_X2_eventTriggerDefinition_H_


#include <asn_application.h>

/* Including external dependencies */
#include "E2N_Interface-ID.h"
#include "E2N_InterfaceDirection.h"
#include "E2N_InterfaceMessageType.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct E2N_InterfaceProtocolIE_Item;

/* E2N_E2SM-gNB-X2-eventTriggerDefinition */
typedef struct E2N_E2SM_gNB_X2_eventTriggerDefinition {
	E2N_Interface_ID_t	 interface_ID;
	E2N_InterfaceDirection_t	 interfaceDirection;
	E2N_InterfaceMessageType_t	 interfaceMessageType;
	struct E2N_E2SM_gNB_X2_eventTriggerDefinition__interfaceProtocolIE_List {
		A_SEQUENCE_OF(struct E2N_InterfaceProtocolIE_Item) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *interfaceProtocolIE_List;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} E2N_E2SM_gNB_X2_eventTriggerDefinition_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_E2N_E2SM_gNB_X2_eventTriggerDefinition;

#ifdef __cplusplus
}
#endif

#endif	/* _E2N_E2SM_gNB_X2_eventTriggerDefinition_H_ */
#include <asn_internal.h>
