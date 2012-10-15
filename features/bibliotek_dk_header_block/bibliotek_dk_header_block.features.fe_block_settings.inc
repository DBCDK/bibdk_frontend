<?php
/**
 * @file
 * bibliotek_dk_header_block.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bibliotek_dk_header_block_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'bibdk_helpdesk-bibdk-helpdesk-header-link' => array(
      'delta' => 'bibdk-helpdesk-header-link',
      'module' => 'bibdk_helpdesk',
    ),
    'bibdk_vejviser-bibdk_vejviser' => array(
      'delta' => 'bibdk_vejviser',
      'module' => 'bibdk_vejviser',
    ),
  );

  // bibdk_theme
  $theme = array();

  $theme['bibdk_helpdesk-bibdk-helpdesk-header-link'] = array(
    'module' => 'bibdk_helpdesk',
    'delta' => 'bibdk-helpdesk-header-link',
    'theme' => 'bibdk_theme',
    'status' => '1',
    'weight' => '-15',
    'region' => 'header_actions',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '<none>',
    'cache' => -1,
  );

  $theme['bibdk_vejviser-bibdk_vejviser'] = array(
    'module' => 'bibdk_vejviser',
    'delta' => 'bibdk_vejviser',
    'theme' => 'bibdk_theme',
    'status' => '1',
    'weight' => '0',
    'region' => 'header_actions',
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
