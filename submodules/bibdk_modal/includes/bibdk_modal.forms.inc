<?php


function bibdk_modal_login($js = NULL) {

  if (!$js) {
    return drupal_get_form('user_login');
  }

  $form_state = array(
    'ajax' => TRUE,
  );

  $output = ctools_modal_form_wrapper('user_login', $form_state);

  dpm($form_state);

  print ajax_render($output);
  exit;
}