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
  $view->name = 'prescription_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Prescription Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Find Prescription Drug Prices';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '100';
  $handler->display->display_options['style_plugin'] = 'grid';
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
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Location: City */
  $handler->display->display_options['arguments']['city']['id'] = 'city';
  $handler->display->display_options['arguments']['city']['table'] = 'location';
  $handler->display->display_options['arguments']['city']['field'] = 'city';
  $handler->display->display_options['arguments']['city']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['city']['default_argument_skip_url'] = 1;
  $handler->display->display_options['arguments']['city']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['city']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['city']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['city']['glossary'] = 0;
  $handler->display->display_options['arguments']['city']['limit'] = '0';
  $handler->display->display_options['arguments']['city']['transform_dash'] = 0;
  $handler->display->display_options['arguments']['city']['break_phrase'] = 0;
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
    'drug_price' => 'drug_price',
  );

  /* Display: Main Search Page */
  $handler = $view->new_display('page', 'Main Search Page', 'page');
  $handler->display->display_options['display_description'] = 'This is the main site search page where users search for and view prescription drug prices.';
  $handler->display->display_options['path'] = 'search';
  $export['prescription_search'] = $view;

  return $export;
}
