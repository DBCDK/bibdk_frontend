<?php
/**
 * @file
 * custom_search_taxonomy.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function custom_search_taxonomy_taxonomy_default_vocabularies() {
  return array(
    'page_region' => array(
      'name' => 'page region',
      'machine_name' => 'page_region',
      'description' => 'where to place the article (top or bottom)',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
    'page_types' => array(
      'name' => 'page_types',
      'machine_name' => 'page_types',
      'description' => 'types of custom search pages',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
