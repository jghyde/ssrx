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

})(jQuery);