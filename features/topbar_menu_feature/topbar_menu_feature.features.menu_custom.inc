<?php
/**
 * @file
 * topbar_menu_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function topbar_menu_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-topbar-menu.
  $menus['menu-topbar-menu'] = array(
    'menu_name' => 'menu-topbar-menu',
    'title' => 'Topbar Menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Topbar Menu');


  return $menus;
}
