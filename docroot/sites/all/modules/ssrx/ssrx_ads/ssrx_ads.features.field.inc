<?php
/**
 * @file
 * ssrx_ads.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function ssrx_ads_field_default_fields() {
  $fields = array();

  // Exported field: 'commerce_product-commerce_node_checkout-commerce_node_checkout_expire'
  $fields['commerce_product-commerce_node_checkout-commerce_node_checkout_expire'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'commerce_node_checkout_expire',
      'foreign keys' => array(),
      'indexes' => array(
        'interval' => array(
          0 => 'interval',
        ),
        'period' => array(
          0 => 'period',
        ),
      ),
      'module' => 'interval',
      'settings' => array(
        'allowed_periods' => array(
          'day' => 'day',
          'month' => 'month',
          'week' => 'week',
        ),
      ),
      'translatable' => '0',
      'type' => 'interval',
    ),
    'field_instance' => array(
      'bundle' => 'commerce_node_checkout',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'interval',
          'settings' => array(),
          'type' => 'interval_default',
          'weight' => 1,
        ),
        'line_item' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'commerce_product',
      'field_name' => 'commerce_node_checkout_expire',
      'label' => 'Unpublish after',
      'required' => 0,
      'settings' => array(
        'allowed_periods' => array(
          'day' => 'day',
          'fortnight' => 0,
          'month' => 'month',
          'quarter' => 0,
          'week' => 'week',
          'year' => 'year',
        ),
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'interval',
        'settings' => array(),
        'type' => 'interval_default',
        'weight' => 36,
      ),
    ),
  );

  // Exported field: 'node-ad-body'
  $fields['node-ad-body'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(
        0 => 'node',
      ),
      'field_name' => 'body',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_with_summary',
    ),
    'field_instance' => array(
      'bundle' => 'ad',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => 0,
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'text',
          'settings' => array(
            'trim_length' => 600,
          ),
          'type' => 'text_summary_or_trimmed',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'node',
      'field_name' => 'body',
      'label' => 'Text of the ad',
      'required' => 0,
      'settings' => array(
        'display_summary' => 1,
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'rows' => '20',
          'summary_rows' => 5,
        ),
        'type' => 'text_textarea_with_summary',
        'weight' => 31,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Text of the ad');
  t('Unpublish after');

  return $fields;
}
