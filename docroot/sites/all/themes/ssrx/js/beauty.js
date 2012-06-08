// adds jquery effects to stuff to make it beautiful

// roll over the search button for pills:
(function ($) {

  Drupal.behaviors.ssrx = {
    attach: function (context, settings) {
      $('input#edit-submit-prescription-price-search', context).hover(
        function () {
          $(this).addClass('on', 1000);
        },
        function () {
          $(this).removeClass('on', 1000);
        }
      );
    }    
  };
  $(document).ready(function(){ 
    $('div.form-item-distance-postal-code label').inFieldLabels({
      fadeDuration:1000,
      fadeOpacity: 0.1,
    });
    $('#edit-title-wrapper label').inFieldLabels({
      fadeDuration:1000,
      fadeOpacity: 0.1,
    });
  });
})(jQuery);
