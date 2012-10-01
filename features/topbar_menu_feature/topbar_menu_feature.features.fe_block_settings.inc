<?php
/**
 * @file
 * topbar_menu_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function topbar_menu_feature_default_fe_block_settings() {
  $export = array();

  // bibdk_theme
  $theme = array();

  $theme['locale-language'] = array(
    'module' => 'locale',
    'delta' => 'language',
    'theme' => 'bibdk_theme',
    'status' => '1',
    'weight' => '-17',
    'region' => 'topbar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['menu-menu-topbar-menu'] = array(
    'module' => 'menu',
    'delta' => 'menu-topbar-menu',
    'theme' => 'bibdk_theme',
    'status' => '1',
    'weight' => '-18',
    'region' => 'topbar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $export['bibdk_theme'] = $theme;

  $theme_default = variable_get('theme_default', 'garland');
  $themes = list_themes();
  foreach ($export as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export[$theme_key]);
    }
  }
  return $export;
}
