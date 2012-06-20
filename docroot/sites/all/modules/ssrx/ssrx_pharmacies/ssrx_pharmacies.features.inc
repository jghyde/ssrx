<?php
/**
 * @file
 * ssrx_pharmacies.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ssrx_pharmacies_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ssrx_pharmacies_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ssrx_pharmacies_node_info() {
  $items = array(
    'pharmacy' => array(
      'name' => t('Pharmacy'),
      'base' => 'node_content',
      'description' => t('A physical pharmacy location.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
