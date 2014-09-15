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

    Drupal.worktabsClick = function(item) {
        id = item[0].getAttribute('href');
        $(id + ' .tab-content').live('DOMNodeInserted', function () {
            list = $(id + ' .tab-content .worktabs-no-content');
            list.map(function(i, e) {
                p = $(e).parents().filter('.tab-item');
                txt = e.getAttribute('data-button-txt');
                if (txt) {
                    p.find('.toggle-worktab-content .toggle-text').map(function(j, t) { t.innerHTML = txt; });
                }
            });
        });
    };

    Drupal.behaviors.worktabs = {
        attach: function (context) {
            $('.tab-link', context).once().click(function(e){
                e.preventDefault();
                Drupal.itemClicked($(this));
            });

            $('.worktabs .tabs-nav a', context).once().click(function(e) {
                e.preventDefault();
                Drupal.worktabsClick($(this));
            });
        }
    };
}(jQuery));
