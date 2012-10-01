<?php
/**
 * @file
 * global_user_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function global_user_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-global-user-menu:user/login
  $menu_links['menu-global-user-menu:user/login'] = array(
    'menu_name' => 'menu-global-user-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log ind',
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
  // Exported menu link: menu-global-user-menu:user/logout
  $menu_links['menu-global-user-menu:user/logout'] = array(
    'menu_name' => 'menu-global-user-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log ud',
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
  t('Log ind');
  t('Log ud');


  return $menu_links;
}
