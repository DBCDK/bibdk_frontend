<?php
/**
 * @file
 * bibliotek_dk_offcanvas_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bibliotek_dk_offcanvas_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-bibliotek-dk---off-canvas-m.
  $menus['menu-bibliotek-dk---off-canvas-m'] = array(
    'menu_name' => 'menu-bibliotek-dk---off-canvas-m',
    'title' => 'Bibliotek.dk - Off Canvas Menu',
    'description' => 'Off Canvas menu der ligger i højre side',
    'language' => 'und',
    'i18n_mode' => '5',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bibliotek.dk - Off Canvas Menu');
  t('Off Canvas menu der ligger i højre side');


  return $menus;
}
