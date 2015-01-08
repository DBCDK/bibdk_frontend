<?php
/**
 * @file
 * bibliotek_dk_search_region.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bibliotek_dk_search_region_default_fe_block_settings() {
  $export = array();

  $export['version'] = '1.0';

  // Theme independent visibility settings.
  $export['visibility'] = array(
    'search-form' => array(
      'delta' => 'form',
      'module' => 'search',
    ),
  );

  // Exported block settings for Bibliotek.dk.
  $theme = array();

  $theme['search-form'] = array(
    'module' => 'search',
    'delta' => 'form',
    'theme' => 'bibdk_theme',
    'status' => '1',
    'weight' => '-16',
    'region' => 'search_panel',
    'custom' => '0',
    'visibility' => '0',
    'pages' => '',
    'title' => '',
    'cache' => -1,
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
