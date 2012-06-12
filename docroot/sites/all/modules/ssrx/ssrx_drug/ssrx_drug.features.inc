<?php
/**
 * @file
 * ssrx_drug.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ssrx_drug_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "corresponding_node_references" && $api == "default_corresponding_node_references_presets") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ssrx_drug_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ssrx_drug_node_info() {
  $items = array(
    'drug' => array(
      'name' => t('Drug'),
      'base' => 'node_content',
      'description' => t('A prescription drug, such as Xanax, Oxycodone, etc. '),
      'has_title' => '1',
      'title_label' => t('Name'),
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
    'drug_variety' => array(
      'name' => t('Drug Variety'),
      'base' => 'node_content',
      'description' => t('A specific variety of a drug - for example 10mg Xanax Pill'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
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
