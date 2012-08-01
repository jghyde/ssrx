<?php
/**
 * @file
 * ssrx_ads.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function ssrx_ads_views_default_views() {
  $export = array();

  $view = new view;
  $view->name = 'ads';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_line_item';
  $view->human_name = 'Ads';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Ads';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '50';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'order_id' => 'order_id',
    'created' => 'created',
    'name' => 'name',
    'commerce_product' => 'commerce_product',
    'commerce_node_checkout_node' => 'commerce_node_checkout_node',
    'commerce_node_checkout_expires' => 'commerce_node_checkout_expires',
    'status' => 'status',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'order_id' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'created' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'name' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_product' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_node_checkout_node' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'commerce_node_checkout_expires' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'status' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['style_options']['override'] = 1;
  $handler->display->display_options['style_options']['sticky'] = 0;
  $handler->display->display_options['style_options']['empty_table'] = 0;
  /* Relationship: Commerce Line item: Associated content (commerce_node_checkout_node) */
  $handler->display->display_options['relationships']['commerce_node_checkout_node_nid']['id'] = 'commerce_node_checkout_node_nid';
  $handler->display->display_options['relationships']['commerce_node_checkout_node_nid']['table'] = 'field_data_commerce_node_checkout_node';
  $handler->display->display_options['relationships']['commerce_node_checkout_node_nid']['field'] = 'commerce_node_checkout_node_nid';
  $handler->display->display_options['relationships']['commerce_node_checkout_node_nid']['required'] = 1;
  $handler->display->display_options['relationships']['commerce_node_checkout_node_nid']['delta'] = '-1';
  /* Relationship: Content: Author */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'node';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  $handler->display->display_options['relationships']['uid']['relationship'] = 'commerce_node_checkout_node_nid';
  $handler->display->display_options['relationships']['uid']['required'] = 0;
  /* Field: Commerce Line Item: Order ID */
  $handler->display->display_options['fields']['order_id']['id'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['order_id']['field'] = 'order_id';
  $handler->display->display_options['fields']['order_id']['label'] = 'Order';
  $handler->display->display_options['fields']['order_id']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['external'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['order_id']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['order_id']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['order_id']['alter']['html'] = 0;
  $handler->display->display_options['fields']['order_id']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['order_id']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['order_id']['hide_empty'] = 0;
  $handler->display->display_options['fields']['order_id']['empty_zero'] = 0;
  $handler->display->display_options['fields']['order_id']['hide_alter_empty'] = 1;
  /* Field: Commerce Line Item: Created date */
  $handler->display->display_options['fields']['created']['id'] = 'created';
  $handler->display->display_options['fields']['created']['table'] = 'commerce_line_item';
  $handler->display->display_options['fields']['created']['field'] = 'created';
  $handler->display->display_options['fields']['created']['label'] = 'Created';
  $handler->display->display_options['fields']['created']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['created']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['created']['alter']['external'] = 0;
  $handler->display->display_options['fields']['created']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['created']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['created']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['created']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['created']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['created']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['created']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['created']['alter']['html'] = 0;
  $handler->display->display_options['fields']['created']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['created']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['created']['hide_empty'] = 0;
  $handler->display->display_options['fields']['created']['empty_zero'] = 0;
  $handler->display->display_options['fields']['created']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['created']['date_format'] = 'short';
  /* Field: User: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'users';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'uid';
  $handler->display->display_options['fields']['name']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['name']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['name']['alter']['external'] = 0;
  $handler->display->display_options['fields']['name']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['name']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['name']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['name']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['name']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['name']['alter']['html'] = 0;
  $handler->display->display_options['fields']['name']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['name']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['name']['hide_empty'] = 0;
  $handler->display->display_options['fields']['name']['empty_zero'] = 0;
  $handler->display->display_options['fields']['name']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['name']['link_to_user'] = 1;
  $handler->display->display_options['fields']['name']['overwrite_anonymous'] = 0;
  $handler->display->display_options['fields']['name']['format_username'] = 1;
  /* Field: Commerce Line item: Product */
  $handler->display->display_options['fields']['commerce_product']['id'] = 'commerce_product';
  $handler->display->display_options['fields']['commerce_product']['table'] = 'field_data_commerce_product';
  $handler->display->display_options['fields']['commerce_product']['field'] = 'commerce_product';
  $handler->display->display_options['fields']['commerce_product']['label'] = 'Length';
  $handler->display->display_options['fields']['commerce_product']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['commerce_product']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['commerce_product']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['commerce_product']['alter']['external'] = 0;
  $handler->display->display_options['fields']['commerce_product']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['commerce_product']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['commerce_product']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['commerce_product']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['commerce_product']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['commerce_product']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['commerce_product']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['commerce_product']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['commerce_product']['alter']['html'] = 0;
  $handler->display->display_options['fields']['commerce_product']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['commerce_product']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['commerce_product']['hide_empty'] = 0;
  $handler->display->display_options['fields']['commerce_product']['empty_zero'] = 0;
  $handler->display->display_options['fields']['commerce_product']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['commerce_product']['type'] = 'commerce_product_reference_title_link';
  $handler->display->display_options['fields']['commerce_product']['settings'] = array(
    'show_quantity' => 0,
    'default_quantity' => '1',
    'combine' => 1,
    'line_item_type' => 'product',
  );
  $handler->display->display_options['fields']['commerce_product']['field_api_classes'] = 0;
  /* Field: Commerce Line item: Associated content */
  $handler->display->display_options['fields']['commerce_node_checkout_node']['id'] = 'commerce_node_checkout_node';
  $handler->display->display_options['fields']['commerce_node_checkout_node']['table'] = 'field_data_commerce_node_checkout_node';
  $handler->display->display_options['fields']['commerce_node_checkout_node']['field'] = 'commerce_node_checkout_node';
  $handler->display->display_options['fields']['commerce_node_checkout_node']['label'] = 'Ad';
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['external'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['alter']['html'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['hide_empty'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['empty_zero'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_node']['hide_alter_empty'] = 1;
  /* Field: Commerce Line item: Unpublish on */
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['id'] = 'commerce_node_checkout_expires';
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['table'] = 'field_data_commerce_node_checkout_expires';
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['field'] = 'commerce_node_checkout_expires';
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['external'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['alter']['html'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['hide_empty'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['empty_zero'] = 0;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
    'show_repeat_rule' => 'show',
  );
  $handler->display->display_options['fields']['commerce_node_checkout_expires']['field_api_classes'] = 0;
  /* Field: Content: Published */
  $handler->display->display_options['fields']['status']['id'] = 'status';
  $handler->display->display_options['fields']['status']['table'] = 'node';
  $handler->display->display_options['fields']['status']['field'] = 'status';
  $handler->display->display_options['fields']['status']['relationship'] = 'commerce_node_checkout_node_nid';
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
  /* Filter criterion: Commerce Line Item: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_line_item';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_node_checkout' => 'commerce_node_checkout',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'admin/content/ads';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Ads';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $export['ads'] = $view;

  $view = new view;
  $view->name = 'ads_create_an_ad';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'commerce_product';
  $view->human_name = 'Ads: create an ad';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Create an Ad';
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['disable_sql_rewrite'] = TRUE;
  $handler->display->display_options['query']['options']['query_comment'] = FALSE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Commerce Product: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Ad Type';
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
  $handler->display->display_options['fields']['title']['link_to_product'] = 0;
  /* Field: Commerce Product: Price */
  $handler->display->display_options['fields']['commerce_price']['id'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['table'] = 'field_data_commerce_price';
  $handler->display->display_options['fields']['commerce_price']['field'] = 'commerce_price';
  $handler->display->display_options['fields']['commerce_price']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['external'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['commerce_price']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['commerce_price']['alter']['html'] = 0;
  $handler->display->display_options['fields']['commerce_price']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['commerce_price']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['commerce_price']['hide_empty'] = 0;
  $handler->display->display_options['fields']['commerce_price']['empty_zero'] = 0;
  $handler->display->display_options['fields']['commerce_price']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['commerce_price']['click_sort_column'] = 'amount';
  $handler->display->display_options['fields']['commerce_price']['type'] = 'commerce_price_formatted_amount';
  $handler->display->display_options['fields']['commerce_price']['settings'] = array(
    'calculation' => '0',
  );
  $handler->display->display_options['fields']['commerce_price']['field_api_classes'] = 0;
  /* Field: Commerce Product: Add to Cart form */
  $handler->display->display_options['fields']['add_to_cart_form']['id'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['table'] = 'commerce_product';
  $handler->display->display_options['fields']['add_to_cart_form']['field'] = 'add_to_cart_form';
  $handler->display->display_options['fields']['add_to_cart_form']['label'] = 'Purchase';
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['external'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['alter']['html'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['element_label_colon'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['element_default_classes'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['hide_empty'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['empty_zero'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['add_to_cart_form']['show_quantity'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['default_quantity'] = '1';
  $handler->display->display_options['fields']['add_to_cart_form']['combine'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['display_path'] = 0;
  $handler->display->display_options['fields']['add_to_cart_form']['line_item_type'] = 'commerce_node_checkout';
  /* Sort criterion: Commerce Product: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'commerce_product';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Commerce Product: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'commerce_node_checkout' => 'commerce_node_checkout',
  );
  /* Filter criterion: Commerce Product: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'commerce_product';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = '1';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $export['ads_create_an_ad'] = $view;

  $view = new view;
  $view->name = 'ads_display_block';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ads: display block';
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
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '3';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['hide_empty'] = 0;
  $handler->display->display_options['row_options']['default_field_elements'] = 0;
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
  $handler->display->display_options['fields']['title']['element_type'] = '0';
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['title']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['title']['hide_empty'] = 0;
  $handler->display->display_options['fields']['title']['empty_zero'] = 0;
  $handler->display->display_options['fields']['title']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['title']['link_to_node'] = 0;
  /* Field: Content: Ad Line 1 */
  $handler->display->display_options['fields']['field_ad_line_1']['id'] = 'field_ad_line_1';
  $handler->display->display_options['fields']['field_ad_line_1']['table'] = 'field_data_field_ad_line_1';
  $handler->display->display_options['fields']['field_ad_line_1']['field'] = 'field_ad_line_1';
  $handler->display->display_options['fields']['field_ad_line_1']['label'] = '';
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ad_line_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_line_1']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_line_1']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ad_line_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_ad_line_1']['field_api_classes'] = 0;
  /* Field: Content: Ad Line 2 */
  $handler->display->display_options['fields']['field_ad_line_2']['id'] = 'field_ad_line_2';
  $handler->display->display_options['fields']['field_ad_line_2']['table'] = 'field_data_field_ad_line_2';
  $handler->display->display_options['fields']['field_ad_line_2']['field'] = 'field_ad_line_2';
  $handler->display->display_options['fields']['field_ad_line_2']['label'] = '';
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ad_line_2']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_line_2']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_line_2']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ad_line_2']['field_api_classes'] = 0;
  /* Field: Content: Ad Line 3 */
  $handler->display->display_options['fields']['field_ad_line_3']['id'] = 'field_ad_line_3';
  $handler->display->display_options['fields']['field_ad_line_3']['table'] = 'field_data_field_ad_line_3';
  $handler->display->display_options['fields']['field_ad_line_3']['field'] = 'field_ad_line_3';
  $handler->display->display_options['fields']['field_ad_line_3']['label'] = '';
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ad_line_3']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_line_3']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_line_3']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ad_line_3']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_ad_line_3']['field_api_classes'] = 0;
  /* Field: Content: Ad Phone */
  $handler->display->display_options['fields']['field_ad_phone']['id'] = 'field_ad_phone';
  $handler->display->display_options['fields']['field_ad_phone']['table'] = 'field_data_field_ad_phone';
  $handler->display->display_options['fields']['field_ad_phone']['field'] = 'field_ad_phone';
  $handler->display->display_options['fields']['field_ad_phone']['label'] = '';
  $handler->display->display_options['fields']['field_ad_phone']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ad_phone']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_phone']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_phone']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ad_phone']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_ad_phone']['field_api_classes'] = 0;
  /* Field: Content: Ad URL */
  $handler->display->display_options['fields']['field_ad_url']['id'] = 'field_ad_url';
  $handler->display->display_options['fields']['field_ad_url']['table'] = 'field_data_field_ad_url';
  $handler->display->display_options['fields']['field_ad_url']['field'] = 'field_ad_url';
  $handler->display->display_options['fields']['field_ad_url']['label'] = '';
  $handler->display->display_options['fields']['field_ad_url']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_ad_url']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_ad_url']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['element_type'] = '0';
  $handler->display->display_options['fields']['field_ad_url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_ad_url']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_ad_url']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_ad_url']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_ad_url']['field_api_classes'] = 0;
  /* Field: Content: Location Target for Ad */
  $handler->display->display_options['fields']['field_location_target_for_ad']['id'] = 'field_location_target_for_ad';
  $handler->display->display_options['fields']['field_location_target_for_ad']['table'] = 'field_data_field_location_target_for_ad';
  $handler->display->display_options['fields']['field_location_target_for_ad']['field'] = 'field_location_target_for_ad';
  $handler->display->display_options['fields']['field_location_target_for_ad']['label'] = '';
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['alter_text'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['make_link'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['absolute'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['external'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['replace_spaces'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['trim_whitespace'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['nl2br'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['word_boundary'] = 1;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['ellipsis'] = 1;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['more_link'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['strip_tags'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['trim'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['alter']['html'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['element_type'] = '0';
  $handler->display->display_options['fields']['field_location_target_for_ad']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_location_target_for_ad']['element_default_classes'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['hide_empty'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['empty_zero'] = 0;
  $handler->display->display_options['fields']['field_location_target_for_ad']['hide_alter_empty'] = 1;
  $handler->display->display_options['fields']['field_location_target_for_ad']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_location_target_for_ad']['field_api_classes'] = 0;
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
  $handler->display->display_options['fields']['distance']['origin'] = 'tied';
  $handler->display->display_options['fields']['distance']['units'] = 'mi';
  /* Sort criterion: Global: Random */
  $handler->display->display_options['sorts']['random']['id'] = 'random';
  $handler->display->display_options['sorts']['random']['table'] = 'views';
  $handler->display->display_options['sorts']['random']['field'] = 'random';
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
    'ad' => 'ad',
  );

  /* Display: Ads Three Across Block */
  $handler = $view->new_display('block', 'Ads Three Across Block', 'block');
  $export['ads_display_block'] = $view;

  $view = new view;
  $view->name = 'ads_to_be_unpublished';
  $view->description = 'Used in combination with VBO and Rules to automatically unpublish expired Ads';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Ads: to be unpublished';
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
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Content: Associated content (commerce_node_checkout_node) - reverse */
  $handler->display->display_options['relationships']['reverse_commerce_node_checkout_node_commerce_line_item']['id'] = 'reverse_commerce_node_checkout_node_commerce_line_item';
  $handler->display->display_options['relationships']['reverse_commerce_node_checkout_node_commerce_line_item']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_commerce_node_checkout_node_commerce_line_item']['field'] = 'reverse_commerce_node_checkout_node_commerce_line_item';
  $handler->display->display_options['relationships']['reverse_commerce_node_checkout_node_commerce_line_item']['required'] = 0;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
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
      'selected' => 0,
      'use_queue' => 0,
      'skip_confirmation' => 0,
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
      'selected' => 1,
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
    'ad' => 'ad',
  );
  /* Filter criterion: Commerce Line item: Unpublish on (commerce_node_checkout_expires) */
  $handler->display->display_options['filters']['commerce_node_checkout_expires_value']['id'] = 'commerce_node_checkout_expires_value';
  $handler->display->display_options['filters']['commerce_node_checkout_expires_value']['table'] = 'field_data_commerce_node_checkout_expires';
  $handler->display->display_options['filters']['commerce_node_checkout_expires_value']['field'] = 'commerce_node_checkout_expires_value';
  $handler->display->display_options['filters']['commerce_node_checkout_expires_value']['relationship'] = 'reverse_commerce_node_checkout_node_commerce_line_item';
  $handler->display->display_options['filters']['commerce_node_checkout_expires_value']['operator'] = '<=';
  $handler->display->display_options['filters']['commerce_node_checkout_expires_value']['default_date'] = 'now';
  $export['ads_to_be_unpublished'] = $view;

  return $export;
}
