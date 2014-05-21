<?php
/**
 * @file
 * collatool_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function collatool_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-analytics.
  $menus['menu-analytics'] = array(
    'menu_name' => 'menu-analytics',
    'title' => 'Analytics',
    'description' => '',
  );
  // Exported menu: menu-projects.
  $menus['menu-projects'] = array(
    'menu_name' => 'menu-projects',
    'title' => 'Projects',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Analytics');
  t('Projects');


  return $menus;
}
