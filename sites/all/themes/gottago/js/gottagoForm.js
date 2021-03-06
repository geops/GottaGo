/**
 * @file
 * A JavaScript file for the theme.
 *
 * In order for this JavaScript to be loaded on pages, see the instructions in
 * the README.txt next to this file.
 */

// JavaScript should be made compatible with libraries other than jQuery by
// adding a small wrapper around your JavaScript code. See:
// - http://drupal.org/node/224333#javascript_compatibility
// - http://www.adequatelygood.com/2010/3/JavaScript-Module-Pattern-In-Depth
(function ($){


  Drupal.behaviors.initGottagoStationWidth = {
    attach: function(context) {
	    jQuery('#edit-field-station-und-0-value').width(jQuery('#gottago-node-form').width() - jQuery('.field-station-prefix').width() - 100);
    }
  }

  Drupal.behaviors.initGottagoClickLine = {
    attach: function(context) {

	    jQuery('.form-item-field-line-und label.option', context).click(function(){
	    	jQuery(this).siblings('input').attr('checked', 'checked').trigger('change');
	      jQuery('.form-item-field-line-und label.option').removeClass('selected');
	      jQuery(this).addClass('selected');
	    });

    }
  }


})(jQuery);
