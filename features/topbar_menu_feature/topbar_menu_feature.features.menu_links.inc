<?php
/**
 * @file
 * topbar_menu_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function topbar_menu_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-topbar-menu:help
  $menu_links['menu-topbar-menu:help'] = array(
    'menu_name' => 'menu-topbar-menu',
    'link_path' => 'help',
    'router_path' => 'help',
    'link_title' => 'Hjælp',
    'options' => array(
      'attributes' => array(
        'class' => array(
          0 => 'bibdk-popup-link',
        ),
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-topbar-menu:http://bib.ding.dbc.dk/da/node/12
  $menu_links['menu-topbar-menu:http://bib.ding.dbc.dk/da/node/12'] = array(
    'menu_name' => 'menu-topbar-menu',
    'link_path' => 'http://bib.ding.dbc.dk/da/node/12',
    'router_path' => '',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-topbar-menu:http://bib.ding.dbc.dk/da/node/13
  $menu_links['menu-topbar-menu:http://bib.ding.dbc.dk/da/node/13'] = array(
    'menu_name' => 'menu-topbar-menu',
    'link_path' => 'http://bib.ding.dbc.dk/da/node/13',
    'router_path' => '',
    'link_title' => 'Om Bibliotek.dk',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Hjælp');
  t('Kontakt');
  t('Om Bibliotek.dk');


  return $menu_links;
}
