<?php
if (arg(0) != 'node' && arg(1) != 'autocomplete') {
  $i = 0;
  // dpm(get_defined_vars());
  // print out the street address:
  print $location['street'] . '<br />';
  if (!empty($location['additional'])) {
    print $location['additional'];
  }
  print $location['city'] . ', ' . $location['province'] . ' ' . $location['postal_code'] . '<br />';
  if (!empty($location['phone'])) {
    print 'Phone: ' . $location['phone'] . '<br />';
  }
}
?>
<?php
if (!empty($gmap)): ?>
<div class="gmap">
  <?php print drupal_render($gmap); ?>
</div>
<?php endif; ?>
<?php if (!empty($map_link)): ?>
<div class="map-link">
  <?php print $map_link; ?>
</div>
<?php endif; ?>
<?php
if (arg(1) == 'autocomplete') {
  print $location['city'] . ', ' . $location['province'] . ' ' . $location['postal_code'];
  print $location['street'] . ' ';
  if (!empty($location['additional'])) {
    print $location['additional'] . ' ';
  }
}