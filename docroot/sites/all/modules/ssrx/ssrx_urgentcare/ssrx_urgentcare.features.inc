<?php
/**
 * @file
 * ssrx_urgentcare.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function ssrx_urgentcare_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function ssrx_urgentcare_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function ssrx_urgentcare_node_info() {
  $items = array(
    'urgent_care' => array(
      'name' => t('Urgent Care'),
      'base' => 'node_content',
      'description' => t('Urgent Care Facilities'),
      'has_title' => '1',
      'title_label' => t('Facility Name'),
      'help' => '',
    ),
  );
  return $items;
}
