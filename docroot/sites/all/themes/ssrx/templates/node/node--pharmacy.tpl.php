<article<?php print $attributes; ?>>
  <div<?php print $content_attributes; ?>>
    <p class="location-title"><?php print drupal_get_title(); ?></p>
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
</article>