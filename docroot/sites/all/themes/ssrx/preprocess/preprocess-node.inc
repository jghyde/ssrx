<?php
if ($vars['type'] == 'pharmacy') {
  // create a location array for display above the map.
  $vars['elements']['location_display'] = array(
    'address' => $vars['location']['street'],
    'address2' => $vars['location']['additional'],
    'city' => $vars['location']['city'],
    'state' => $vars['location']['province'],
    'zip' => $vars['location']['postal_code'],
    'phone' => $vars['location']['fax'],    
  );
}
