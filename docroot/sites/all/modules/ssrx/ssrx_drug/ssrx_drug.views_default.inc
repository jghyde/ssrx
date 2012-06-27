<?php
/**
 * @file
 * ssrx_drug.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ssrx_drug_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'drugs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Drugs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Drugs';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
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
  /* Field: Content: Ingredients */
  $handler->display->display_options['fields']['field_ingredients_collection']['id'] = 'field_ingredients_collection';
  $handler->display->display_options['fields']['field_ingredients_collection']['table'] = 'field_data_field_ingredients_collection';
  $handler->display->display_options['fields']['field_ingredients_collection']['field'] = 'field_ingredients_collection';
  $handler->display->display_options['fields']['field_ingredients_collection']['label'] = '';
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
  $handler->display->display_options['fields']['field_ingredients_collection']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ingredients_collection']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_ingredients_collection']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ingredients_collection']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_ingredients_collection']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ingredients_collection']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_ingredients_collection']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_ingredients_collection']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ingredients_collection']['delta_limit'] = '1';
  $handler->display->display_options['fields']['field_ingredients_collection']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ingredients_collection']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = '';
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
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Format */
  $handler->display->display_options['fields']['field_drug_format']['id'] = 'field_drug_format';
  $handler->display->display_options['fields']['field_drug_format']['table'] = 'field_data_field_drug_format';
  $handler->display->display_options['fields']['field_drug_format']['field'] = 'field_drug_format';
  $handler->display->display_options['fields']['field_drug_format']['label'] = '';
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
  $handler->display->display_options['fields']['field_drug_format']['element_type'] = '0';
  $handler->display->display_options['fields']['field_drug_format']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_drug_format']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_drug_format']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_drug_format']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_drug_format']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_drug_format']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_drug_format']['field_api_classes'] = 0;
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
    'drug' => 'drug',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'drugs';

  /* Display: References */
  $handler = $view->new_display('references', 'References', 'references_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'references_style';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 1,
      'rendered_strip' => 1,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'references_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['drugs'] = $view;

  return $export;
}
