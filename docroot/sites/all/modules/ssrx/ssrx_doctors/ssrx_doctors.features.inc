<?php
/**
 * @file
 * ssrx_doctors.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ssrx_doctors_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ssrx_doctors_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ssrx_doctors_node_info() {
  $items = array(
    'doctors' => array(
      'name' => t('Doctors'),
      'base' => 'node_content',
      'description' => t('Prescriber database of doctors and people who prescribe prescription drugs.'),
      'has_title' => '1',
      'title_label' => t('Name of Doctor'),
      'help' => '',
    ),
  );
  return $items;
}
