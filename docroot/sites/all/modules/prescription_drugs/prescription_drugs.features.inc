<?php
/**
 * @file
 * prescription_drugs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function prescription_drugs_ctools_plugin_api() {
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
 * Implements hook_node_info().
 */
function prescription_drugs_node_info() {
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
      'description' => t('A specific instance of a reported price for a drug.'),
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
    'pharmacy_chain' => array(
      'name' => t('Pharmacy Chain'),
      'base' => 'node_content',
      'description' => t('Pharmacy chains such as Walgreen\'s, Costco, etc.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}
