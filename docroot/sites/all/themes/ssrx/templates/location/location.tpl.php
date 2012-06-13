<div class="gmap">
  <?php print drupal_render($gmap); ?>
</div>
<?php if (!empty($map_link)): ?>
<div class="map-link">
  <?php print $map_link; ?>
</div>
<?php endif; ?>