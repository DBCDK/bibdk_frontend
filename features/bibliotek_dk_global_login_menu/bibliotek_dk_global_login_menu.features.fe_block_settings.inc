<?php
/**
 * @file
 * bibliotek_dk_global_login_menu.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bibliotek_dk_global_login_menu_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'menu-menu-global-login-menu' => array(
      'delta' => 'menu-global-login-menu',
      'module' => 'menu',
    ),
  );

  // bibdk_theme
  $theme = array();

  $theme['menu-menu-global-login-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-global-login-menu',
    'theme' => 'bibdk_theme',
    'status' => '1',
    'weight' => '15',
    'region' => 'topbar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['theme']['bibdk_theme'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
