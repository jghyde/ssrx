<?php
/**
 * @file
 * ssrx_doctors.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ssrx_doctors_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'doctors';
  $view->description = 'Views of Doctors in the area';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Doctors';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_doctor_title' => 'field_doctor_title',
    'field_doctor_specialty' => 'field_doctor_specialty',
    'distance' => 'distance',
    'address' => 'address',
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
    'field_doctor_title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_doctor_specialty' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'distance' => array(
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
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 1;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Name';
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
  $handler->display->display_options['fields']['title']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  /* Field: Content: Doctor's Title */
  $handler->display->display_options['fields']['field_doctor_title']['id'] = 'field_doctor_title';
  $handler->display->display_options['fields']['field_doctor_title']['table'] = 'field_data_field_doctor_title';
  $handler->display->display_options['fields']['field_doctor_title']['field'] = 'field_doctor_title';
  $handler->display->display_options['fields']['field_doctor_title']['label'] = 'Title';
  $handler->display->display_options['fields']['field_doctor_title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_doctor_title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_doctor_title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_doctor_title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_doctor_title']['field_api_classes'] = 0;
  /* Field: Content: Specialty */
  $handler->display->display_options['fields']['field_doctor_specialty']['id'] = 'field_doctor_specialty';
  $handler->display->display_options['fields']['field_doctor_specialty']['table'] = 'field_data_field_doctor_specialty';
  $handler->display->display_options['fields']['field_doctor_specialty']['field'] = 'field_doctor_specialty';
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_doctor_specialty']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_doctor_specialty']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_doctor_specialty']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_doctor_specialty']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['distance']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['distance']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['distance']['hide_empty'] = 0;
  $handler->display->display_options['fields']['distance']['empty_zero'] = 0;
  $handler->display->display_options['fields']['distance']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['distance']['origin'] = 'tied';
  $handler->display->display_options['fields']['distance']['units'] = 'mi';
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
  /* Sort criterion: Location: Distance / Proximity */
  $handler->display->display_options['sorts']['distance']['id'] = 'distance';
  $handler->display->display_options['sorts']['distance']['table'] = 'location';
  $handler->display->display_options['sorts']['distance']['field'] = 'distance';
  $handler->display->display_options['sorts']['distance']['expose']['label'] = 'Distance / Proximity';
  $handler->display->display_options['sorts']['distance']['origin'] = 'postal_default';
  $handler->display->display_options['sorts']['distance']['postal_code'] = '76904';
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
    'doctors' => 'doctors',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'contains';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Doctor\'s Name Contains';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Doctor Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['ui_name'] = 'Doctor Proximity';
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

  /* Display: Doctors Search Page */
  $handler = $view->new_display('page', 'Doctors Search Page', 'page');
  $handler->display->display_options['display_description'] = 'the page at doctors/search';
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['path'] = 'doctors/search';
  $handler->display->display_options['menu']['title'] = 'Find Doctors';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;

  /* Display: Feed */
  $handler = $view->new_display('feed', 'Feed', 'feed');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['style_plugin'] = 'rss';
  $handler->display->display_options['row_plugin'] = 'node_rss';
  $handler->display->display_options['path'] = 'doctors/feed.xml';
  $handler->display->display_options['displays'] = array(
    'default' => 'default',
    'page' => 'page',
  );

  /* Display: Attachment Map */
  $handler = $view->new_display('attachment', 'Attachment Map', 'attachment_1');
  $handler->display->display_options['display_description'] = 'The map displaying the doctors';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1000';
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
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = 1;
  $handler->display->display_options['inherit_pager'] = 0;
  $export['doctors'] = $view;

  return $export;
}
