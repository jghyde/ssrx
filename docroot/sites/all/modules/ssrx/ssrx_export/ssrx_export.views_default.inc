<?php
/**
 * @file
 * ssrx_export.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ssrx_export_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'export';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'export';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'export';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'nid' => 'nid',
    'title' => 'title',
    'field_chain' => 'field_chain',
    'field_online_pharmacy' => 'field_online_pharmacy',
    'field_24_hour_pharmacy' => 'field_24_hour_pharmacy',
    'street' => 'street',
    'street_1' => 'street_1',
    'city' => 'city',
    'province' => 'province',
    'postal_code' => 'postal_code',
    'country' => 'country',
    'latitude' => 'latitude',
    'longitude' => 'longitude',
    'phone' => 'phone',
    'fax' => 'fax',
  );
  $handler->display->display_options['style_options']['default'] = 'nid';
  $handler->display->display_options['style_options']['info'] = array(
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_chain' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_online_pharmacy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_24_hour_pharmacy' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'street' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'street_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'city' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'postal_code' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'country' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'latitude' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'longitude' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'phone' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'fax' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Chain */
  $handler->display->display_options['fields']['field_chain']['id'] = 'field_chain';
  $handler->display->display_options['fields']['field_chain']['table'] = 'field_data_field_chain';
  $handler->display->display_options['fields']['field_chain']['field'] = 'field_chain';
  $handler->display->display_options['fields']['field_chain']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_chain']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_chain']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_chain']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_chain']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_chain']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_chain']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_chain']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_chain']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_chain']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_chain']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_chain']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_chain']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_chain']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_chain']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_chain']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_chain']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_chain']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_chain']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_chain']['field_api_classes'] = 0;
  /* Field: Content: Online Pharmacy */
  $handler->display->display_options['fields']['field_online_pharmacy']['id'] = 'field_online_pharmacy';
  $handler->display->display_options['fields']['field_online_pharmacy']['table'] = 'field_data_field_online_pharmacy';
  $handler->display->display_options['fields']['field_online_pharmacy']['field'] = 'field_online_pharmacy';
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_online_pharmacy']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_online_pharmacy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_online_pharmacy']['field_api_classes'] = 0;
  /* Field: Content: 24 Hour Pharmacy */
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['id'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['table'] = 'field_data_field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field_api_classes'] = 0;
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street']['id'] = 'street';
  $handler->display->display_options['fields']['street']['table'] = 'location';
  $handler->display->display_options['fields']['street']['field'] = 'street';
  $handler->display->display_options['fields']['street']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['street']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['street']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['street']['alter']['external'] = 0;
  $handler->display->display_options['fields']['street']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['street']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['street']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['street']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['street']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['street']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['street']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['street']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['street']['alter']['html'] = 0;
  $handler->display->display_options['fields']['street']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['street']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['street']['hide_empty'] = 0;
  $handler->display->display_options['fields']['street']['empty_zero'] = 0;
  $handler->display->display_options['fields']['street']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['street']['style'] = 'street';
  /* Field: Location: Street */
  $handler->display->display_options['fields']['street_1']['id'] = 'street_1';
  $handler->display->display_options['fields']['street_1']['table'] = 'location';
  $handler->display->display_options['fields']['street_1']['field'] = 'street';
  $handler->display->display_options['fields']['street_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['street_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['street_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['street_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['street_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['street_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['street_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['street_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['street_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['street_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['street_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['street_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['street_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['street_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['street_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['street_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['street_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['street_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['street_1']['style'] = 'additional';
  /* Field: Location: City */
  $handler->display->display_options['fields']['city']['id'] = 'city';
  $handler->display->display_options['fields']['city']['table'] = 'location';
  $handler->display->display_options['fields']['city']['field'] = 'city';
  $handler->display->display_options['fields']['city']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['city']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['city']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['city']['alter']['external'] = 0;
  $handler->display->display_options['fields']['city']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['city']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['city']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['city']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['city']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['city']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['city']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['city']['alter']['html'] = 0;
  $handler->display->display_options['fields']['city']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['city']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['city']['hide_empty'] = 0;
  $handler->display->display_options['fields']['city']['empty_zero'] = 0;
  $handler->display->display_options['fields']['city']['hide_alter_empty'] = 1;
  /* Field: Location: Province */
  $handler->display->display_options['fields']['province']['id'] = 'province';
  $handler->display->display_options['fields']['province']['table'] = 'location';
  $handler->display->display_options['fields']['province']['field'] = 'province';
  $handler->display->display_options['fields']['province']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['province']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['province']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['province']['alter']['external'] = 0;
  $handler->display->display_options['fields']['province']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['province']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['province']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['province']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['province']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['province']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['province']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['province']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['province']['alter']['html'] = 0;
  $handler->display->display_options['fields']['province']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['province']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['province']['hide_empty'] = 0;
  $handler->display->display_options['fields']['province']['empty_zero'] = 0;
  $handler->display->display_options['fields']['province']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['province']['style'] = 'code';
  /* Field: Location: Postal Code */
  $handler->display->display_options['fields']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['table'] = 'location';
  $handler->display->display_options['fields']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['fields']['postal_code']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['external'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['postal_code']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['postal_code']['alter']['html'] = 0;
  $handler->display->display_options['fields']['postal_code']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['postal_code']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['postal_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['postal_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['postal_code']['hide_alter_empty'] = 1;
  /* Field: Location: Country */
  $handler->display->display_options['fields']['country']['id'] = 'country';
  $handler->display->display_options['fields']['country']['table'] = 'location';
  $handler->display->display_options['fields']['country']['field'] = 'country';
  $handler->display->display_options['fields']['country']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['country']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['country']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['country']['alter']['external'] = 0;
  $handler->display->display_options['fields']['country']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['country']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['country']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['country']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['country']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['country']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['country']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['country']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['country']['alter']['html'] = 0;
  $handler->display->display_options['fields']['country']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['country']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['country']['hide_empty'] = 0;
  $handler->display->display_options['fields']['country']['empty_zero'] = 0;
  $handler->display->display_options['fields']['country']['hide_alter_empty'] = 1;
  /* Field: Location: Latitude */
  $handler->display->display_options['fields']['latitude']['id'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['table'] = 'location';
  $handler->display->display_options['fields']['latitude']['field'] = 'latitude';
  $handler->display->display_options['fields']['latitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['latitude']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['latitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['latitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['latitude']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['latitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['latitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['latitude']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['latitude']['style'] = 'dd';
  /* Field: Location: Longitude */
  $handler->display->display_options['fields']['longitude']['id'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['table'] = 'location';
  $handler->display->display_options['fields']['longitude']['field'] = 'longitude';
  $handler->display->display_options['fields']['longitude']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['external'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['longitude']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['longitude']['alter']['html'] = 0;
  $handler->display->display_options['fields']['longitude']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['longitude']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['longitude']['hide_empty'] = 0;
  $handler->display->display_options['fields']['longitude']['empty_zero'] = 0;
  $handler->display->display_options['fields']['longitude']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['longitude']['style'] = 'dd';
  /* Field: Location: Phone */
  $handler->display->display_options['fields']['phone']['id'] = 'phone';
  $handler->display->display_options['fields']['phone']['table'] = 'location_phone';
  $handler->display->display_options['fields']['phone']['field'] = 'phone';
  $handler->display->display_options['fields']['phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['phone']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['phone']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['phone']['hide_alter_empty'] = 1;
  /* Field: Location: Fax */
  $handler->display->display_options['fields']['fax']['id'] = 'fax';
  $handler->display->display_options['fields']['fax']['table'] = 'location_fax';
  $handler->display->display_options['fields']['fax']['field'] = 'fax';
  $handler->display->display_options['fields']['fax']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['fax']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['fax']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['fax']['alter']['external'] = 0;
  $handler->display->display_options['fields']['fax']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['fax']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['fax']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['fax']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['fax']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['fax']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['fax']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['fax']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['fax']['alter']['html'] = 0;
  $handler->display->display_options['fields']['fax']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['fax']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['fax']['hide_empty'] = 0;
  $handler->display->display_options['fields']['fax']['empty_zero'] = 0;
  $handler->display->display_options['fields']['fax']['hide_alter_empty'] = 1;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  $handler->display->display_options['sorts']['title']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pharmacy' => 'pharmacy',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/export';

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 1;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['path'] = 'admin/export/xls';
  $export['export'] = $view;

  return $export;
}
