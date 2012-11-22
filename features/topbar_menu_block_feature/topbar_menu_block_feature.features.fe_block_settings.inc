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

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'bibdk_help-bibdk-help-topbar-menu' => array(
      'delta' => 'bibdk-help-topbar-menu',
      'module' => 'bibdk_help',
    ),
    'bibdk_help-bibdk-help-topbar-menu-eng' => array(
      'delta' => 'bibdk-help-topbar-menu-eng',
      'module' => 'bibdk_help',
    ),
  );

  // Exported block settings for Bibliotek.dk.
  $theme = array();

  $theme['bibdk_help-bibdk-help-topbar-menu'] = array(
    'module' => 'bibdk_help',
    'delta' => 'bibdk-help-topbar-menu',
    'theme' => 'bibdk_theme',
    'status' => '1',
    'weight' => '-20',
    'region' => 'topbar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
    'i18n_mode' => '0',
  );

  $theme['bibdk_help-bibdk-help-topbar-menu-eng'] = array(
    'module' => 'bibdk_help',
    'delta' => 'bibdk-help-topbar-menu-eng',
    'theme' => 'bibdk_theme',
    'status' => '1',
    'weight' => '-19',
    'region' => 'topbar',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
    'i18n_mode' => '0',
  );

  $export['theme']['bibdk_theme'] = $theme;

  // Exported block settings for Garland.
  $theme = array();

  $theme['bibdk_help-bibdk-help-topbar-menu'] = array(
    'module' => 'bibdk_help',
    'delta' => 'bibdk-help-topbar-menu',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
    'i18n_mode' => '0',
  );

  $theme['bibdk_help-bibdk-help-topbar-menu-eng'] = array(
    'module' => 'bibdk_help',
    'delta' => 'bibdk-help-topbar-menu-eng',
    'theme' => 'garland',
    'status' => 0,
    'weight' => '0',
    'region' => '',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => 4,
    'i18n_mode' => '0',
  );

  $export['theme']['garland'] = $theme;

  $theme_default = variable_get('theme_default', 'bartik');
  $themes = list_themes();
  foreach ($export['theme'] as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
