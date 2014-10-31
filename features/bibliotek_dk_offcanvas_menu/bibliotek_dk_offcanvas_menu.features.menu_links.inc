<?php
/**
 * @file
 * bibliotek_dk_offcanvas_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bibliotek_dk_offcanvas_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-bibliotek-dk---off-canvas-m:<front>
  $menu_links['menu-bibliotek-dk---off-canvas-m:<front>'] = array(
    'menu_name' => 'menu-bibliotek-dk---off-canvas-m',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Forside',
    'options' => array(
      'attributes' => array(
        'title' => 'Link til forside',
      ),
      'devicetypes' => array(
        'devicesize_small' => 1,
        'devicesize_large' => 1,
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
  t('Forside');


  return $menu_links;
}
