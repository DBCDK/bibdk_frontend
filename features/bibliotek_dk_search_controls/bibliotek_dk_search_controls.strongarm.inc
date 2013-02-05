<?php
/**
 * @file
 * bibliotek_dk_search_controls.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bibliotek_dk_search_controls_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bibdk_search_controls';
  $strongarm->value = array(
    'sort' => array(
      'title' => 'Sort by',
      'type' => 'select',
      'label' => 'Sort by',
      'name' => 'sort',
      'description' => '',
      'access_key' => 'access_key',
      'tab_index' => 'tab_index',
      'values' => array(
        5 => array(
          'label' => 'Random',
          'value' => '',
          'default' => 1,
          'sort' => '-10',
        ),
        3 => array(
          'label' => 'Date, ascending',
          'value' => 'date_ascending',
          'default' => 0,
          'sort' => '-9',
        ),
        2 => array(
          'label' => 'Date, descending',
          'value' => 'date_descending',
          'default' => 0,
          'sort' => '-8',
        ),
        0 => array(
          'label' => 'Author, ascending',
          'value' => 'creator_ascending',
          'default' => 0,
          'sort' => '-7',
        ),
        4 => array(
          'label' => 'Author, descending',
          'value' => 'creator_descending',
          'default' => 0,
          'sort' => '-6',
        ),
      ),
    ),
  );
  $export['bibdk_search_controls'] = $strongarm;

  return $export;
}
