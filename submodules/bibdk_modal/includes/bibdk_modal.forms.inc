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
 * Genrate form fro editing favourite userdaata
 * @param bool $js
 * @param string $branchid
 * @return array|mixed Form array
 */
function bibdk_modal_edit_favourite_userdata_form($js, $branchid) {

  $form_state = _bibdk_modal_set_form_state();
  $form_state['branchid'] = $branchid;

  $output = ctools_modal_form_wrapper('bibdk_favourite_user_form_fields', $form_state);

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

  print ajax_render($output);
}

/**
 * Genrate form fro editing favourite userdaata
 * @internal param bool $js
 * @internal param string $branchid
 * @return array|mixed Form array
 */
function bibdk_modal_add_to_favorites_callback() {
  global $user;
  module_load_include('inc', 'bibdk_favourite', 'includes/bibdk_favourite.forms');

  $agencyName = bibdk_favourite_check_for_new_agency();
  drupal_set_message(t("%library was added to your favorite libraries. Please enter your userdata", array('%library' => $agencyName), array('context' => 'bibdk_favourite')));

  if (empty($_GET['agency'])) {
    $url = "";
    if ($user->uid) {
      $url = "user/$user->uid/bibdk_favourite_list";
    }
    drupal_goto($url);
  }

  $branchid = $_GET['agency'];

  $form_state = _bibdk_modal_set_form_state();
  $form_state['branchid'] = $branchid;

  $output = ctools_modal_form_wrapper('bibdk_favourite_user_form_fields', $form_state);

  $output[0]['title'] = t('please_enter_personal_loaner_data', array(), array('context' => 'bibdk_favourite'));

  if (!empty($form_state['executed'])) {
    if ($user->uid) {
      $url = "user/$user->uid/bibdk_favourite_list";
      $output[] = ctools_ajax_command_redirect($url, 0, array());
    }
    else {
      $output[] = _bibdk_modal_custom_reload();
    }
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
function _bibdk_modal_custom_reload() {
  return array(
    'command' => 'bibdk_custom_reload',
  );
}