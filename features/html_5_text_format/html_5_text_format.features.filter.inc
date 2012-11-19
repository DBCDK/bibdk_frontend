<?php
/**
 * @file
 * html_5_text_format.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function html_5_text_format_filter_default_formats() {
  $formats = array();

  // Exported format: HTML 5.
  $formats['html_5'] = array(
    'format' => 'html_5',
    'name' => 'HTML 5',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(
      'filter_html' => array(
        'weight' => '-10',
        'status' => '1',
        'settings' => array(
          'allowed_html' => '<a> <em> <strong> <cite> <blockquote> <code> <ul> <ol> <li> <dl> <dt> <dd> <div> <span> <hr> <img>',
          'filter_html_help' => 1,
          'filter_html_nofollow' => 0,
        ),
      ),
      'filter_autop' => array(
        'weight' => '0',
        'status' => '1',
        'settings' => array(),
      ),
      'filter_htmlcorrector' => array(
        'weight' => '10',
        'status' => '1',
        'settings' => array(),
      ),
    ),
  );

  return $formats;
}
