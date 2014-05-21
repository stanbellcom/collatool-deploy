<?php
/**
 * @file
 * collatool_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function collatool_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-analytics_activity:analytics-activity
  $menu_links['menu-analytics_activity:analytics-activity'] = array(
    'menu_name' => 'menu-analytics',
    'link_path' => 'analytics-activity',
    'router_path' => 'analytics-activity',
    'link_title' => 'Activity',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-analytics_activity:analytics-activity',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-analytics_daytime-activity:analytics-daytime-activity
  $menu_links['menu-analytics_daytime-activity:analytics-daytime-activity'] = array(
    'menu_name' => 'menu-analytics',
    'link_path' => 'analytics-daytime-activity',
    'router_path' => 'analytics-daytime-activity',
    'link_title' => 'Daytime activity',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-analytics_daytime-activity:analytics-daytime-activity',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-analytics_sources:analytics-sources
  $menu_links['menu-analytics_sources:analytics-sources'] = array(
    'menu_name' => 'menu-analytics',
    'link_path' => 'analytics-sources',
    'router_path' => 'analytics-sources',
    'link_title' => 'Sources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-analytics_sources:analytics-sources',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-analytics_user-activity:analytics-user-activity
  $menu_links['menu-analytics_user-activity:analytics-user-activity'] = array(
    'menu_name' => 'menu-analytics',
    'link_path' => 'analytics-user-activity',
    'router_path' => 'analytics-user-activity',
    'link_title' => 'User activity',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-analytics_user-activity:analytics-user-activity',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-analytics_word-cloud:analytics-word-cloud
  $menu_links['menu-analytics_word-cloud:analytics-word-cloud'] = array(
    'menu_name' => 'menu-analytics',
    'link_path' => 'analytics-word-cloud',
    'router_path' => 'analytics-word-cloud',
    'link_title' => 'Word cloud',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-analytics_word-cloud:analytics-word-cloud',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-analytics_word-count:analytics-words-count
  $menu_links['menu-analytics_word-count:analytics-words-count'] = array(
    'menu_name' => 'menu-analytics',
    'link_path' => 'analytics-words-count',
    'router_path' => 'analytics-words-count',
    'link_title' => 'Word count',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'menu-analytics_word-count:analytics-words-count',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: menu-projects_collatool:node/19
  $menu_links['menu-projects_collatool:node/19'] = array(
    'menu_name' => 'menu-projects',
    'link_path' => 'node/19',
    'router_path' => 'node/%',
    'link_title' => 'Collatool',
    'options' => array(
      'identifier' => 'menu-projects_collatool:node/19',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Activity');
  t('Collatool');
  t('Daytime activity');
  t('Sources');
  t('User activity');
  t('Word cloud');
  t('Word count');


  return $menu_links;
}
