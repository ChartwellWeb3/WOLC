(function ($) {
    Drupal.behaviors.wmsCharacterCount = {
        attach: function () {
            console.log('We are using the French Script');
            var language = "fr-CA";
            $.datepicker.setDefaults( $.datepicker.regional[language]);
            var assignClass = function(element, min, max, length) {
                if (min > 0 && length >= min) {
                    element.parent().find('.character-count').removeClass('invalid');
                    element.parent().find('.character-count').addClass('valid');
                } else if (min > 0 && length < min) {
                    element.parent().find('.character-count').addClass('invalid');
                    element.parent().find('.character-count').removeClass('valid');
                }
            }
            var addCharCount = function(element, min, max) {
                if (!element) {
                    console.log("Element not found", element);
                    return;
                }
                element.parent().append('<div class="character-count"></div>');
                element.keyup(function() {
                    var length = $(this).val().length;
                    var text = length+'  caractères';
                    element.parent().find('.character-count').html(text);
                    assignClass(element, min, max, length);
                });
                element.blur(function() {
                    var length = $(this).val().length;
                    var text = length+' caractères';
                    element.parent().find('.character-count').html(text);
                    assignClass(element, min, max, length);
                });


            }

            // For field field_wish_description show the user a count up to 100.
            // The character limit for the field is 100.
            addCharCount($('#edit-field-wish-description-und-0-value'), 0, 100);

            // For the following fields turn green when the person enters > 100 chracters.
            // It should show the user the number of charters they have entered.
            addCharCount($('#edit-field-what-prompted-this-wish-und-0-value'), 100, 0);
            addCharCount($('#edit-field-when-did-you-know-or-first-und-0-value'), 100, 0);
            addCharCount($('#edit-field-describe-any-mental-emotio-und-0-value'), 100, 0);
            addCharCount($('#edit-field-how-would-granting-this-wi-und-0-value'), 100, 0);
            addCharCount($('#edit-field-why-are-you-unable-to-fulf-und-0-value'), 100, 0);
            addCharCount($('#edit-field-what-are-some-of-your-inte-und-0-value'), 100, 0);
            addCharCount($('#edit-field-what-have-you-done-to-give-und-0-value'), 100, 0);


            // For the following fields turn green when the person enters > 300 chracters.
            // It should show the user the number of charters they have entered.
            addCharCount($('#edit-field-what-makes-this-wish-meani-und-0-value'), 300, 0);
        }
    };
})(jQuery);
