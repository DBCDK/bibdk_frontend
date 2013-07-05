<?php
/**
 * @file
 * bibdk_facets.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bibdk_facets_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_facetbrowser_facets';
  $strongarm->value = array(
    0 => array(
      'name' => 'facet.type',
      'title' => 'Materialetype',
      'weight' => '-10',
    ),
    1 => array(
      'name' => 'facet.subject',
      'title' => 'Emne',
      'weight' => '-9',
    ),
    2 => array(
      'name' => 'facet.creator',
      'title' => 'Forfatter',
      'weight' => '-8',
    ),
    3 => array(
      'name' => 'facet.language',
      'title' => 'Sprog',
      'weight' => '-7',
    ),
    4 => array(
      'name' => 'facet.date',
      'title' => 'Årstal',
      'weight' => '-6',
    ),
    5 => array(
      'name' => 'facet.genre',
      'title' => 'Genre',
      'weight' => '-5',
    ),
    6 => array(
      'name' => 'facet.genreCategory',
      'title' => 'Skøn- og faglitteratur',
      'weight' => '-4',
    ),
    7 => array(
      'name' => 'facet.form',
      'title' => 'Form',
      'weight' => '-3',
    ),
    8 => array(
      'name' => 'facet.level',
      'title' => 'Niveau',
      'weight' => '-2',
    ),
    9 => array(
      'name' => 'facet.audienceCategory',
      'title' => 'Målgruppe',
      'weight' => '-1',
    ),
    10 => array(
      'name' => 'facet.let',
      'title' => 'Let-tal',
      'weight' => '0',
    ),
    11 => array(
      'name' => 'facet.lix',
      'title' => 'Lix-tal',
      'weight' => '1',
    ),
  );
  $export['ding_facetbrowser_facets'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_facetbrowser_number_requested';
  $strongarm->value = '70';
  $export['ding_facetbrowser_number_requested'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ding_facetbrowser_number_shown';
  $strongarm->value = '3';
  $export['ding_facetbrowser_number_shown'] = $strongarm;

  return $export;
}
