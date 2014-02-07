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
      $output[] = ctools_ajax_command_reload();
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
    $output[] = ctools_ajax_command_reload();
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
    $output[] = ctools_ajax_command_reload();
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