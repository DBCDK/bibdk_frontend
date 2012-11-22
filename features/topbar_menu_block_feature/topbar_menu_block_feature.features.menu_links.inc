<?php
/**
 * @file
 * topbar_menu_block_feature.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function topbar_menu_block_feature_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: user-help-topbar-menu-eng:node/29
  $menu_links['user-help-topbar-menu-eng:node/29'] = array(
    'menu_name' => 'user-help-topbar-menu-eng',
    'link_path' => 'node/29',
    'router_path' => 'node/%',
    'link_title' => 'Contact',
    'options' => array(
      'node_type' => 'userhelp',
      'langcode' => 'en-gb',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
  );
  // Exported menu link: user-help-topbar-menu-eng:overlay/help
  $menu_links['user-help-topbar-menu-eng:overlay/help'] = array(
    'menu_name' => 'user-help-topbar-menu-eng',
    'link_path' => 'overlay/help',
    'router_path' => 'overlay/help',
    'link_title' => 'Help',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: user-help-topbar-menu:node/15
  $menu_links['user-help-topbar-menu:node/15'] = array(
    'menu_name' => 'user-help-topbar-menu',
    'link_path' => 'node/15',
    'router_path' => 'node/%',
    'link_title' => 'Om bibliotek.dk',
    'options' => array(
      'attributes' => array(
        'title' => 'Hvad kan du bruge bibliotek.dk til',
      ),
      'node_type' => 'userhelp',
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '5',
  );
  // Exported menu link: user-help-topbar-menu:node/16
  $menu_links['user-help-topbar-menu:node/16'] = array(
    'menu_name' => 'user-help-topbar-menu',
    'link_path' => 'node/16',
    'router_path' => 'node/%',
    'link_title' => 'Kontakt',
    'options' => array(
      'attributes' => array(
        'title' => 'Hvordan får du hjælp?',
      ),
      'node_type' => 'userhelp',
      'langcode' => 'da',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '10',
  );
  // Exported menu link: user-help-topbar-menu:overlay/help
  $menu_links['user-help-topbar-menu:overlay/help'] = array(
    'menu_name' => 'user-help-topbar-menu',
    'link_path' => 'overlay/help',
    'router_path' => 'overlay/help',
    'link_title' => 'Hjælp',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Contact');
  t('Help');
  t('Hjælp');
  t('Kontakt');
  t('Om bibliotek.dk');


  return $menu_links;
}
