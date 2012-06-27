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
    $query->orderby = array();
    if (isset($_GET['distance'])) {
      foreach ($where as $k) {
        if ($k['field'] == 'location_distance_sort') {
          $query->orderby[] = $k;
        }
      }
    }
    else {
      $query->orderby[] = array(
        'field' => 'rand_',
        'direction' => 'ASC',
      );
    }
  }
}