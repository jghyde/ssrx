<?php if (!empty($locations)): ?>
  <div class="location-locations-wrapper">
    <?php foreach ($locations as $location): ?>
      <?php print $location; ?>
    <?php endforeach; ?>
  </div>
<?php endif; ?>
