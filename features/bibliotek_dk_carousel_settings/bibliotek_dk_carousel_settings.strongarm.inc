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
      'title' => 'Pratchett',
      'subtitle' => 'Pratchett har skrevet Discworld serien',
      'query' => '(term.type=bog) OG (term.workType=literature) OG pratchett',
      'period' => '0',
      'offset' => '0',
    ),
    1 => array(
      'title' => 'Fantasy',
      'subtitle' => 'Mmmmm-ann-gann-niii',
      'query' => '(term.language=dan ELLER term.language=eng) OG (term.workType=literature) OG (dkcclphrase.lem="fantasy" ELLER dkcclphrase.lem="eventyrlige fortællinger")',
      'period' => '0',
      'offset' => '0',
    ),
    2 => array(
      'title' => 'Kong Arthur',
      'subtitle' => '',
      'query' => 'adventures of Merlin',
      'period' => '0',
      'offset' => '0',
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
