<?php
/**
 * @file
 * bibliotek_dk_global_login_menu.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function bibliotek_dk_global_login_menu_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-global-login-menu.
  $menus['menu-global-login-menu'] = array(
    'menu_name' => 'menu-global-login-menu',
    'title' => 'Bibliotek.dk - Global login menu',
    'description' => 'Menu holding login/log out links',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bibliotek.dk - Global login menu');
  t('Menu holding login/log out links');


  return $menus;
}
