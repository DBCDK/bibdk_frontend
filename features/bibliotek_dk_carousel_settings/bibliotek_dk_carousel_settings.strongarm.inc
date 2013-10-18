<?php
/**
 * @file
 * bibliotek_dk_carousel_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function bibliotek_dk_carousel_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bibdk_search_carousel_dateformat';
  $strongarm->value = 'bk\\mYW';
  $export['bibdk_search_carousel_dateformat'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'bibdk_search_carousel_week_search_code';
  $strongarm->value = 'dkcclterm.kk';
  $export['bibdk_search_carousel_week_search_code'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ting_carousel_search_queries';
  $strongarm->value = array(
    0 => array(
      'title' => 'Nye spillefilm på biblioteket',
      'subtitle' => 'Spillefilm for voksne (ikke det samme som voksenfilm :))',
      'query' => '(term.type=dvd) OG dkcclterm.cl=77.7',
      'period' => '5',
      'offset' => '5',
    ),
    1 => array(
      'title' => 'Nye bøger - skønlitteratur',
      'subtitle' => 'Skønlitteratur for voksne',
      'query' => 'dkcclterm.sf=v OG dkcclterm.uu=nt OG  term.literaryForm=fiktion OG (term.type=bog)',
      'period' => '3',
      'offset' => '4',
    ),
    2 => array(
      'title' => 'Nye bøger - faglitteratur',
      'subtitle' => 'Faglitteratur for voksne',
      'query' => 'dkcclterm.sf=v OG dkcclterm.uu=nt OG (term.type=bog) IKKE term.literaryForm=fiktion',
      'period' => '2',
      'offset' => '4',
    ),
    3 => array(
      'title' => 'Nye spillefilm for børn',
      'subtitle' => 'spillefilm for børn',
      'query' => '(term.type=dvd) OG dkcclterm.cl=77.74',
      'period' => '11',
      'offset' => '7',
    ),
  );
  $export['ting_carousel_search_queries'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ting_carousel_search_queries_hidden';
  $strongarm->value = array();
  $export['ting_carousel_search_queries_hidden'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ting_search_carousel_covers_max';
  $strongarm->value = '40';
  $export['ting_search_carousel_covers_max'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ting_search_carousel_description_toggle';
  $strongarm->value = 0;
  $export['ting_search_carousel_description_toggle'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ting_search_carousel_queries_max';
  $strongarm->value = '500';
  $export['ting_search_carousel_queries_max'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ting_search_carousel_tabs_position';
  $strongarm->value = 'bottom';
  $export['ting_search_carousel_tabs_position'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ting_search_carousel_webservice';
  $strongarm->value = 'ting_openformat';
  $export['ting_search_carousel_webservice'] = $strongarm;

  return $export;
}
