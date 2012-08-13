<?php
/**
 * @file
 * ssrx_admin.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ssrx_admin_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = '7402_drugs';
  $view->description = 'An admin view of all of the drugs';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '7402 Drugs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '7402 Drugs';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'administer nodes';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options'] = '100,200,300,500,1000';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 1;
  $handler->display->display_options['pager']['options']['expose']['offset'] = TRUE;
  $handler->display->display_options['pager']['options']['expose']['offset_label'] = 'Start at item number: ';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_brand_or_generic_' => 'field_brand_or_generic_',
    'field_fda_id' => 'field_fda_id',
    'field_fda_product_id' => 'field_fda_product_id',
    'field_drug_format' => 'field_drug_format',
    'field_ingredients_collection' => 'field_ingredients_collection',
    'field_route' => 'field_route',
    'field_drug_type' => 'field_drug_type',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_brand_or_generic_' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fda_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_fda_product_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_drug_format' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ingredients_collection' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_route' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_drug_type' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
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
  /* Field: Content: Brand or Generic? */
  $handler->display->display_options['fields']['field_brand_or_generic_']['id'] = 'field_brand_or_generic_';
  $handler->display->display_options['fields']['field_brand_or_generic_']['table'] = 'field_data_field_brand_or_generic_';
  $handler->display->display_options['fields']['field_brand_or_generic_']['field'] = 'field_brand_or_generic_';
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_brand_or_generic_']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_brand_or_generic_']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_brand_or_generic_']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_brand_or_generic_']['field_api_classes'] = 0;
  /* Field: Content: FDA ID */
  $handler->display->display_options['fields']['field_fda_id']['id'] = 'field_fda_id';
  $handler->display->display_options['fields']['field_fda_id']['table'] = 'field_data_field_fda_id';
  $handler->display->display_options['fields']['field_fda_id']['field'] = 'field_fda_id';
  $handler->display->display_options['fields']['field_fda_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fda_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fda_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_fda_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fda_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fda_id']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_fda_id']['field_api_classes'] = 0;
  /* Field: Content: FDA Product ID */
  $handler->display->display_options['fields']['field_fda_product_id']['id'] = 'field_fda_product_id';
  $handler->display->display_options['fields']['field_fda_product_id']['table'] = 'field_data_field_fda_product_id';
  $handler->display->display_options['fields']['field_fda_product_id']['field'] = 'field_fda_product_id';
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_fda_product_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_fda_product_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_fda_product_id']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_fda_product_id']['field_api_classes'] = 0;
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_drug_format']['id'] = 'field_drug_format';
  $handler->display->display_options['fields']['field_drug_format']['table'] = 'field_data_field_drug_format';
  $handler->display->display_options['fields']['field_drug_format']['field'] = 'field_drug_format';
  $handler->display->display_options['fields']['field_drug_format']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_drug_format']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_drug_format']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_drug_format']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_drug_format']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_drug_format']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_drug_format']['field_api_classes'] = 0;
  /* Field: Content: Ingredients */
  $handler->display->display_options['fields']['field_ingredients_collection']['id'] = 'field_ingredients_collection';
  $handler->display->display_options['fields']['field_ingredients_collection']['table'] = 'field_data_field_ingredients_collection';
  $handler->display->display_options['fields']['field_ingredients_collection']['field'] = 'field_ingredients_collection';
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_ingredients_collection']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_ingredients_collection']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ingredients_collection']['settings'] = array(
    'edit' => 'Edit',
    'delete' => 'Delete',
    'add' => 'Add',
    'description' => 1,
    'view_mode' => 'full',
  );
  $handler->display->display_options['fields']['field_ingredients_collection']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ingredients_collection']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ingredients_collection']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['field_api_classes'] = 0;
  /* Field: Content: Route */
  $handler->display->display_options['fields']['field_route']['id'] = 'field_route';
  $handler->display->display_options['fields']['field_route']['table'] = 'field_data_field_route';
  $handler->display->display_options['fields']['field_route']['field'] = 'field_route';
  $handler->display->display_options['fields']['field_route']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_route']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_route']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_route']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_route']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_route']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_route']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_route']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_route']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_route']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_route']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_route']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_route']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_route']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_route']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_route']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_route']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_route']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_route']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_route']['field_api_classes'] = 0;
  /* Field: Content: Type */
  $handler->display->display_options['fields']['field_drug_type']['id'] = 'field_drug_type';
  $handler->display->display_options['fields']['field_drug_type']['table'] = 'field_data_field_drug_type';
  $handler->display->display_options['fields']['field_drug_type']['field'] = 'field_drug_type';
  $handler->display->display_options['fields']['field_drug_type']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_drug_type']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_drug_type']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_drug_type']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_drug_type']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_drug_type']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_drug_type']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_drug_type']['field_api_classes'] = 0;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['edit_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['edit_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['edit_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['edit_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['edit_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['edit_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Title';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
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
    'drug' => 'drug',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Brand or Generic? (field_brand_or_generic_) */
  $handler->display->display_options['filters']['field_brand_or_generic__value']['id'] = 'field_brand_or_generic__value';
  $handler->display->display_options['filters']['field_brand_or_generic__value']['table'] = 'field_data_field_brand_or_generic_';
  $handler->display->display_options['filters']['field_brand_or_generic__value']['field'] = 'field_brand_or_generic__value';
  $handler->display->display_options['filters']['field_brand_or_generic__value']['value'] = array(
    'all' => 'all',
    0 => '0',
    1 => '1',
  );
  $handler->display->display_options['filters']['field_brand_or_generic__value']['group'] = 1;
  $handler->display->display_options['filters']['field_brand_or_generic__value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_brand_or_generic__value']['expose']['operator_id'] = 'field_brand_or_generic__value_op';
  $handler->display->display_options['filters']['field_brand_or_generic__value']['expose']['label'] = 'Brand or Generic? (field_brand_or_generic_)';
  $handler->display->display_options['filters']['field_brand_or_generic__value']['expose']['operator'] = 'field_brand_or_generic__value_op';
  $handler->display->display_options['filters']['field_brand_or_generic__value']['expose']['identifier'] = 'field_brand_or_generic__value';
  $handler->display->display_options['filters']['field_brand_or_generic__value']['expose']['reduce'] = 0;
  /* Filter criterion: Content: FDA ID (field_fda_id) */
  $handler->display->display_options['filters']['field_fda_id_value']['id'] = 'field_fda_id_value';
  $handler->display->display_options['filters']['field_fda_id_value']['table'] = 'field_data_field_fda_id';
  $handler->display->display_options['filters']['field_fda_id_value']['field'] = 'field_fda_id_value';
  $handler->display->display_options['filters']['field_fda_id_value']['group'] = 1;
  $handler->display->display_options['filters']['field_fda_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fda_id_value']['expose']['operator_id'] = 'field_fda_id_value_op';
  $handler->display->display_options['filters']['field_fda_id_value']['expose']['label'] = 'FDA ID (field_fda_id)';
  $handler->display->display_options['filters']['field_fda_id_value']['expose']['operator'] = 'field_fda_id_value_op';
  $handler->display->display_options['filters']['field_fda_id_value']['expose']['identifier'] = 'field_fda_id_value';
  $handler->display->display_options['filters']['field_fda_id_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_fda_id_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_fda_id_value']['expose']['autocomplete_filter'] = 1;
  /* Filter criterion: Content: FDA Product ID (field_fda_product_id) */
  $handler->display->display_options['filters']['field_fda_product_id_value']['id'] = 'field_fda_product_id_value';
  $handler->display->display_options['filters']['field_fda_product_id_value']['table'] = 'field_data_field_fda_product_id';
  $handler->display->display_options['filters']['field_fda_product_id_value']['field'] = 'field_fda_product_id_value';
  $handler->display->display_options['filters']['field_fda_product_id_value']['group'] = 1;
  $handler->display->display_options['filters']['field_fda_product_id_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_fda_product_id_value']['expose']['operator_id'] = 'field_fda_product_id_value_op';
  $handler->display->display_options['filters']['field_fda_product_id_value']['expose']['label'] = 'FDA Product ID';
  $handler->display->display_options['filters']['field_fda_product_id_value']['expose']['operator'] = 'field_fda_product_id_value_op';
  $handler->display->display_options['filters']['field_fda_product_id_value']['expose']['identifier'] = 'field_fda_product_id_value';
  $handler->display->display_options['filters']['field_fda_product_id_value']['expose']['required'] = 0;
  $handler->display->display_options['filters']['field_fda_product_id_value']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['field_fda_product_id_value']['expose']['autocomplete_filter'] = 1;
  /* Filter criterion: Content: Ingredients (field_ingredients_collection) */
  $handler->display->display_options['filters']['field_ingredients_collection_value']['id'] = 'field_ingredients_collection_value';
  $handler->display->display_options['filters']['field_ingredients_collection_value']['table'] = 'field_data_field_ingredients_collection';
  $handler->display->display_options['filters']['field_ingredients_collection_value']['field'] = 'field_ingredients_collection_value';
  $handler->display->display_options['filters']['field_ingredients_collection_value']['group'] = 1;
  $handler->display->display_options['filters']['field_ingredients_collection_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_ingredients_collection_value']['expose']['operator_id'] = 'field_ingredients_collection_value_op';
  $handler->display->display_options['filters']['field_ingredients_collection_value']['expose']['label'] = 'Ingredients (field_ingredients_collection)';
  $handler->display->display_options['filters']['field_ingredients_collection_value']['expose']['operator'] = 'field_ingredients_collection_value_op';
  $handler->display->display_options['filters']['field_ingredients_collection_value']['expose']['identifier'] = 'field_ingredients_collection_value';
  $handler->display->display_options['filters']['field_ingredients_collection_value']['expose']['multiple'] = FALSE;
  /* Filter criterion: Content: Route (field_route) */
  $handler->display->display_options['filters']['field_route_tid']['id'] = 'field_route_tid';
  $handler->display->display_options['filters']['field_route_tid']['table'] = 'field_data_field_route';
  $handler->display->display_options['filters']['field_route_tid']['field'] = 'field_route_tid';
  $handler->display->display_options['filters']['field_route_tid']['value'] = array(
    14096 => '14096',
    14101 => '14101',
    14148 => '14148',
    14173 => '14173',
    14118 => '14118',
    14136 => '14136',
    14114 => '14114',
    14153 => '14153',
    14160 => '14160',
    14072 => '14072',
    14066 => '14066',
    14059 => '14059',
    14168 => '14168',
    14169 => '14169',
    14176 => '14176',
    14187 => '14187',
    14135 => '14135',
    14112 => '14112',
    14154 => '14154',
    14188 => '14188',
    14133 => '14133',
    14131 => '14131',
    14183 => '14183',
    14119 => '14119',
    14120 => '14120',
    14141 => '14141',
    14065 => '14065',
    14181 => '14181',
    14152 => '14152',
    14147 => '14147',
    14144 => '14144',
    14130 => '14130',
    14062 => '14062',
    14054 => '14054',
    14167 => '14167',
    14115 => '14115',
    14182 => '14182',
    14084 => '14084',
    14064 => '14064',
    14145 => '14145',
    14043 => '14043',
    14146 => '14146',
    14159 => '14159',
    14143 => '14143',
    14061 => '14061',
    14132 => '14132',
    14151 => '14151',
    14048 => '14048',
    14128 => '14128',
    14111 => '14111',
    14113 => '14113',
    14057 => '14057',
    14083 => '14083',
    14094 => '14094',
    14161 => '14161',
    14103 => '14103',
    14078 => '14078',
  );
  $handler->display->display_options['filters']['field_route_tid']['group'] = 1;
  $handler->display->display_options['filters']['field_route_tid']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_route_tid']['expose']['operator_id'] = 'field_route_tid_op';
  $handler->display->display_options['filters']['field_route_tid']['expose']['label'] = 'Route:';
  $handler->display->display_options['filters']['field_route_tid']['expose']['operator'] = 'field_route_tid_op';
  $handler->display->display_options['filters']['field_route_tid']['expose']['identifier'] = 'field_route_tid';
  $handler->display->display_options['filters']['field_route_tid']['expose']['multiple'] = 1;
  $handler->display->display_options['filters']['field_route_tid']['expose']['reduce'] = 0;
  $handler->display->display_options['filters']['field_route_tid']['reduce_duplicates'] = 1;
  $handler->display->display_options['filters']['field_route_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_route_tid']['vocabulary'] = 'drug_route';
  $handler->display->display_options['filters']['field_route_tid']['hierarchy'] = 1;
  $handler->display->display_options['filters']['field_route_tid']['error_message'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/views/7402';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = '7402 Drugs';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'devel';
  $handler->display->display_options['menu']['context'] = 0;
  $export['7402_drugs'] = $view;

  $view = new view;
  $view->name = 'pharmacies_audit';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pharmacies Audit';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pharmacies Audit';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'street' => 'street',
    'address' => 'address',
    'city' => 'city',
    'province' => 'province',
    'postal_code' => 'postal_code',
    'views_bulk_operations' => 'views_bulk_operations',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'street' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'address' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'city' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'province' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'postal_code' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'views_bulk_operations' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
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
  $handler->display->display_options['fields']['street']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['street']['hide_empty'] = 0;
  $handler->display->display_options['fields']['street']['empty_zero'] = 0;
  $handler->display->display_options['fields']['street']['hide_alter_empty'] = 1;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address']['id'] = 'address';
  $handler->display->display_options['fields']['address']['table'] = 'location';
  $handler->display->display_options['fields']['address']['field'] = 'address';
  $handler->display->display_options['fields']['address']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['address']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['address']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['address']['alter']['external'] = 0;
  $handler->display->display_options['fields']['address']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['address']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['address']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['address']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['address']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['address']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['address']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['address']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['address']['alter']['html'] = 0;
  $handler->display->display_options['fields']['address']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['address']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['address']['hide_empty'] = 0;
  $handler->display->display_options['fields']['address']['empty_zero'] = 0;
  $handler->display->display_options['fields']['address']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['address']['hide'] = array(
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'country' => 0,
    'locpick' => 0,
    'fax' => 0,
    'phone' => 0,
    'province_name' => 0,
    'country_name' => 0,
    'map_link' => 0,
    'coords' => 0,
  );
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
  $handler->display->display_options['fields']['city']['element_default_classes'] = 1;
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
  $handler->display->display_options['fields']['province']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['province']['hide_empty'] = 0;
  $handler->display->display_options['fields']['province']['empty_zero'] = 0;
  $handler->display->display_options['fields']['province']['hide_alter_empty'] = 1;
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
  $handler->display->display_options['fields']['postal_code']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['postal_code']['hide_empty'] = 0;
  $handler->display->display_options['fields']['postal_code']['empty_zero'] = 0;
  $handler->display->display_options['fields']['postal_code']['hide_alter_empty'] = 1;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = 'Delete';
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['external'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['alter']['html'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_empty'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['empty_zero'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 1,
      'use_queue' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_message_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_goto_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['display_result'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['merge_single_action'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo']['force_single'] = 0;
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
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Name of Pharmacy';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  /* Filter criterion: Location: Postal Code */
  $handler->display->display_options['filters']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['filters']['postal_code']['table'] = 'location';
  $handler->display->display_options['filters']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['filters']['postal_code']['operator'] = 'starts';
  $handler->display->display_options['filters']['postal_code']['exposed'] = TRUE;
  $handler->display->display_options['filters']['postal_code']['expose']['operator_id'] = 'postal_code_op';
  $handler->display->display_options['filters']['postal_code']['expose']['label'] = 'Zip Code';
  $handler->display->display_options['filters']['postal_code']['expose']['operator'] = 'postal_code_op';
  $handler->display->display_options['filters']['postal_code']['expose']['identifier'] = 'postal_code';
  $handler->display->display_options['filters']['postal_code']['expose']['required'] = 0;
  $handler->display->display_options['filters']['postal_code']['expose']['multiple'] = FALSE;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/pharmacies';
  $export['pharmacies_audit'] = $view;

  return $export;
}
