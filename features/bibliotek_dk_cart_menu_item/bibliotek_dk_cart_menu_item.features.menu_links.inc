<?php
/**
 * @file
 * bibliotek_dk_cart_menu_item.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function bibliotek_dk_cart_menu_item_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-global-login-menu:user/cart
  $menu_links['menu-global-login-menu:user/cart'] = array(
    'menu_name' => 'menu-global-login-menu',
    'link_path' => 'user/cart',
    'router_path' => 'user/cart',
    'link_title' => 'items in cart',
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
  t('items in cart');


  return $menu_links;
}
