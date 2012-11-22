<?php
/**
 * @file
 * topbar_menu_block_feature.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function topbar_menu_block_feature_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: user-help-topbar-menu.
  $menus['user-help-topbar-menu'] = array(
    'menu_name' => 'user-help-topbar-menu',
    'title' => 'Bibliotek.dk user help topbar menu',
    'description' => 'User help list, about and contact links',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Exported menu: user-help-topbar-menu-eng.
  $menus['user-help-topbar-menu-eng'] = array(
    'menu_name' => 'user-help-topbar-menu-eng',
    'title' => 'Bibliotek.dk user help topbar menu (eng)',
    'description' => 'User help list, about and contact links (english)',
    'language' => 'und',
    'i18n_mode' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Bibliotek.dk user help topbar menu');
  t('Bibliotek.dk user help topbar menu (eng)');
  t('User help list, about and contact links');
  t('User help list, about and contact links (english)');


  return $menus;
}
