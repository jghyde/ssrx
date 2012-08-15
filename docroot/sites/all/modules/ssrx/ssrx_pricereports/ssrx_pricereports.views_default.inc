<?php
/**
 * @file
 * ssrx_pricereports.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ssrx_pricereports_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'prescription_price_search';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Prescription Price Search';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Search';
  $handler->display->display_options['exposed_form']['options']['autosubmit'] = 0;
  $handler->display->display_options['exposed_form']['options']['autosubmit_hide'] = 1;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title_1' => 'title_1',
    'field_ingredients_collection' => 'field_ingredients_collection',
    'field_drug_autocomplete' => 'field_drug_autocomplete',
    'field_location' => 'field_location',
    'distance' => 'distance',
    'field_quantity' => 'field_quantity',
    'field_price' => 'field_price',
    'field_price_unit' => 'field_price_unit',
    'nid_1' => 'nid_1',
    'field_location_1' => 'field_location_1',
    'nid' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = 'field_price_unit';
  $handler->display->display_options['style_options']['info'] = array(
    'title_1' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_ingredients_collection' => array(
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_drug_autocomplete' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-left',
      'separator' => '',
      'empty_column' => 0,
    ),
    'distance' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_quantity' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-right',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_price_unit' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => 'views-align-center',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No prices found. Submit one? Do something else? ';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = FALSE;
  /* Relationship: Content: Location (field_location) */
  $handler->display->display_options['relationships']['field_location_nid']['id'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['table'] = 'field_data_field_location';
  $handler->display->display_options['relationships']['field_location_nid']['field'] = 'field_location_nid';
  $handler->display->display_options['relationships']['field_location_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_location_nid']['delta'] = '-1';
  /* Relationship: Content: Drug (field_drug_variety) */
  $handler->display->display_options['relationships']['field_drug_variety_nid']['id'] = 'field_drug_variety_nid';
  $handler->display->display_options['relationships']['field_drug_variety_nid']['table'] = 'field_data_field_drug_variety';
  $handler->display->display_options['relationships']['field_drug_variety_nid']['field'] = 'field_drug_variety_nid';
  $handler->display->display_options['relationships']['field_drug_variety_nid']['required'] = 0;
  $handler->display->display_options['relationships']['field_drug_variety_nid']['delta'] = '-1';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_drug_variety_nid';
  $handler->display->display_options['fields']['title_1']['label'] = 'Trade Name';
  $handler->display->display_options['fields']['title_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_type'] = 'div';
  $handler->display->display_options['fields']['title_1']['element_class'] = 'ingredient-reveal-click';
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  /* Field: Content: Ingredients */
  $handler->display->display_options['fields']['field_ingredients_collection']['id'] = 'field_ingredients_collection';
  $handler->display->display_options['fields']['field_ingredients_collection']['table'] = 'field_data_field_ingredients_collection';
  $handler->display->display_options['fields']['field_ingredients_collection']['field'] = 'field_ingredients_collection';
  $handler->display->display_options['fields']['field_ingredients_collection']['relationship'] = 'field_drug_variety_nid';
  $handler->display->display_options['fields']['field_ingredients_collection']['exclude'] = TRUE;
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
  $handler->display->display_options['fields']['field_ingredients_collection']['type'] = 'field_collection_fields';
  $handler->display->display_options['fields']['field_ingredients_collection']['settings'] = array(
    'view_mode' => 'token',
  );
  $handler->display->display_options['fields']['field_ingredients_collection']['group_rows'] = 1;
  $handler->display->display_options['fields']['field_ingredients_collection']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_ingredients_collection']['delta_reversed'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['delta_first_last'] = 0;
  $handler->display->display_options['fields']['field_ingredients_collection']['field_api_classes'] = 0;
  /* Field: Content: Drug Autocomplete */
  $handler->display->display_options['fields']['field_drug_autocomplete']['id'] = 'field_drug_autocomplete';
  $handler->display->display_options['fields']['field_drug_autocomplete']['table'] = 'field_data_field_drug_autocomplete';
  $handler->display->display_options['fields']['field_drug_autocomplete']['field'] = 'field_drug_autocomplete';
  $handler->display->display_options['fields']['field_drug_autocomplete']['relationship'] = 'field_drug_variety_nid';
  $handler->display->display_options['fields']['field_drug_autocomplete']['label'] = 'Drug Name';
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['text'] = '<a class="ingredient-title" href="" title="Narrow search to show only  [field_drug_autocomplete-value]">[field_drug_autocomplete-value]</a><br />
<div class="ingredient-details">
<label>Trade Name:</label> <span class="ingredient-reveal-click">[title_1]</span>
<div class="ingredient-reveal">
[field_ingredients_collection] 
</div>
</div>';
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_drug_autocomplete']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_drug_autocomplete']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_drug_autocomplete']['field_api_classes'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'Pharmacy';
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location']['type'] = 'node_reference_node';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'node_reference_view_mode' => 'teaser',
  );
  $handler->display->display_options['fields']['field_location']['field_api_classes'] = 0;
  /* Field: Location: Distance / Proximity */
  $handler->display->display_options['fields']['distance']['id'] = 'distance';
  $handler->display->display_options['fields']['distance']['table'] = 'location';
  $handler->display->display_options['fields']['distance']['field'] = 'distance';
  $handler->display->display_options['fields']['distance']['relationship'] = 'field_location_nid';
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
  /* Field: Content: Quantity */
  $handler->display->display_options['fields']['field_quantity']['id'] = 'field_quantity';
  $handler->display->display_options['fields']['field_quantity']['table'] = 'field_data_field_quantity';
  $handler->display->display_options['fields']['field_quantity']['field'] = 'field_quantity';
  $handler->display->display_options['fields']['field_quantity']['label'] = 'Qty';
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
  $handler->display->display_options['fields']['field_quantity']['field_api_classes'] = 0;
  /* Field: Content: Price */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_price']['alter']['text'] = '$[field_price-value]';
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
  /* Field: Content: Price/Unit */
  $handler->display->display_options['fields']['field_price_unit']['id'] = 'field_price_unit';
  $handler->display->display_options['fields']['field_price_unit']['table'] = 'field_data_field_price_unit';
  $handler->display->display_options['fields']['field_price_unit']['field'] = 'field_price_unit';
  $handler->display->display_options['fields']['field_price_unit']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_price_unit']['alter']['text'] = '$[field_price_unit-value]';
  $handler->display->display_options['fields']['field_price_unit']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_price_unit']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_price_unit']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['element_label_colon'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_price_unit']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_price_unit']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_price_unit']['type'] = 'computed_field_computed_value';
  $handler->display->display_options['fields']['field_price_unit']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Confirm Price';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nid_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nid_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nid_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nid_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nid_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid_1']['link_to_node'] = 0;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location_1']['id'] = 'field_location_1';
  $handler->display->display_options['fields']['field_location_1']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location_1']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location_1']['label'] = 'Location NID';
  $handler->display->display_options['fields']['field_location_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_location_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_1']['type'] = 'node_reference_nid';
  $handler->display->display_options['fields']['field_location_1']['field_api_classes'] = 0;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_drug_variety_nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Report Price';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['nid']['alter']['text'] = '<a href="/report/drug/[nid]/pharmacy/[field_location_1]">Report Prices</a>
';
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
  $handler->display->display_options['fields']['nid']['element_type'] = 'div';
  $handler->display->display_options['fields']['nid']['element_class'] = 'ssrxbutton';
  $handler->display->display_options['fields']['nid']['element_label_type'] = 'div';
  $handler->display->display_options['fields']['nid']['element_label_class'] = 'report-prices';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['nid']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['nid']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nid']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nid']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['nid']['link_to_node'] = 0;
  /* Sort criterion: MIN(Content: Price (field_price)) */
  $handler->display->display_options['sorts']['field_price_value']['id'] = 'field_price_value';
  $handler->display->display_options['sorts']['field_price_value']['table'] = 'field_data_field_price';
  $handler->display->display_options['sorts']['field_price_value']['field'] = 'field_price_value';
  $handler->display->display_options['sorts']['field_price_value']['group_type'] = 'min';
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Title */
  $handler->display->display_options['filters']['title']['id'] = 'title';
  $handler->display->display_options['filters']['title']['table'] = 'node';
  $handler->display->display_options['filters']['title']['field'] = 'title';
  $handler->display->display_options['filters']['title']['operator'] = 'starts';
  $handler->display->display_options['filters']['title']['group'] = 1;
  $handler->display->display_options['filters']['title']['exposed'] = TRUE;
  $handler->display->display_options['filters']['title']['expose']['operator_id'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['label'] = 'Enter Prescription Drug Name';
  $handler->display->display_options['filters']['title']['expose']['operator'] = 'title_op';
  $handler->display->display_options['filters']['title']['expose']['identifier'] = 'title';
  $handler->display->display_options['filters']['title']['expose']['required'] = 0;
  $handler->display->display_options['filters']['title']['expose']['multiple'] = FALSE;
  /* Filter criterion: Location: Distance / Proximity */
  $handler->display->display_options['filters']['distance']['id'] = 'distance';
  $handler->display->display_options['filters']['distance']['table'] = 'location';
  $handler->display->display_options['filters']['distance']['field'] = 'distance';
  $handler->display->display_options['filters']['distance']['relationship'] = 'field_location_nid';
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
  $handler->display->display_options['filters']['distance']['exposed'] = TRUE;
  $handler->display->display_options['filters']['distance']['expose']['operator_id'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['label'] = 'City, State or Zip';
  $handler->display->display_options['filters']['distance']['expose']['operator'] = 'distance_op';
  $handler->display->display_options['filters']['distance']['expose']['identifier'] = 'distance';
  $handler->display->display_options['filters']['distance']['expose']['required'] = 1;
  $handler->display->display_options['filters']['distance']['expose']['multiple'] = FALSE;
  $handler->display->display_options['filters']['distance']['expose']['gmap_macro'] = array(
    'default' => '[gmap ]',
  );
  $handler->display->display_options['filters']['distance']['expose']['user_location_choose'] = array(
    'default' => FALSE,
  );
  $handler->display->display_options['filters']['distance']['origin'] = 'postal_default';

  /* Display: Search Page */
  $handler = $view->new_display('page', 'Search Page', 'page');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['exposed_block'] = TRUE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'No prices found. Select a pharmacy below to report a price.';
  $handler->display->display_options['empty']['area']['format'] = 'filtered_html';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  /* No results behavior: Global: View area */
  $handler->display->display_options['empty']['view']['id'] = 'view';
  $handler->display->display_options['empty']['view']['table'] = 'views';
  $handler->display->display_options['empty']['view']['field'] = 'view';
  $handler->display->display_options['empty']['view']['empty'] = FALSE;
  $handler->display->display_options['empty']['view']['view_to_insert'] = 'pharmacies:attachment_3';
  $handler->display->display_options['empty']['view']['inherit_arguments'] = 1;
  $handler->display->display_options['path'] = 'prescriptions';

  /* Display: Price Range */
  $handler = $view->new_display('attachment', 'Price Range', 'attachment_1');
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'title',
      'rendered' => 0,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['inline'] = array(
    'title' => 'title',
    'field_price' => 'field_price',
    'field_price_1' => 'field_price_1',
  );
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
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
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: MIN(Lowest Price) */
  $handler->display->display_options['fields']['field_price']['id'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price']['group_type'] = 'min';
  $handler->display->display_options['fields']['field_price']['ui_name'] = 'Lowest Price';
  $handler->display->display_options['fields']['field_price']['label'] = 'Low';
  $handler->display->display_options['fields']['field_price']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_price']['alter']['text'] = '$[field_price]';
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
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_price']['field_api_classes'] = 0;
  /* Field: MAX(Highest price) */
  $handler->display->display_options['fields']['field_price_1']['id'] = 'field_price_1';
  $handler->display->display_options['fields']['field_price_1']['table'] = 'field_data_field_price';
  $handler->display->display_options['fields']['field_price_1']['field'] = 'field_price';
  $handler->display->display_options['fields']['field_price_1']['group_type'] = 'max';
  $handler->display->display_options['fields']['field_price_1']['ui_name'] = 'Highest price';
  $handler->display->display_options['fields']['field_price_1']['label'] = 'High';
  $handler->display->display_options['fields']['field_price_1']['alter']['alter_text'] = 1;
  $handler->display->display_options['fields']['field_price_1']['alter']['text'] = '$[field_price_1]';
  $handler->display->display_options['fields']['field_price_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_price_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_price_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_price_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_price_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_price_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_price_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_price_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_price_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_price_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_price_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_price_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_price_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_price_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_price_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_price_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_price_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_price_1']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  $handler->display->display_options['fields']['field_price_1']['field_api_classes'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['exclude'] = TRUE;
  $handler->display->display_options['fields']['status']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['status']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['status']['alter']['external'] = 0;
  $handler->display->display_options['fields']['status']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['status']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['status']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['status']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['status']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['status']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['status']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['status']['alter']['html'] = 0;
  $handler->display->display_options['fields']['status']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['status']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['status']['hide_empty'] = 0;
  $handler->display->display_options['fields']['status']['empty_zero'] = 0;
  $handler->display->display_options['fields']['status']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['status']['not'] = 0;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = 1;

  /* Display: Map */
  $handler = $view->new_display('attachment', 'Map', 'attachment_2');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'ssrxmap';
  $handler->display->display_options['style_options']['datasource'] = 'fields';
  $handler->display->display_options['style_options']['markertype'] = 'small red';
  $handler->display->display_options['style_options']['latfield'] = 'field_location';
  $handler->display->display_options['style_options']['lonfield'] = 'field_location';
  $handler->display->display_options['style_options']['markerfield'] = 'field_location';
  $handler->display->display_options['style_options']['enablermt'] = 0;
  $handler->display->display_options['style_options']['rmtfield'] = 'field_location';
  $handler->display->display_options['style_options']['center_on_nodearg'] = 1;
  $handler->display->display_options['style_options']['tooltipfield'] = 'field_location';
  $handler->display->display_options['style_options']['bubbletextfield'] = 'field_location';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 1;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['label'] = 'No Results';
  $handler->display->display_options['empty']['area']['empty'] = FALSE;
  $handler->display->display_options['empty']['area']['content'] = 'We found no price reports for the drug name and area you are searching. Please select a pharmacy below and help others and win!';
  $handler->display->display_options['empty']['area']['format'] = 'wysiwyg';
  $handler->display->display_options['empty']['area']['tokenize'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['field_location']['label'] = 'Pharmacy';
  $handler->display->display_options['fields']['field_location']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_location']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['field_location']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['field_location']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location']['field_api_classes'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'node';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['relationship'] = 'field_location_nid';
  $handler->display->display_options['fields']['title_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title_1']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title_1']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title_1']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['inherit_exposed_filters'] = 1;

  /* Display: jQuery Manual Filters */
  $handler = $view->new_display('attachment', 'jQuery Manual Filters', 'attachment_3');
  $handler->display->display_options['defaults']['group_by'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['empty'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = '';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['external'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['nothing']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['nothing']['alter']['html'] = 0;
  $handler->display->display_options['fields']['nothing']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['nothing']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['nothing']['hide_empty'] = 0;
  $handler->display->display_options['fields']['nothing']['empty_zero'] = 0;
  $handler->display->display_options['fields']['nothing']['hide_alter_empty'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['exclude'] = TRUE;
  $handler->display->display_options['fields']['title']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['title']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['title']['alter']['external'] = 0;
  $handler->display->display_options['fields']['title']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['title']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['title']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['title']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['title']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['title']['alter']['html'] = 0;
  $handler->display->display_options['fields']['title']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 1;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  $handler->display->display_options['displays'] = array(
    'default' => 0,
    'page' => 0,
  );
  $export['prescription_price_search'] = $view;

  return $export;
}
