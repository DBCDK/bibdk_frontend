(function ($) {
    Drupal.itemClicked = function (element) {
        Drupal.hideItems(element);
        Drupal.showItem(element);
    };

    Drupal.hideItems = function(items){
        $(items).parent().siblings('.tab-item').each(function(index, value){
            if($(value).children('.tab-title').hasClass('active')){
                $(value).children('.tab-title').toggleClass('active');
                $(value).children('.tab-content').toggleClass('visuallyhidden');
                $(value).children('.toggle-text').toggleClass('hidden');
                $(value).children('.tab-link').children('.toggle-text').toggleClass('hidden');
            }
        });
    };

    Drupal.showItem = function(item){
        item.toggleClass('toggled');
        item.parent().children('.tab-title').toggleClass('active');
        item.next('.tab-content').toggleClass('visuallyhidden');
        item.children('.toggle-text').toggleClass('hidden');
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
