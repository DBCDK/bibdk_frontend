<?php
/**
 * @file
 * bibliotek_dk_header_actions.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bibliotek_dk_header_actions_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'bibdk_helpdesk-header_action' => array(
      'delta' => 'header_action',
      'module' => 'bibdk_helpdesk',
    ),
    'bibdk_vejviser-header_action' => array(
      'delta' => 'header_action',
      'module' => 'bibdk_vejviser',
    ),
  );

  // Exported block settings for Bibliotek.dk.
  $theme = array();

  $theme['bibdk_helpdesk-header_action'] = array(
    'module' => 'bibdk_helpdesk',
    'delta' => 'header_action',
    'theme' => 'bibdk_theme',
    'status' => '1',
    'weight' => '-18',
    'region' => 'header_actions',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '-1',
  );

  $theme['bibdk_vejviser-header_action'] = array(
    'module' => 'bibdk_vejviser',
    'delta' => 'header_action',
    'theme' => 'bibdk_theme',
    'status' => '1',
    'weight' => '-17',
    'region' => 'header_actions',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => '1',
  );

  $export['theme']['bibdk_theme'] = $theme;

  $theme_default = variable_get('theme_default', 'bartik');
  $themes = list_themes();
  foreach ($export['theme'] as $theme_key => $settings) {
    if ($theme_key != $theme_default && empty($themes[$theme_key]->status)) {
      unset($export['theme'][$theme_key]);
    }
  }
  return $export;
}
