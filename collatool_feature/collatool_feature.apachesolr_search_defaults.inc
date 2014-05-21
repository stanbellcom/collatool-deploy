<?php
/**
 * @file
 * collatool_feature.apachesolr_search_defaults.inc
 */

/**
 * Implements hook_apachesolr_search_default_searchers().
 */
function collatool_feature_apachesolr_search_default_searchers() {
  $export = array();

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'comment_search';
  $searcher->label = 'Comment search';
  $searcher->description = '';
  $searcher->search_path = 'search/comment-search';
  $searcher->page_title = 'Comment search';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(
      0 => 'bundle:comment_node_task',
    ),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_allow_user_input' => 0,
    'apachesolr_search_browse' => 'browse',
  );
  $export['comment_search'] = $searcher;

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'core_search';
  $searcher->label = 'Core Search';
  $searcher->description = 'Core Search';
  $searcher->search_path = 'search/site';
  $searcher->page_title = 'Site';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(),
    'apachesolr_search_custom_enable' => 0,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_allow_user_input' => 1,
    'apachesolr_search_browse' => 'results',
  );
  $export['core_search'] = $searcher;

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'project_search';
  $searcher->label = 'Project search';
  $searcher->description = '';
  $searcher->search_path = 'search/project-search';
  $searcher->page_title = 'Project search';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(
      0 => 'bundle:project',
    ),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_allow_user_input' => 0,
    'apachesolr_search_browse' => 'browse',
  );
  $export['project_search'] = $searcher;

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'task_search';
  $searcher->label = 'Task search';
  $searcher->description = '';
  $searcher->search_path = 'search/task-search';
  $searcher->page_title = 'Task search';
  $searcher->env_id = 'solr';
  $searcher->settings = array(
    'fq' => array(
      0 => 'bundle:task',
    ),
    'apachesolr_search_custom_enable' => 1,
    'apachesolr_search_search_type' => 'custom',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_spellcheck' => 1,
    'apachesolr_search_search_box' => 1,
    'apachesolr_search_allow_user_input' => 0,
    'apachesolr_search_browse' => 'browse',
  );
  $export['task_search'] = $searcher;

  $searcher = new stdClass();
  $searcher->disabled = FALSE; /* Edit this to true to make a default searcher disabled initially */
  $searcher->api_version = 3;
  $searcher->page_id = 'taxonomy_search';
  $searcher->label = 'Taxonomy Search';
  $searcher->description = 'Search all items with given term';
  $searcher->search_path = 'taxonomy/term/%';
  $searcher->page_title = '%value';
  $searcher->env_id = '';
  $searcher->settings = array(
    'apachesolr_search_search_type' => 'tid',
    'apachesolr_search_per_page' => 10,
    'apachesolr_search_browse' => 'results',
    'apachesolr_search_spellcheck' => FALSE,
    'apachesolr_search_search_box' => FALSE,
  );
  $export['taxonomy_search'] = $searcher;

  return $export;
}
