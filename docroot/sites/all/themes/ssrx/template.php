<?php

/**
 * @file
 * This file is empty by default because the base theme chain (Alpha & Omega) provides
 * all the basic functionality. However, in case you wish to customize the output that Drupal
 * generates through Alpha & Omega this file is a good place to do so.
 * 
 * Alpha comes with a neat solution for keeping this file as clean as possible while the code
 * for your subtheme grows. Please read the README.txt in the /preprocess and /process subfolders
 * for more information on this topic.
 */
function ssrx_preprocess_location(&$vars) {
  $node = menu_get_object();
  if (is_object($node) && $node->type == 'pharmacy' || $node->type =='urget_care') {
    // Render the side-to-side google map for pharmacy detail pages
    $text = '<h4 class="pharmacy-title">' . $node->title . '</h4>';
    $text .= '<p class="gmap-bubble-address">' . $vars['street'] . '</p>';
    $text .= !empty($vars['additional']) ? '<p class="gmap-bubble-address">' . $vars['additional'] . '</p>' : '';
    $text .= '<p class="gmap-bubble-address">' . $vars['city'] . ', ' . $vars['province'] . ' ' . $vars['postal_code'] . '</p>';
    $text .= '<p class="gmap-bubble-address">Phone: ' . $vars['phone'] . '</p>';
    $markers = array(
      array(
        'options' => array(),
        'text' => $text,
        'longitude' => $vars['location']['longitude'],
        'latitude' => $vars['location']['latitude'],
        'markername' => 'blank',
        'offset' => 0,
      ),
    );
    $map = array(
        'id' =>                  'pharmacy_location', // "Map ID" -- used to associate a map with other controls.
        'width' =>               '940px', // Map width as a CSS dimension.
        'height' =>              '300px', // Map height as a CSS dimension (usually px).
        'latitude' =>            $vars['location']['latitude'], // Map center latitude.
        'longitude' =>           $vars['location']['longitude'], // Map center longitude.
        'zoom' =>                8,
        'maxzoom' =>             4, // Maximum zoom level for autozoom.
        'maptype' =>             'Map', // Initial baselayer type.
        'controltype' =>         'Small', // Size of map controls.
        'align' =>               'Center', // CSS alignment for map div.
        'mtc' =>                 'standard', // Map type control.
        'baselayers' =>          array("Map", "Satellite", "Hybrid", "Terrain"), // Enabled map baselayers.
        'markers' =>             $markers, // Array of markers to place on the map.
      );    
    $vars['gmap'] = array( // GMap in Drupal 7 uses drupal_render().
      '#type' => 'gmap',
      '#gmap_settings' => $map,
    );
  }
}