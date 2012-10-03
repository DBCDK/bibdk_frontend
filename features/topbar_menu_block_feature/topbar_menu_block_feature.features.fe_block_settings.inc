<?php
/**
 * @file
 * topbar_menu_block_feature.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function topbar_menu_block_feature_default_fe_block_settings() {
  $export = array();

  // bibdk_theme
  $theme = array();

  $theme['bibdk_help-bibdk-help-topbar-menu'] = array(
    'module' => 'bibdk_help',
    'delta' => 'bibdk-help-topbar-menu',
    'theme' => 'bibdk_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'topbar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
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
