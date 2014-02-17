<?php

function ctools_modal_form_wrapper($form_id, &$form_state) {
  global $bibdk_modal;

  $return = array();
  if ($bibdk_modal['executed']) {
    $form_state['executed'] = TRUE;
    $form_state['modal_redirect']['url'] = 'url';
    $form_state['modal_redirect']['options'] = 'options';
    $return[] = 'was executed';
  }
  else {
    $return[] = 'not executed';
  }

  return $return;
}

function ctools_ajax_command_redirect($url, $delay, $options){
  return array(
    'command' => 'redirect',
    'url' => 'A URL',
    'delay' => 'delay',
  );
}

function ctools_modal_command_dismiss(){
  return array(
    'command' => 'modal_dismiss',
  );
}

function ctools_ajax_command_reload(){
  return array(
    'command' => 'reload',
  );
}