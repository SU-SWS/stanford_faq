(function ($) {

/**
 * Drupal attach behaviour.
 */
Drupal.behaviors.stanford_faq = {
  attach: function (context, settings) {

  var toggles = $(".collapse-toggle", context);
  toggles.attr("aria-expanded", "false");

  $.each(toggles, function(i, v) {
    $(v).attr("aria-controls", $(v).attr("href"));
  });

  toggles.click(function(e) {
    if ($(this).attr("aria-expanded") == "true") {
      $(this).attr("aria-expanded", "false");
    }
    else {
      $(this).attr("aria-expanded", "true");
    }
  });

  // Prevent space bar from jumping down page and expand the thing!
  toggles.keydown(function (e) {
    var key = e.charCode ? e.charCode : e.keyCode ? e.keyCode : 0;
    if (key == 32) {
      e.preventDefault();
      $(this).trigger("click");
    }
  });


  }
};

})(jQuery);
