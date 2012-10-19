<?php
/**
 * @file
 * bibliotek_dk_global_login_menu.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bibliotek_dk_global_login_menu_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-global-login-menu:user/login
  $menu_links['menu-global-login-menu:user/login'] = array(
    'menu_name' => 'menu-global-login-menu',
    'link_path' => 'user/login',
    'router_path' => 'user/login',
    'link_title' => 'Log in',
    'options' => array(
      'attributes' => array(),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '0',
  );
  // Exported menu link: menu-global-login-menu:user/logout
  $menu_links['menu-global-login-menu:user/logout'] = array(
    'menu_name' => 'menu-global-login-menu',
    'link_path' => 'user/logout',
    'router_path' => 'user/logout',
    'link_title' => 'Log out',
    'options' => array(
      'attributes' => array(),
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
  t('Log in');
  t('Log out');


  return $menu_links;
}
