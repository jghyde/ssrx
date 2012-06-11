<?php if (!empty($locations)): ?>
  <div class="location-locations-wrapper">
    <p class="location-title"><?php print drupal_get_title(); ?></p>

    <?php foreach ($locations as $location): ?>
      <?php print $location; ?>
    <?php endforeach; ?>
  </div>
<?php endif; ?>
