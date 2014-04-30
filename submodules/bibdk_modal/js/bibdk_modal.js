(function($) {

  var BibdkModal = {};

  Drupal.ajax.prototype.commands.bibdk_custom_reload = function(ajax, data, status) {
    var currentUrl = document.URL;
    if(currentUrl.indexOf("reservation/?ids") != -1){
      window.location.href = currentUrl;
      if(window.opener != null) {
        window.opener.location.reload(true);
      }
    } else {
      location.reload(true);
    }
  };

  BibdkModal.setLinkActions = function(context){
    //Rewrite login link
    $("a[href*='/user/login'], a[href*='?q=user/login']", context).once('init-modal-forms-login',function() {
      this.href = this.href.replace(/user\/login/, 'bibdk_modal/nojs/login');
    }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style');

    //Rewrite 'my page' menu login link
    $(".logged-in .page-user .tabs.primary a[href='/user'], .page-user .tabs.primary a[href*='?q=user']", context).once('init-modal-forms-login',function() {
      this.href = this.href.replace(/user/, 'bibdk_modal/nojs/login');
    }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style');

    //Rewrite forgot password link
    $("a[href*='/user/password'], a[href*='?q=user/password']", context).once('init-modal-forms-login',function() {
      this.href = this.href.replace(/user\/password/, 'bibdk_modal/nojs/password');
    }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style');

    //Rewrite register new user link
    $("a[href*='/user/register'], a[href*='?q=user/register']", context).once('init-modal-forms-login',function() {
      this.href = this.href.replace(/user\/register/, 'bibdk_modal/nojs/register');
    }).addClass('ctools-use-modal  ctools-modal-bibdk-modal-style');

  };

  BibdkModal.addAccessibilityInfo = function(context){
    $("#modalContent", context).attr("role", 'dialog');
    $("#modalContent", context).attr("aria-hidden", false);
  };

  BibdkModal.bindEvents = function(context) {
    $('#modalBackdrop', context).bind('click', BibdkModal.closeModal);
    $('.close', context).bind('click',  BibdkModal.setMainwrapperAttr);
    $(document).bind('keydown', BibdkModal.keyEventHandler);
  };

  BibdkModal.unbindEvents = function(){
    $('#modalBackdrop').unbind('click', BibdkModal.closeModal);
    $(document).unbind('keydown', BibdkModal.keyEventHandler);
  };

  BibdkModal.keyEventHandler = function(event){
    if(event.keyCode == 27) {
      BibdkModal.closeModal();
      return false;
    }
  };

  BibdkModal.closeModal = function(){
    $('.close').trigger('click');
    BibdkModal.unbindEvents();
  };

  BibdkModal.setMainwrapperAttr = function(){
    $('#mainwrapper').attr("aria-hidden", false);
  };

  Drupal.behaviors.bibdk_modal = {
    attach: function(context, settings) {
      BibdkModal.setLinkActions(context);
      BibdkModal.bindEvents(context);
      BibdkModal.addAccessibilityInfo(context);
    }
  };
})(jQuery);
