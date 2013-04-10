(function ($) {
    Drupal.itemClicked = function (element) {
        element.parent().siblings().children('.tab-content').toggleClass('visuallyhidden');
        element.next('.tab-content').toggleClass('visuallyhidden');

        element.children('.toggle-text').toggleClass('hidden');
    };

    Drupal.behaviors.worktabs = {
        attach: function (context) {
            $('.tab-link', context).click(function(e){
                e.preventDefault();
                Drupal.itemClicked($(this));
            });
        }
    };
}(jQuery));
