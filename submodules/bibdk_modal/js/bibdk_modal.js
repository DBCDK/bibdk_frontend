(function($) {

   //TODO set links that should be rewritten in a settings object
  Drupal.behaviors.overlay = {
    attach: function(context, settings) {

      //Rewrite login link
      $("a[href*='/user/login'], a[href*='?q=user/login']", context).once('init-modal-forms-login', function () {
        this.href = this.href.replace(/user\/login/,'bibdk_modal/nojs/login');
      }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style');
    }
  }
})(jQuery);


