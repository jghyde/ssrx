<?php
/**
 * @file
 * ssrx_pharmacies.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ssrx_pharmacies_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'pharmacies';
  $view->description = 'The pages listing pharmacies';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pharmacies';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Find a Pharmacy';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'ssrxmap';
  $handler->display->display_options['style_options']['markertype'] = 'small red';
  $handler->display->display_options['style_options']['latfield'] = 'title';
  $handler->display->display_options['style_options']['lonfield'] = 'title';
  $handler->display->display_options['style_options']['markerfield'] = 'title';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'title';
  $handler->display->display_options['style_options']['tooltipfield'] = 'title';
  $handler->display->display_options['style_options']['bubbletextfield'] = 'title';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'address_1' => 'address_1',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Pharmacy Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'pharmacy-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address_1']['id'] = 'address_1';
  $handler->display->display_options['fields']['address_1']['table'] = 'location';
  $handler->display->display_options['fields']['address_1']['field'] = 'address';
  $handler->display->display_options['fields']['address_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['address_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['address_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['address_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['address_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['address_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['address_1']['hide'] = array(
    'country' => 'country',
    'locpick' => 'locpick',
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'coords' => 'coords',
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'fax' => 0,
    'phone' => 0,
    'province_name' => 0,
  );
  /* Field: Content: Rating */
  $handler->display->display_options['fields']['field_pharmacy_rating']['id'] = 'field_pharmacy_rating';
  $handler->display->display_options['fields']['field_pharmacy_rating']['table'] = 'field_data_field_pharmacy_rating';
  $handler->display->display_options['fields']['field_pharmacy_rating']['field'] = 'field_pharmacy_rating';
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_pharmacy_rating']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_pharmacy_rating']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_pharmacy_rating']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_pharmacy_rating']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_pharmacy_rating']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'default',
    ),
    'expose' => 0,
    'style' => 'average',
    'text' => 'average',
  );
  $handler->display->display_options['fields']['field_pharmacy_rating']['field_api_classes'] = 0;
  /* Field: Content: 24 Hour Pharmacy */
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['id'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['table'] = 'field_data_field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['label'] = '24 Hour';
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
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'ssrx.button';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  /* Sort criterion: Location: Distance / Proximity */
  $handler->display->display_options['sorts']['distance']['id'] = 'distance';
  $handler->display->display_options['sorts']['distance']['table'] = 'location';
  $handler->display->display_options['sorts']['distance']['field'] = 'distance';
  $handler->display->display_options['sorts']['distance']['origin'] = 'postal_default';
  $handler->display->display_options['sorts']['distance']['postal_code'] = '67401';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pharmacy' => 'pharmacy',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Enter Pharmacy Name Here';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'search_distance' => '25',
    'search_units' => 'mile',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';
  /* Filter criterion: Content: 24 Hour Pharmacy (field_24_hour_pharmacy) */
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['id'] = 'field_24_hour_pharmacy_value';
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['table'] = 'field_data_field_24_hour_pharmacy';
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['field'] = 'field_24_hour_pharmacy_value';
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['value'] = array(
    1 => '1',
  );

  /* Display: Pharmacy Search Page */
  $handler = $view->new_display('page', 'Pharmacy Search Page', 'page');
  $handler->display->display_options['display_description'] = 'The main page of /pharmacies where people can search for pharmacies';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'address_1' => 'address_1',
    'field_24_hour_pharmacy' => 'field_24_hour_pharmacy',
    'field_pharmacy_rating' => 'field_pharmacy_rating',
    'view_node' => 'view_node',
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
    'address_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_24_hour_pharmacy' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pharmacy_rating' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Pharmacy';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'pharmacy-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address_1']['id'] = 'address_1';
  $handler->display->display_options['fields']['address_1']['table'] = 'location';
  $handler->display->display_options['fields']['address_1']['field'] = 'address';
  $handler->display->display_options['fields']['address_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['address_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['address_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['address_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['address_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['address_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['address_1']['hide'] = array(
    'country' => 'country',
    'locpick' => 'locpick',
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'coords' => 'coords',
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'fax' => 0,
    'phone' => 0,
    'province_name' => 0,
  );
  /* Field: Content: 24 Hour Pharmacy */
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['id'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['table'] = 'field_data_field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['label'] = '24-Hour?';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['text'] = '<div class="istf-[field_24_hour_pharmacy-value]">[field_24_hour_pharmacy-value]</div>';
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
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['element_type'] = 'div';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['element_class'] = 'istf';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field_api_classes'] = 0;
  /* Field: Location: Distance / Proximity */
  $handler->display->display_options['fields']['distance']['id'] = 'distance';
  $handler->display->display_options['fields']['distance']['table'] = 'location';
  $handler->display->display_options['fields']['distance']['field'] = 'distance';
  $handler->display->display_options['fields']['distance']['label'] = 'Distance';
  $handler->display->display_options['fields']['distance']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['external'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['html'] = 0;
  $handler->display->display_options['fields']['distance']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['distance']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['distance']['hide_empty'] = 0;
  $handler->display->display_options['fields']['distance']['empty_zero'] = 0;
  $handler->display->display_options['fields']['distance']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['distance']['units'] = 'mi';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'View';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'ssrx.button';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Location: Distance / Proximity */
  $handler->display->display_options['sorts']['distance']['id'] = 'distance';
  $handler->display->display_options['sorts']['distance']['table'] = 'location';
  $handler->display->display_options['sorts']['distance']['field'] = 'distance';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pharmacy' => 'pharmacy',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Enter Pharmacy Name Here';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'search_distance' => '25',
    'search_units' => 'mile',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';
  $handler->display->display_options['path'] = 'pharmacies/search';

  /* Display: Pharmacy GMap Attachment */
  $handler = $view->new_display('attachment', 'Pharmacy GMap Attachment', 'attachment_1');
  $handler->display->display_options['display_description'] = 'Attachment views of a map of pharmacies';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ssrxmap';
  $handler->display->display_options['style_options']['markertype'] = 'small red';
  $handler->display->display_options['style_options']['latfield'] = 'title';
  $handler->display->display_options['style_options']['lonfield'] = 'title';
  $handler->display->display_options['style_options']['markerfield'] = 'title';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'title';
  $handler->display->display_options['style_options']['center_on_nodearg'] = 1;
  $handler->display->display_options['style_options']['tooltipfield'] = 'title';
  $handler->display->display_options['style_options']['bubbletextenabled'] = 1;
  $handler->display->display_options['style_options']['bubbletextfield'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'pharmacy-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address_1']['id'] = 'address_1';
  $handler->display->display_options['fields']['address_1']['table'] = 'location';
  $handler->display->display_options['fields']['address_1']['field'] = 'address';
  $handler->display->display_options['fields']['address_1']['label'] = '';
  $handler->display->display_options['fields']['address_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['address_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['address_1']['element_class'] = 'pharmacy-address';
  $handler->display->display_options['fields']['address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['address_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['address_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['address_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['address_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['address_1']['hide'] = array(
    'country' => 'country',
    'locpick' => 'locpick',
    'fax' => 'fax',
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'coords' => 'coords',
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'phone' => 0,
    'province_name' => 0,
  );
  /* Field: Content: 24 Hour Pharmacy */
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['id'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['table'] = 'field_data_field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['label'] = '';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['text'] = '<div class="istf-[field_24_hour_pharmacy-value]">[field_24_hour_pharmacy-value]</div>';
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
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'ssrx.button';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Location: Postal Code */
  $handler->display->display_options['sorts']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['sorts']['postal_code']['table'] = 'location';
  $handler->display->display_options['sorts']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pharmacy' => 'pharmacy',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Enter Pharmacy Name Here';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'search_distance' => '10',
    'search_units' => 'mile',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = 1;
  $handler->display->display_options['inherit_pager'] = 1;

  /* Display: Find a 24-Hour Pharmacy */
  $handler = $view->new_display('page', 'Find a 24-Hour Pharmacy', 'page_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Find a 24-hour Pharmacy';
  $handler->display->display_options['display_description'] = 'The page of /pharmacies/24 where people can search for 24-hour pharmacies';
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['expose']['items_per_page_options_all'] = 0;
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'address_1' => 'address_1',
    'field_pharmacy_rating' => 'field_pharmacy_rating',
    'field_24_hour_pharmacy' => 'field_24_hour_pharmacy',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'address_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pharmacy_rating' => array(
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
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Pharmacy Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'pharmacy-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address_1']['id'] = 'address_1';
  $handler->display->display_options['fields']['address_1']['table'] = 'location';
  $handler->display->display_options['fields']['address_1']['field'] = 'address';
  $handler->display->display_options['fields']['address_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['address_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['address_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['address_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['address_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['address_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['address_1']['hide'] = array(
    'country' => 'country',
    'locpick' => 'locpick',
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'coords' => 'coords',
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'fax' => 0,
    'phone' => 0,
    'province_name' => 0,
  );
  /* Field: Content: 24 Hour Pharmacy */
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['id'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['table'] = 'field_data_field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['label'] = '24-Hour?';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['text'] = '<div class="istf-[field_24_hour_pharmacy-value]">[field_24_hour_pharmacy-value]</div>';
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
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field_api_classes'] = 0;
  /* Field: Location: Distance / Proximity */
  $handler->display->display_options['fields']['distance']['id'] = 'distance';
  $handler->display->display_options['fields']['distance']['table'] = 'location';
  $handler->display->display_options['fields']['distance']['field'] = 'distance';
  $handler->display->display_options['fields']['distance']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['external'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['html'] = 0;
  $handler->display->display_options['fields']['distance']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['distance']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['distance']['hide_empty'] = 0;
  $handler->display->display_options['fields']['distance']['empty_zero'] = 0;
  $handler->display->display_options['fields']['distance']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['distance']['units'] = 'mi';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'View';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'ssrx.button';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Location: Distance / Proximity */
  $handler->display->display_options['sorts']['distance']['id'] = 'distance';
  $handler->display->display_options['sorts']['distance']['table'] = 'location';
  $handler->display->display_options['sorts']['distance']['field'] = 'distance';
  $handler->display->display_options['sorts']['distance']['origin'] = 'postal_default';
  $handler->display->display_options['sorts']['distance']['postal_code'] = '77450';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pharmacy' => 'pharmacy',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Enter Pharmacy Name Here';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'search_distance' => '25',
    'search_units' => 'mile',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';
  /* Filter criterion: Content: 24 Hour Pharmacy (field_24_hour_pharmacy) */
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['id'] = 'field_24_hour_pharmacy_value';
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['table'] = 'field_data_field_24_hour_pharmacy';
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['field'] = 'field_24_hour_pharmacy_value';
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['path'] = 'pharmacies/search/24';

  /* Display: 24-hour Pharmacy GMap Attachment */
  $handler = $view->new_display('attachment', '24-hour Pharmacy GMap Attachment', 'attachment_2');
  $handler->display->display_options['display_description'] = 'Attachment GMap of 24-hour pharmacies';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ssrxmap';
  $handler->display->display_options['style_options']['markertype'] = 'small red';
  $handler->display->display_options['style_options']['latfield'] = 'title';
  $handler->display->display_options['style_options']['lonfield'] = 'title';
  $handler->display->display_options['style_options']['markerfield'] = 'title';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'title';
  $handler->display->display_options['style_options']['center_on_nodearg'] = 1;
  $handler->display->display_options['style_options']['tooltipfield'] = 'title';
  $handler->display->display_options['style_options']['bubbletextenabled'] = 1;
  $handler->display->display_options['style_options']['bubbletextfield'] = 'title';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'pharmacy-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address_1']['id'] = 'address_1';
  $handler->display->display_options['fields']['address_1']['table'] = 'location';
  $handler->display->display_options['fields']['address_1']['field'] = 'address';
  $handler->display->display_options['fields']['address_1']['label'] = '';
  $handler->display->display_options['fields']['address_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['address_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['address_1']['element_class'] = 'pharmacy-address';
  $handler->display->display_options['fields']['address_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['address_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['address_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['address_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['address_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['address_1']['hide'] = array(
    'country' => 'country',
    'locpick' => 'locpick',
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'coords' => 'coords',
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'fax' => 0,
    'phone' => 0,
    'province_name' => 0,
  );
  /* Field: Content: 24 Hour Pharmacy */
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['id'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['table'] = 'field_data_field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field'] = 'field_24_hour_pharmacy';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['label'] = '24 Hour';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['alter']['text'] = '<div class="istf-[field_24_hour_pharmacy-value]">[field_24_hour_pharmacy-value]</div>';
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
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['type'] = 'list_key';
  $handler->display->display_options['fields']['field_24_hour_pharmacy']['field_api_classes'] = 0;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = '';
  $handler->display->display_options['fields']['view_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['view_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['view_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['view_node']['element_type'] = 'div';
  $handler->display->display_options['fields']['view_node']['element_class'] = 'ssrx.button';
  $handler->display->display_options['fields']['view_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['view_node']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['view_node']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['view_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['view_node']['hide_alter_empty'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
  /* Sort criterion: Location: Distance / Proximity */
  $handler->display->display_options['sorts']['distance']['id'] = 'distance';
  $handler->display->display_options['sorts']['distance']['table'] = 'location';
  $handler->display->display_options['sorts']['distance']['field'] = 'distance';
  $handler->display->display_options['sorts']['distance']['origin'] = 'postal_default';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pharmacy' => 'pharmacy',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Enter Pharmacy Name Here';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['title']['expose']['autocomplete_filter'] = 1;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'search_distance' => '25',
    'search_units' => 'mile',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';
  /* Filter criterion: Content: 24 Hour Pharmacy (field_24_hour_pharmacy) */
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['id'] = 'field_24_hour_pharmacy_value';
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['table'] = 'field_data_field_24_hour_pharmacy';
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['field'] = 'field_24_hour_pharmacy_value';
  $handler->display->display_options['filters']['field_24_hour_pharmacy_value']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['displays'] = array(
    'page_1' => 'page_1',
    'default' => 0,
    'page' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = 1;
  $handler->display->display_options['inherit_pager'] = 1;

  /* Display: Pharmacy Table Attachment */
  $handler = $view->new_display('attachment', 'Pharmacy Table Attachment', 'attachment_3');
  $handler->display->display_options['display_description'] = 'Attachment views of pharmacies';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '25';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'address_1' => 'address_1',
    'field_pharmacy_rating' => 'field_pharmacy_rating',
    'field_24_hour_pharmacy' => 'field_24_hour_pharmacy',
    'view_node' => 'view_node',
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
    'address_1' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_pharmacy_rating' => array(
      'sortable' => 1,
      'default_sort_order' => 'desc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_24_hour_pharmacy' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'view_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 1;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Pharmacy Name';
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 0;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 0;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_type'] = 'h4';
  $handler->display->display_options['fields']['title']['element_class'] = 'pharmacy-title';
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Location: Address */
  $handler->display->display_options['fields']['address_1']['id'] = 'address_1';
  $handler->display->display_options['fields']['address_1']['table'] = 'location';
  $handler->display->display_options['fields']['address_1']['field'] = 'address';
  $handler->display->display_options['fields']['address_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['address_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['address_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['address_1']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['address_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['address_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['address_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['address_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['address_1']['hide'] = array(
    'country' => 'country',
    'locpick' => 'locpick',
    'country_name' => 'country_name',
    'map_link' => 'map_link',
    'coords' => 'coords',
    'name' => 0,
    'street' => 0,
    'additional' => 0,
    'city' => 0,
    'province' => 0,
    'postal_code' => 0,
    'fax' => 0,
    'phone' => 0,
    'province_name' => 0,
  );
  /* Field: Location: Distance / Proximity */
  $handler->display->display_options['fields']['distance']['id'] = 'distance';
  $handler->display->display_options['fields']['distance']['table'] = 'location';
  $handler->display->display_options['fields']['distance']['field'] = 'distance';
  $handler->display->display_options['fields']['distance']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['external'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['distance']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['distance']['alter']['html'] = 0;
  $handler->display->display_options['fields']['distance']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['distance']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['distance']['hide_empty'] = 0;
  $handler->display->display_options['fields']['distance']['empty_zero'] = 0;
  $handler->display->display_options['fields']['distance']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['distance']['units'] = 'mi';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'Report Prices';
  $handler->display->display_options['fields']['php']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['php']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['php']['alter']['external'] = 0;
  $handler->display->display_options['fields']['php']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['php']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['php']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['php']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['php']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['php']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['php']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['php']['alter']['html'] = 0;
  $handler->display->display_options['fields']['php']['element_type'] = 'div';
  $handler->display->display_options['fields']['php']['element_class'] = 'ssrxbutton';
  $handler->display->display_options['fields']['php']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['php']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['php']['hide_empty'] = 0;
  $handler->display->display_options['fields']['php']['empty_zero'] = 0;
  $handler->display->display_options['fields']['php']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php 
if ($_GET[\'title\']) {
  $drug = urldecode($_GET[\'title\']);
  $drug = urlencode($drug);
}
else {
  $drug = 99999999;
}
$value =  l(\'Report Prices\', \'report/drug/\' . $drug . \'/pharmacy/\' . $row->nid);
print  $value; 
 ?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Location: Distance / Proximity */
  $handler->display->display_options['sorts']['distance']['id'] = 'distance';
  $handler->display->display_options['sorts']['distance']['table'] = 'location';
  $handler->display->display_options['sorts']['distance']['field'] = 'distance';
  $handler->display->display_options['sorts']['distance']['origin'] = 'postal_default';
  $handler->display->display_options['sorts']['distance']['postal_code'] = '77450';
  /* Sort criterion: Location: Postal Code */
  $handler->display->display_options['sorts']['postal_code']['id'] = 'postal_code';
  $handler->display->display_options['sorts']['postal_code']['table'] = 'location';
  $handler->display->display_options['sorts']['postal_code']['field'] = 'postal_code';
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pharmacy' => 'pharmacy',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['operator'] = 'dist';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'search_distance' => '10',
    'search_units' => 'mile',
  );
  $handler->display->display_options['filters']['distance']['group'] = 1;
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
    'page_1' => 0,
  );
  $handler->display->display_options['attachment_position'] = 'after';
  $handler->display->display_options['inherit_exposed_filters'] = 1;
  $export['pharmacies'] = $view;

  $view = new view;
  $view->name = 'pharmacy_map';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Pharmacy Map';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Pharmacy Map';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'gmap';
  $handler->display->display_options['style_options']['latfield'] = 'title';
  $handler->display->display_options['style_options']['lonfield'] = 'title';
  $handler->display->display_options['style_options']['markerfield'] = 'title';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'title';
  $handler->display->display_options['style_options']['tooltipfield'] = 'title';
  $handler->display->display_options['style_options']['bubbletextfield'] = 'title';
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
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['value'] = array(
    'latitude' => '',
    'longitude' => '',
    'postal_code' => '',
    'country' => '',
    'php_code' => '',
    'nid_arg' => '',
    'nid_loc_field' => 'node',
    'uid_arg' => '',
    'search_distance' => '100',
    'search_units' => 'mile',
  );
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['label'] = 'Distance / Proximity';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pharmacy-map';
  $export['pharmacy_map'] = $view;

  return $export;
}
