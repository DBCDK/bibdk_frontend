<?php


/**
 * Menu callback that returns the user_login form wrapped in a modal
 * If JavaScript is disabled the normal form will be returned without the modal
 * wrapper.
 *
 * @param null $js
 */
function bibdk_modal_login($js = NULL) {
  if (!$js) {
    drupal_goto('user/login');
  }

  $form_state = _bibdk_modal_set_form_state();

  $output = ctools_modal_form_wrapper('user_login', $form_state);

  if (empty($output)) {
    $output[] = ctools_modal_command_loading();
    $output[] = ctools_ajax_command_redirect('user');
  }

  if (!empty($form_state['executed'])) {
    $url = $form_state['modal_redirect']['url'];
    $options = $form_state['modal_redirect']['options'];
    $output[] = ctools_ajax_command_redirect($url, 0, $options);
    $output[] = ctools_modal_command_dismiss();
  }

  print ajax_render($output);
}

/**
 * Menu callback that returns the forgot password form form wrapped in a modal
 * If JavaScript is disabled the normal form will be returned without the modal
 * wrapper.
 *
 * @param null $js
 */
function bibdk_modal_forgot_password($js = NULL) {
  module_load_include('pages.inc', 'user');
  if (!$js) {
    drupal_goto('user/password');
  }

  $form_state = _bibdk_modal_set_form_state();

  $output = ctools_modal_form_wrapper('user_pass', $form_state);

  if (empty($output)) {
    $output[] = ctools_modal_command_loading();
    $output[] = ctools_ajax_command_redirect('user');
  }

  if (!empty($form_state['executed'])) {
    $url = $form_state['modal_redirect']['url'];
    $options = $form_state['modal_redirect']['options'];
    $output[] = ctools_ajax_command_redirect($url, 0, $options);
    $output[] = ctools_modal_command_dismiss();
  }

  print ajax_render($output);
}

/**
 * Menu callback that returns the user register form wrapped in a modal
 * If JavaScript is disabled the normal form will be returned without the modal
 * wrapper.
 *
 * @param null $js
 */
function bibdk_modal_register($js = NULL) {
  if (!$js) {
    drupal_goto('user/register');
  }

  $form_state = _bibdk_modal_set_form_state();

  $output = ctools_modal_form_wrapper('user_register_form', $form_state);

  if (empty($output)) {
    $output[] = ctools_modal_command_loading();
    $output[] = ctools_ajax_command_redirect('user');
  }

  if (!empty($form_state['executed'])) {
    $url = $form_state['modal_redirect']['url'];
    $options = $form_state['modal_redirect']['options'];
    $output[] = ctools_ajax_command_redirect($url, 0, $options);
    $output[] = ctools_modal_command_dismiss();
  }

  print ajax_render($output);
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