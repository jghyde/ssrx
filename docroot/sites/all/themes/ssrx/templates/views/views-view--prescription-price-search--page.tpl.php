<?php
/**
 * @file views-view.tpl.php
 * Main view template
 *
 * Variables available:
 * - $classes_array: An array of classes determined in
 *   template_preprocess_views_view(). Default classes are:
 *     .view
 *     .view-[css_name]
 *     .view-id-[view_name]
 *     .view-display-id-[display_name]
 *     .view-dom-id-[dom_id]
 * - $classes: A string version of $classes_array for use in the class attribute
 * - $css_name: A css-safe version of the view name.
 * - $css_class: The user-specified classes names, if any
 * - $header: The view header
 * - $footer: The view footer
 * - $rows: The results of the view query, if any
 * - $empty: The empty text to display if the view is empty
 * - $pager: The pager next/prev links to display, if any
 * - $exposed: Exposed widget form/info to display
 * - $feed_icon: Feed icon to display, if any
 * - $more: A link to view more, if any
 *
 * @ingroup views_templates
 */
?>
<div class="<?php print $classes; ?>">
  <?php print render($title_prefix); ?>
  <?php if ($title): ?>
    <?php print $title; ?>
  <?php endif; ?>
  <?php print render($title_suffix); ?>
  <?php if ($header): ?>
    <div class="view-header">
      <?php print $header; ?>
    </div>
  <?php endif; ?>

  <?php if ($exposed): ?>
    <div class="view-filters">
      <?php print $exposed; ?>
    </div>
  <?php endif; ?>

  <?php if ($attachment_before): ?>
    <div class="attachment attachment-before">
      <?php print $attachment_before; ?>
      <?php if ($rows) : ?>
      <div id="price-search-facets" class="clearfix">
        <script type="text/javascript">
        (function($) {
          $(function() {
            $('.search-link.proximity[placeholder-data="' + $('#edit-distance-search-distance').val() + '"]').addClass('active');

            var online = $('#edit-field-online-pharmacy-value').val();
            var tfhour = $('#edit-field-24-hour-pharmacy-value').val();
            if (online == "All" && tfhour == 1) {
              $('.search-link.type[placeholder-data="24hr"]').addClass('active');
            }
            else if (online == 1 && tfhour == "All") {
              $('.search-link.type[placeholder-data="online"]').addClass('active');
            }
            else if (online == "All" && tfhour == "All") {
              $('.search-link.type[placeholder-data="all"]').addClass('active');
            }

            $('.search-link.proximity').click(function() {
              $('#edit-distance-search-distance').val($(this).attr('placeholder-data'));
              $('#edit-submit-prescription-price-search').click();
              return false;
            });
            $('.search-link.type').click(function() {
              var v = $(this).attr('placeholder-data');
              switch(v) {
                case '24hr' :
                  $('#edit-field-online-pharmacy-value').val("All");
                  $('#edit-field-24-hour-pharmacy-value').val(1);
                  break;
                case 'online' :
                  $('#edit-field-online-pharmacy-value').val(1);
                  $('#edit-field-24-hour-pharmacy-value').val("All");
                  break;
                case 'all' :
                  $('#edit-field-online-pharmacy-value').val("All");
                  $('#edit-field-24-hour-pharmacy-value').val("All");
                  break;
              }
              $('#edit-submit-prescription-price-search').click();
              return false;
            });
          });
        })(jQuery);
        </script>
        <div id="dashboard-title">Show Pharmacies within:</div>
        <?php $i = 1;
        // title=Metformin+Hydrochloride&distance[postal_code]=94301&distance[search_distance]=25&distance[search_units]=mile  
        $base = 'prescriptions'; // @TODO Change this if you cange the path of the view.
        $title = urlencode($_GET['title']);
        $postal_code = $_GET['distance']['postal_code'];
        $search_units = 'mile';
        ?>
        <ul>
          <li><a class="search-link proximity" placeholder-data="5" href="/<?php print $base; ?>?title=<?php print $title; ?>&distance[postal_code]=<?php print $postal_code; ?>&distance[search_distance]=5&distance[search_units]=<?php print $search_units; ?>">5 miles</a></li>
          <li><a class="search-link proximity" placeholder-data="10" href="/<?php print $base; ?>?title=<?php print $title; ?>&distance[postal_code]=<?php print $postal_code; ?>&distance[search_distance]=10&distance[search_units]=<?php print $search_units; ?>">10 miles</a></li>
          <li><a class="search-link proximity" placeholder-data="25" href="/<?php print $base; ?>?title=<?php print $title; ?>&distance[postal_code]=<?php print $postal_code; ?>&distance[search_distance]=25&distance[search_units]=<?php print $search_units; ?>">25 miles</a></li>
          <li><a class="search-link proximity" placeholder-data="50" href="/<?php print $base; ?>?title=<?php print $title; ?>&distance[postal_code]=<?php print $postal_code; ?>&distance[search_distance]=50&distance[search_units]=<?php print $search_units; ?>">50 miles</a></li>
          <li><a class="search-link proximity" placeholder-data="100" href="/<?php print $base; ?>?title=<?php print $title; ?>&distance[postal_code]=<?php print $postal_code; ?>&distance[search_distance]=100&distance[search_units]=<?php print $search_units; ?>">100 miles</a></li>
        </ul>
      </div>
    </div>
    <?php endif; ?>
  <?php endif; ?>

  <?php if ($rows): ?>
    <div class="view-content">
      <?php print $rows; ?>
    </div>
  <?php elseif ($empty): ?>
    <div class="view-empty">
      <?php print $empty; ?>
    </div>
  <?php endif; ?>

  <?php if ($pager): ?>
    <?php print $pager; ?>
  <?php endif; ?>

  <?php if ($attachment_after): ?>
    <div class="attachment attachment-after">
      <?php print $attachment_after; ?>
    </div>
  <?php endif; ?>

  <?php if ($more): ?>
    <?php print $more; ?>
  <?php endif; ?>

  <?php if ($footer): ?>
    <div class="view-footer">
      <?php print $footer; ?>
    </div>
  <?php endif; ?>

  <?php if ($feed_icon): ?>
    <div class="feed-icon">
      <?php print $feed_icon; ?>
    </div>
  <?php endif; ?>

</div><?php /* class view */ ?>