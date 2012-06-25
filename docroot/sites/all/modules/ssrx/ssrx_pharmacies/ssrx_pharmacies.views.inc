<?php
// Not sure why this is needed, but it is

/**
 * Implements hook_views_query_alter()
 */
function ssrx_pharmacies_views_query_alter(&$view, &$query) {
  // The table views in the pharmacies views are shown as attachments
  if ($view->name == 'pharmacies' && $view->is_attachment == TRUE){
    $where = array();
    $where = $query->orderby;
    if (isset($_GET['distance'])) {
      unset($where[1]);
    }
    else {
      unset($where[0]);      
    }
    $query->orderby = $where;
  }
}