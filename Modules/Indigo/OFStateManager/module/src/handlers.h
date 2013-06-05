/****************************************************************
 *
 *        Copyright 2013, Big Switch Networks, Inc. 
 * 
 * Licensed under the Eclipse Public License, Version 1.0 (the
 * "License"); you may not use this file except in compliance
 * with the License. You may obtain a copy of the License at
 * 
 *        http://www.eclipse.org/legal/epl-v10.html
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the
 * License.
 *
 ****************************************************************/

/**
 * @file handlers.h
 * Declarations of default handlers
 *
 */

#ifndef _OF_STATE_HANDLERS_H_
#define _OF_STATE_HANDLERS_H_

#include <loci/loci.h>
#include <indigo/of_connection_manager.h>

extern indigo_error_t ind_core_unhandled_message(
    of_object_t *obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_echo_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_hello_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_packet_in_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_packet_out_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_port_mod_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_port_stats_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_queue_get_config_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_queue_stats_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_flow_add_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_flow_modify_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_flow_modify_strict_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_flow_delete_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_flow_delete_strict_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_get_config_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_flow_stats_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_barrier_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_echo_reply_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_aggregate_stats_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_desc_stats_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_table_stats_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_features_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_table_mod_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_set_config_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_experimenter_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_experimenter_stats_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_group_desc_stats_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_group_features_stats_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn);
extern indigo_error_t ind_core_bsn_get_ip_mask_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn_id);
extern indigo_error_t ind_core_bsn_set_ip_mask_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn_id);
extern indigo_error_t ind_core_bsn_get_get_mirroring_request_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn_id);
extern indigo_error_t ind_core_bsn_get_set_mirroring_handler(
    of_object_t *_obj,
    indigo_cxn_id_t cxn_id);

#endif /* _OF_STATE_HANDLERS_H_ */
