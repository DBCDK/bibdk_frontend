<?php


/**
 * Menu callback that returns the user_login form wrapped in a modal
 * If JavaScript is disabled the normal form will be returned without the modal
 * wrapper.
 *
 * @param bool $js
 */
function bibdk_modal_login($js = FALSE) {
  $output = bibdk_modal_login_form($js);
  print ajax_render($output);
}

function bibdk_modal_offensive_form($js = FALSE){
  $form_state = _bibdk_modal_set_form_state();
  $output = ctools_modal_form_wrapper('bibdk_voxb_offensive_form', $form_state);

  if (!empty($form_state['executed'])) {
    $output = array(ctools_modal_command_dismiss(), _bibdk_modal_custom_reload());
  }

  print ajax_render($output);
}

/** menu callback. wrap blog_node_form in modal.
 * @param bool $js
 */
function bibdk_modal_review_edit_node($js=FALSE){
  if (!function_exists("node_form")) {
    include_once(drupal_get_path('module', 'node') . '/node.pages.inc');
  }

  $form_state = _bibdk_modal_set_form_state();
  $blog_node = bibdk_voxb_set_blog_node();
  //$form_state['node'] = $blog_node;
  $form_state['build_info']['args'] = array($blog_node);
  //$output = ctools_modal_form_wrapper('bibdk_voxb_review_modal_edit_form', $form_state);
  $output = ctools_modal_form_wrapper('blog_node_form', $form_state);
  if (!empty($form_state['executed'])) {
    $output = array(ctools_modal_command_dismiss(), _bibdk_modal_custom_reload());
  }

  print ajax_render($output);
}

/**
 * Login form generator
 * @param $js
 * @return array|mixed
 */
function bibdk_modal_login_form($js) {
  if (!$js) {
    drupal_goto('user/login');
  }

  $form_state = _bibdk_modal_set_form_state();

  $output = ctools_modal_form_wrapper('user_login', $form_state);

  if (!empty($form_state['executed'])) {
    if (!empty($form_state['modal_redirect']['url'])) {
      $url = $form_state['modal_redirect']['url'];
      $options = $form_state['modal_redirect']['options'];
      $output[] = ctools_ajax_command_redirect($url, 0, $options);
    }
    else {
      $output[] = _bibdk_modal_custom_reload();
    }
    $output[] = ctools_modal_command_dismiss();
  }

  return $output;
}

/**
 * Menu callback that returns the forgot password form form wrapped in a modal
 * If JavaScript is disabled the normal form will be returned without the modal
 * wrapper.
 *
 * @param bool $js
 */
function bibdk_modal_forgot_password($js = FALSE) {
  $output = bibdk_modal_forgot_password_form($js);

  print ajax_render($output);
}

/**
 * Forgot password form generator
 * @param $js
 * @return array|mixed
 */
function bibdk_modal_forgot_password_form($js) {
  module_load_include('pages.inc', 'user');
  if (!$js) {
    drupal_goto('user/password');
  }

  $form_state = _bibdk_modal_set_form_state();

  $output = ctools_modal_form_wrapper('user_pass', $form_state);

  if (!empty($form_state['executed'])) {
    //Forcing a reload of the page to avoid multiple bindings of events on other elements on the page
    $output[] = _bibdk_modal_custom_reload();
    $output[] = ctools_modal_command_dismiss();
  }

  return $output;
}

/**
 * Menu callback that returns the user register form wrapped in a modal
 * If JavaScript is disabled the normal form will be returned without the modal
 * wrapper.
 *
 * @param bool $js
 */
function bibdk_modal_register($js = FALSE) {
  $output = bibdk_modal_register_form($js);

  print ajax_render($output);
}

/**
 * Register form generator
 * @param $js
 * @return array|mixed
 */
function bibdk_modal_register_form($js) {
  if (!$js) {
    drupal_goto('user/register');
  }

  $form_state = _bibdk_modal_set_form_state();

  $output = ctools_modal_form_wrapper('user_register_form', $form_state);


  if (!empty($form_state['executed'])) {
    //Forcing a reload of the page to avoid multiple bindings of events on other elements on the page
    $output[] = _bibdk_modal_custom_reload();
    $output[] = ctools_modal_command_dismiss();
  }

  return $output;
}

/**
 * @return array
 */
function _bibdk_modal_set_form_state() {
  $form_state = array(
    'ajax' => TRUE,
  );

  return $form_state;
}

/**
 * Returns array with command for the bibdk_custom_reload command.
 *
 * Instead of just reloading the page the bibdk_custom_reload command requests
 * the browser to go to the current URL, which is done to avoid pop-up messages
 * in FF and IE when the logs in from a page with a form displayed.
 *
 * The command is implemented in bibdk.modal.js
 *
 * @return array
 */
function _bibdk_modal_custom_reload(){
  return array(
    'command' => 'bibdk_custom_reload',
  );
}