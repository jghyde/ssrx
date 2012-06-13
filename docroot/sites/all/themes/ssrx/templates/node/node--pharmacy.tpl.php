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
        <li><?php print l('Website', render($content['field_pharmacy_web_address'])); ?></li>
        <?php
        if ($content['field_online_pharmacy']['#items'][0]['value'] > 0) {
          print '<li class="24hour"></li>';
        }
        ?>
      </ul>
    </div>
  </div>
  <div class="gmap">
    <?php
      print render($content['locations']);
    ?>
  </div>
  
  <div class="clearfix">
    <?php if (!empty($content['links'])): ?>
      <nav class="links node-links clearfix"><?php print render($content['links']); ?></nav>
    <?php endif; ?>

    <?php print render($content['comments']); ?>
    </div>
  </div>
</article>