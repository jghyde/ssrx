<?php if ($page): ?>
<article<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
<?php
// Header for map.
?>
  <div class="map-header" class="clearfix">
    <div class="map-header-title">
      <?php
      print '<h3 class="page-title">' . drupal_get_title() . '</h3>';
      print '<p>';
      print $content['locations']['#locations'][0]['street'] . '<br />';
      if (!empty($content['locations']['#locations'][0]['additional'])) {
        print $content['locations']['#locations'][0]['additional'] . '<br />';
      }
      print $content['locations']['#locations'][0]['city'] . ', ' . $content['locations']['#locations'][0]['province'] . ' ' . $content['locations']['#locations'][0]['postal_code'];
      print '</p>';
      ?>
    </div>
    <div class="map-header-links">
      <ul>
        <li><?php print render($content['field_pharmacy_rating']); ?></li>
        <li><a tel://<?php print $content['locations']['#locations'][0]['phone']; ?>"><?php print $content['locations']['#locations'][0]['phone']; ?></a></li>
        <?php !empty($content['field_pharmacy_web_address'][0]['#markup']) ? print '<li>' . l('Website', $content['field_pharmacy_web_address'][0]['#markup'], array('attributes' => array('title' => 'Visit the ' . drupal_get_title() . ' website.'))) . '</li>': ''; ?>
        <?php
        if ($content['field_online_pharmacy']['#items'][0]['value'] > 0) {
          print '<li class="online-pharmacy">Online Pharmacy</li>';
        }
        if ((int)$content['field_24_hour_pharmacy']['#items'][0]['value'] == 1) {
          print '<li class="istf-1">24-Hour Pharmacy</li>';
        }
        ?>
      </ul>
    </div>
  </div>
  <div class="gmap-wrapper">
    <?php
      print render($content['locations']);
    ?>
  </div>
  
  <div class="clearfix">
    <?php print render($content['comments']); ?>
  </div>
</article>
<?php else: ?>
<div<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
      <?php
      // views doesn't give us the title? WTF?
      if (isset($content['links']['node']['#links']['node-readmore']['attributes']['title'])) {
        if (isset($content['links']['node']['#links']['node-readmore']['href']) && !empty($content['links']['node']['#links']['node-readmore']['href'])) {
          $title = l($content['links']['node']['#links']['node-readmore']['attributes']['title'],$content['links']['node']['#links']['node-readmore']['href']);
        }
        else {
          $title = $content['links']['node']['#links']['node-readmore']['attributes']['title'];
        }
      }
      else {
        $title = drupal_get_title();
      }
      print '<h3 class="page-title">' . $title . '</h3>';

      print $content['locations']['#locations'][0]['street'] . '<br />';
      if (!empty($content['locations']['#locations'][0]['additional'])) {
        print $content['locations']['#locations'][0]['additional'] . '<br />';
      }
      print $content['locations']['#locations'][0]['city'] . ', ' . $content['locations']['#locations'][0]['province'] . ' ' . $content['locations']['#locations'][0]['postal_code'];     
      ?>
      <br /><label>Phone:</label> <a tel://<?php print $content['locations']['#locations'][0]['phone']; ?>"><?php print $content['locations']['#locations'][0]['phone']; ?></a>
      <br /><?php !empty($content['field_pharmacy_web_address'][0]['#markup']) ? print '<li>' . l('Website', $content['field_pharmacy_web_address'][0]['#markup'], array('attributes' => array('title' => 'Visit the ' . drupal_get_title() . ' website.'))) . '</li>': ''; ?>
  </div>
</div>
<?php endif; ?>