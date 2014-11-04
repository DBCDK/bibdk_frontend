(function($) {
  var Bbidk_worktabs = {
    behaviors: {
      worktabs: {
      }
    }
  };

  Bbidk_worktabs.itemClicked = function(element) {
    Bbidk_worktabs.hideItems(element);
    Bbidk_worktabs.showItem(element);
  };

  Bbidk_worktabs.hideItems = function(items) {
    $(items).parent().siblings('.tab-item').each(function(index, value) {
      if($(value).children('.tab-title').hasClass('active')) {
        $(value).children('.tab-title').toggleClass('active');
        $(value).children('.tab-content').toggleClass('visuallyhidden');
        $(value).children('.toggle-text').toggleClass('hidden');
        $(value).children('.tab-link').children('.toggle-text').toggleClass('hidden');
      }
    });
  };

  Bbidk_worktabs.showItem = function(item) {
    item.toggleClass('toggled');
    item.parent().children('.tab-title').toggleClass('active');
    item.next('.tab-content').toggleClass('visuallyhidden');
    item.children('.toggle-text').toggleClass('hidden');
  };

  Bbidk_worktabs.worktabsClick = function(item) {
    var id = item[0].getAttribute('href');
    $(id + ' .tab-content').on('DOMNodeInserted', function() {
      var list = $(id + ' .tab-content .worktabs-no-content');
      list.map(function(i, e) {
        var p = $(e).parents().filter('.tab-item');
        var txt = e.getAttribute('data-button-txt');
        if(txt) {
          p.find('.toggle-worktab-content .toggle-text').map(function(j, t) {
            t.innerHTML = txt;
          });
        }
      });
    });
  };

  Bbidk_worktabs.behaviors.worktabs = {
    attach: function(context) {
      $('.tab-link', context).once().click(function(e) {
        e.preventDefault();
        Bbidk_worktabs.itemClicked($(this));
      });

      $('.worktabs .tabs-nav a', context).once().click(function(e) {
        e.preventDefault();
        Bbidk_worktabs.worktabsClick($(this));
      });
    }
  };
}(jQuery));
