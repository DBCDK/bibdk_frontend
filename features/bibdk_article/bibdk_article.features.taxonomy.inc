<?php
/**
 * @file
 * bibdk_article.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function bibdk_article_taxonomy_default_vocabularies() {
  return array(
    'page_type' => array(
      'name' => 'Page type',
      'machine_name' => 'page_type',
      'description' => 'types of custom search pages',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
    ),
  );
}
