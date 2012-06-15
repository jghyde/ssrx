<?php
/**
 * @file
 * ssrx_user.features.filter.inc
 */

/**
 * Implements hook_filter_default_formats().
 */
function ssrx_user_filter_default_formats() {
  $formats = array();

  // Exported format: Unaltered HTML
  $formats['unaltered_html'] = array(
    'format' => 'unaltered_html',
    'name' => 'Unaltered HTML',
    'cache' => '1',
    'status' => '1',
    'weight' => '0',
    'filters' => array(),
  );

  return $formats;
}
