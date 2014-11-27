(function($) {

  var BibdkModal = {};

  Drupal.ajax.prototype.commands.bibdk_modal_reload = function(ajax, data, status) {
    var currentUrl = document.URL;
    if(currentUrl.indexOf("reservation/?ids") != -1) {
      window.location.href = currentUrl;
      if(window.opener != null) {
        window.opener.location.reload(true);
      }
    }
    else {
      location.reload(true);
      if(window.opener != null) {
        window.opener.location.reload(true);
      }
    }
  };

  Drupal.ajax.prototype.commands.bibdk_modal_replace_form = function(ajax, data, status) {
    if(status === 'success') {
      var selector = data.selector;
      var html = data.html;
      $(selector).replaceWith(html);
    }
    else {
      console.log('error');
    }
  };

  Drupal.ajax.prototype.commands.bibdk_modal_dismiss = function(ajax, data, status) {
    jQuery('a.close-reveal-modal').trigger('click');
  };

  BibdkModal.setLinkActions = function(context) {
    //Rewrite login link
    $("a[href*='/user/login'], a[href*='?q=user/login']", context).attr({
      'data-reveal-id': 'bibdk-modal',
      'data-reveal-ajax': 'true',
      'href': function(key, value) {
        return value.replace(/user\/login/, 'bibdk_modal/login');
      }
    }).addClass('bibdk-modal-login');

    //Rewrite 'my page' menu login link
    $(".not-logged-in.page-user .tabs.primary a[href$='/user'], .not-logged-in.page-user .tabs.primary a[href$='?q=user']", context).once('init-modal-forms-login', function() {
      this.href = this.href.replace(/user/, 'bibdk_modal/nojs/login');
    }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style');

    //Rewrite forgot password link
    $("a[href*='/user/password'], a[href*='?q=user/password']", context).once('init-modal-forms-login', function() {
      this.href = this.href.replace(/user\/password/, 'bibdk_modal/nojs/password');
    }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style');

    //Rewrite register new user link
    $("a[href*='/user/register'], a[href*='?q=user/register']", context).once('init-modal-forms-login', function() {
      this.href = this.href.replace(/user\/register/, 'bibdk_modal/nojs/register');
    }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style');

    //Rewrite edit review link
    $("a[href*='/voxb/ajax/review/edit'], a[href*='?q=voxb/ajax/review/edit']", context).once('init-modal-forms-login', function() {
      this.href = this.href.replace('/voxb/ajax/review/edit', '/bibdk_modal/nojs/voxb/review/edit');
    }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style');

    //Rewrite edit review link
    $("a[href*='/voxb/ajax/review/create'], a[href*='?q=voxb/ajax/review/create']", context).once('init-modal-forms-login', function() {
      this.href = this.href.replace('/voxb/ajax/review/create', '/bibdk_modal/nojs/voxb/review/create');
    }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style');

    //Rewrite offensive content link
    $("a[href*='/voxb/offensive'], a[href*='?q=voxb/offensive']", context).once('init-modal-forms-login', function() {
      this.href = this.href.replace('voxb/offensive', 'bibdk_modal/nojs/voxb/offensive');
    }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style');

    //Rewrite edit favourite user data link
    $("a[href*='/overlay/favourite/userdata/'], a[href*='?q=overlay/favourite/userdata/']", context).once('init-modal-forms-login', function() {
      this.href = this.href.replace(/overlay\/favourite\/userdata/, 'bibdk_modal/nojs/favourite/userdata');
    }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style').removeClass('bibdk-popup-link');

    //Rewrite add favourite library
    if(Drupal.settings.uid) {
      var url = 'user/' + Drupal.settings.uid + '/bibdk_favourite_list?';
      $("a[href*='/" + url + "'], a[href*='?q=" + url + "']", context).once('init-modal-forms-login', function() {
        this.href = this.href.replace(url, 'bibdk_modal/nojs/bibdk_favourite_list?');
      }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style').removeClass('bibdk-popup-link');
    }
  };

  BibdkModal.addAccessibilityInfo = function(context) {
    $("#modalContent", context).attr("role", 'dialog');
    $("#modalContent", context).attr("aria-hidden", false);
  };

  BibdkModal.bindEvents = function(context) {
    $('#modalBackdrop', context).bind('click', BibdkModal.closeModal);
    $('.close', context).bind('click', BibdkModal.setMainwrapperAttr);
    $(document).bind('keydown', BibdkModal.keyEventHandler);
    $('body', context).bind('focus', BibdkModal.modalHasFocus);
  };

  BibdkModal.unbindEvents = function() {
    $('#modalBackdrop').unbind('click', BibdkModal.closeModal);
    $(document).unbind('keydown', BibdkModal.keyEventHandler);
    $('body').unbind('focus', BibdkModal.modalHasFocus);
  };

  BibdkModal.keyEventHandler = function(event) {
    if(event.keyCode == 27) {
      BibdkModal.closeModal();
      return false;
    }
  };

  BibdkModal.closeModal = function() {
    $('.close').trigger('click');
    BibdkModal.unbindEvents();
  };

  BibdkModal.setMainwrapperAttr = function() {
    $('#mainwrapper').attr("aria-hidden", false);
  };

  /**
   * Set the modal window 10% from top of current viewport
   */
  BibdkModal.modalHasFocus = function() {
    jQuery('.exit-off-canvas').trigger('click');
    var top = (window.innerHeight * 0.1) + $(window).scrollTop();
    $('#modalContent').css({top: top + 'px'});
  };

  /**
   * Overrides Drupal.CTools.Modal.modal_display in ctools/js/modal.js to add
   * autofocus on name input field.
   */
  BibdkModal.overrideCtoolsModalDisplay = function() {
    Drupal.CTools.Modal.modal_display = function(ajax, response, status) {
      if($('#modalContent').length == 0) {
        Drupal.CTools.Modal.show(Drupal.CTools.Modal.getSettings(ajax.element));
      }
      $('#modal-title').html(response.title);
      // Simulate an actual page load by scrolling to the top after adding the
      // content. This is helpful for allowing users to see error messages at the
      // top of a form, etc.
      $('#modal-content').html(response.output).scrollTop(0);
      Drupal.attachBehaviors();
      $('#edit-name').focus();
    };
  };

  BibdkModal.attachAjax = function(modal) {
    //TODO mmj probably unused
    console.log(modal);
    var $form = $('.element-wrapper', modal);
    console.log($form);
    console.log('attached');
    var base = $(modal).attr('id');
    console.log(base, 'base');

    console.log(base);
    console.log(this);

    var element_settings = {
      url: window.location.origin + Drupal.settings.basePath + Drupal.settings.pathPrefix + 'system/ajax',
    };

    Drupal.ajax[base] = new Drupal.ajax(base, this, element_settings);
    $(this).click();
  };

  Drupal.behaviors.bibdk_modal = {
    attach: function(context, settings) {
      BibdkModal.setLinkActions(context);
      BibdkModal.bindEvents(context);
      BibdkModal.addAccessibilityInfo(context);
      BibdkModal.overrideCtoolsModalDisplay();
    }
  };

  Drupal.bibdkModal = BibdkModal;

})(jQuery);