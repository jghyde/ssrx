<?php
/**
 * @file
 * ssrx_pricereports.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ssrx_pricereports_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ssrx_pricereports_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ssrx_pricereports_node_info() {
  $items = array(
    'drug' => array(
      'name' => t('Drug'),
      'base' => 'node_content',
      'description' => t('A prescription drug, such as Xanax, Oxycodone, etc. '),
      'has_title' => '1',
      'title_label' => t('Trade Name'),
      'help' => '',
    ),
    'drug_price' => array(
      'name' => t('Drug Price'),
      'base' => 'node_content',
      'description' => t('A specific price reported for a specific Drug Variety'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
