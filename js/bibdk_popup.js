
//window open funktion
var profiles = {
  windowNew: {
    height:500,
    width:780,
    center:1,
    createnew:1,
    scrollbars:1,
    status:1
  }
,
windowLeftTop: {
    height:500,
    width:780,
    center:0,
    createnew:1,
    scrollbars:1,
    status:1,
    left:10,
    top:10
  }
};

(function($){

  $(document).ready(function(){

    $(function() {
      $(".bibdk-popup-link").popupwindow(profiles);
    });

  });

})(jQuery);
