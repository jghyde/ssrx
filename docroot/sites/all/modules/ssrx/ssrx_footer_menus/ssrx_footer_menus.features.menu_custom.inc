<?php
/**
 * @file
 * ssrx_footer_menus.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function ssrx_footer_menus_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-about-simply-smarter-rx
  $menus['menu-about-simply-smarter-rx'] = array(
    'menu_name' => 'menu-about-simply-smarter-rx',
    'title' => 'About Us',
    'description' => 'About Simply Smarter RX',
  );
  // Exported menu: menu-find-a-doctor
  $menus['menu-find-a-doctor'] = array(
    'menu_name' => 'menu-find-a-doctor',
    'title' => 'Find a Doctor',
    'description' => 'Find a Doctor Footer Menu',
  );
  // Exported menu: menu-find-pharmacies
  $menus['menu-find-pharmacies'] = array(
    'menu_name' => 'menu-find-pharmacies',
    'title' => 'Find Pharmacies',
    'description' => 'Find Pharmacies Footer Menu',
  );
  // Exported menu: menu-find-urgent-care
  $menus['menu-find-urgent-care'] = array(
    'menu_name' => 'menu-find-urgent-care',
    'title' => 'Find Urgent Care',
    'description' => 'Find Urgent Care Footer Menu',
  );
  // Exported menu: menu-report-a-price
  $menus['menu-report-a-price'] = array(
    'menu_name' => 'menu-report-a-price',
    'title' => 'How to Win',
    'description' => 'How to report a price and win',
  );
  // Exported menu: menu-search-for-meds
  $menus['menu-search-for-meds'] = array(
    'menu_name' => 'menu-search-for-meds',
    'title' => 'Search for Meds',
    'description' => 'Search for Meds Footer Menu',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('About Simply Smarter RX');
  t('About Us');
  t('Find Pharmacies');
  t('Find Pharmacies Footer Menu');
  t('Find Urgent Care');
  t('Find Urgent Care Footer Menu');
  t('Find a Doctor');
  t('Find a Doctor Footer Menu');
  t('How to Win');
  t('How to report a price and win');
  t('Search for Meds');
  t('Search for Meds Footer Menu');


  return $menus;
}
