<?php
/**
 * @file
 * collatool_feature.apachesolr_environments.inc
 */

/**
 * Implements hook_apachesolr_environments().
 */
function collatool_feature_apachesolr_environments() {
  $export = array();

  $environment = new stdClass();
  $environment->api_version = 1;
  $environment->env_id = 'solr';
  $environment->name = 'localhost server';
  $environment->url = 'http://localhost:8983/solr';
  $environment->service_class = '';
  $environment->conf = array(
    'apachesolr_index_last' => array(
      'comment' => array(
        'last_changed' => '1400181581',
        'last_entity_id' => '791',
      ),
      'node' => array(
        'last_changed' => '1400181581',
        'last_entity_id' => '25',
      ),
    ),
    'apachesolr_index_updated' => 1400181590,
    'apachesolr_last_optimize' => 1400161814,
    'apachesolr_search_changed_boost' => '1:100.0',
    'apachesolr_search_comment_boost' => '0:0',
    'apachesolr_search_date_boost' => '8:1000.0',
    'apachesolr_search_promote_boost' => '0',
    'apachesolr_search_sticky_boost' => '0',
    'apachesolr_search_type_boosts' => array(
      'comment' => '0',
      'comment_node_comment' => '0',
      'mailhandler_source' => '0',
      'comment_node_mailhandler_source' => '0',
      'project' => '0',
      'comment_node_project' => '0',
      'task' => '0',
      'comment_node_task' => '0',
    ),
    'field_bias' => array(
      'bs_promote' => '0',
      'bs_status' => '0',
      'bs_sticky' => '0',
      'bs_translate' => '0',
      'bundle' => '0',
      'bundle_name' => '0',
      'content' => '13.0',
      'dm_field_task_due_date' => '0',
      'ds_changed' => '0',
      'ds_created' => '0',
      'ds_last_comment_or_change' => '0',
      'ds_last_comment_timestamp' => '0',
      'entity_id' => '0',
      'entity_type' => '0',
      'ftm_field_task_estimation' => '0',
      'fts_field_task_estimation' => '0',
      'hash' => '0',
      'id' => '0',
      'is_comment_count' => '0',
      'is_tnid' => '0',
      'is_uid' => '0',
      'label' => '21.0',
      'path' => '0',
      'site' => '0',
      'sm_field_pr_administrators' => '0',
      'sm_field_pr_participants' => '0',
      'sm_field_pr_tasks' => '0',
      'sm_field_task_assigned_to' => '0',
      'sort_label' => '0',
      'sort_language' => '0',
      'sort_name' => '0',
      'sort_name_formatted' => '0',
      'spell' => '0',
      'ss_language' => '0',
      'ss_name' => '0',
      'ss_name_formatted' => '0',
      'tags_a' => '0',
      'tags_h1' => '5.0',
      'tags_h2_h3' => '3.0',
      'tags_h4_h5_h6' => '2.0',
      'tags_inline' => '1.0',
      'taxonomy_names' => '2.0',
      'timestamp' => '0',
      'tos_content_extra' => '0.1',
      'tos_name' => '3.0',
      'tos_name_formatted' => '0',
      'ts_comments' => '3.0',
      'url' => '0',
    ),
  );
  $environment->index_bundles = array(
    'comment' => array(
      0 => 'comment_node_task',
    ),
    'node' => array(
      0 => 'project',
      1 => 'task',
    ),
  );
  $export['solr'] = $environment;

  return $export;
}
