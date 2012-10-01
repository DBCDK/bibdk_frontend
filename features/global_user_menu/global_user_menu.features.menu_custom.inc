<?php
/**
 * @file
 * global_user_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function global_user_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-global-user-menu.
  $menus['menu-global-user-menu'] = array(
    'menu_name' => 'menu-global-user-menu',
    'title' => 'Global user menu',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Global user menu');


  return $menus;
}
