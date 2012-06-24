<?php
/**
 * @file
 * ssrx_menus.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function ssrx_menus_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu:<front>
  $menu_links['main-menu:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '1',
  );
  // Exported menu link: main-menu:pharmacies
  $menu_links['main-menu:pharmacies'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'pharmacies',
    'router_path' => 'pharmacies',
    'link_title' => 'Find Pharmacies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '3',
  );
  // Exported menu link: main-menu:pharmacies/24
  $menu_links['main-menu:pharmacies/24'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'pharmacies/24',
    'router_path' => 'pharmacies/24',
    'link_title' => 'Find 24-Hour Pharmacies',
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
    'parent_path' => 'pharmacies',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Find 24-Hour Pharmacies');
  t('Find Pharmacies');
  t('Home');


  return $menu_links;
}
