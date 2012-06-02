<?php
/**
 * @file
 * prescription_drugs.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function prescription_drugs_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'prescriptions_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'search_api_index_prescription_drug';
  $view->human_name = 'Prescriptions Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Prescriptions Search';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_drug',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['columns'] = array(
    'field_brand_or_generic_' => 'field_brand_or_generic_',
    'field_chain' => 'field_chain',
    'field_dosage' => 'field_dosage',
    'field_drug' => 'field_drug',
    'field_format' => 'field_format',
    'field_pharmacy' => 'field_pharmacy',
    'field_price' => 'field_price',
    'field_quantity' => 'field_quantity',
  );
  $handler->display->display_options['style_options']['default'] = 'field_dosage';
  $handler->display->display_options['style_options']['info'] = array(
    'field_brand_or_generic_' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_chain' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_dosage' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_drug' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_format' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pharmacy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_quantity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Indexed Node: Dosage */
  $handler->display->display_options['fields']['field_dosage']['id'] = 'field_dosage';
  $handler->display->display_options['fields']['field_dosage']['table'] = 'search_api_index_prescription_drug';
  $handler->display->display_options['fields']['field_dosage']['field'] = 'field_dosage';
  $handler->display->display_options['fields']['field_dosage']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_dosage']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_dosage']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_dosage']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_dosage']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_dosage']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_dosage']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_dosage']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_dosage']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_dosage']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_dosage']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_dosage']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_dosage']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_dosage']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_dosage']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_dosage']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_dosage']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_dosage']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_dosage']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_dosage']['view_mode'] = 'full';
  /* Field: Indexed Node: Drug */
  $handler->display->display_options['fields']['field_drug']['id'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['table'] = 'search_api_index_prescription_drug';
  $handler->display->display_options['fields']['field_drug']['field'] = 'field_drug';
  $handler->display->display_options['fields']['field_drug']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_drug']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_drug']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_drug']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_drug']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_drug']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_drug']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_drug']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_drug']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_drug']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_drug']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_drug']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_drug']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_drug']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_drug']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_drug']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_drug']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_drug']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_drug']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_drug']['view_mode'] = 'full';
  /* Field: Indexed Node: Format */
  $handler->display->display_options['fields']['field_format']['id'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['table'] = 'search_api_index_prescription_drug';
  $handler->display->display_options['fields']['field_format']['field'] = 'field_format';
  $handler->display->display_options['fields']['field_format']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_format']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_format']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_format']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_format']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_format']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_format']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_format']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_format']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_format']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_format']['view_mode'] = 'full';
  /* Field: Indexed Node: Pharmacy */
  $handler->display->display_options['fields']['field_pharmacy']['id'] = 'field_pharmacy';
  $handler->display->display_options['fields']['field_pharmacy']['table'] = 'search_api_index_prescription_drug';
  $handler->display->display_options['fields']['field_pharmacy']['field'] = 'field_pharmacy';
  $handler->display->display_options['fields']['field_pharmacy']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pharmacy']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pharmacy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pharmacy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pharmacy']['link_to_entity'] = 1;
  $handler->display->display_options['fields']['field_pharmacy']['view_mode'] = 'full';
  /* Field: Indexed Node: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'search_api_index_prescription_drug';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_price']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_price']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_price']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_price']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_price']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_price']['settings'] = array(
    'thousand_separator' => ' ',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_price']['field_api_classes'] = 0;
  /* Field: Indexed Node: Quantity */
  $handler->display->display_options['fields']['field_quantity']['id'] = 'field_quantity';
  $handler->display->display_options['fields']['field_quantity']['table'] = 'search_api_index_prescription_drug';
  $handler->display->display_options['fields']['field_quantity']['field'] = 'field_quantity';
  $handler->display->display_options['fields']['field_quantity']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_quantity']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_quantity']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_quantity']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_quantity']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_quantity']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_quantity']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_quantity']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_quantity']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_quantity']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_quantity']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_quantity']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_quantity']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_quantity']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_quantity']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_quantity']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_quantity']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_quantity']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_quantity']['settings'] = array(
    'thousand_separator' => ' ',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_quantity']['field_api_classes'] = 0;
  /* Filter criterion: Indexed Node: Content type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'search_api_index_prescription_drug';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'drug_price' => 'drug_price',
  );

  /* Display: Search Page */
  $handler = $view->new_display('page', 'Search Page', 'page');
  $handler->display->display_options['path'] = 'rx-search';
  $export['prescriptions_search'] = $view;

  return $export;
}
