<?php
// Not sure why this is needed, but it is

/**
 * Implements hook_views_query_alter()
 */
function ssrx_pharmacies_views_query_alter(&$view, &$query) {
  if ($view->name == 'pharmacies' && $view->current_display == 'page_1'){
      return;
  }
}