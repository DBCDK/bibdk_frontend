<?php


/**
 * Menu callback that returns the user_login form wrapped in a modal
 * If JavaScript is disabled in the client we will never get here as the login
 * link is being rewritten by client-side JavaScript.
 */
function bibdk_modal_login() {
  $output = bibdk_modal_login_form();

  if (is_array($output)) {
    print ajax_render($output);
    exit;
  }
  else {
    print $output;
  }
}

/**
 * Generates the login form.
 * If the form hasn't been submitted rendered html will be returned. Otherwise
 * the output will be returned wrapped in one or more commands to have our
 * JavaScript handle it client-side.
 *
 * @return array|mixed
 */
function bibdk_modal_login_form() {
  $form_state = _bibdk_modal_set_form_state();

  $form = bibdk_modal_form_wrapper('user_login', $form_state);

  if (empty($form_state['submitted'])) {
    return $form;
  }
  elseif ($form_state['submitted'] && (empty($form_state['executed']) || empty($form_state['uid']))) {
    //Something went wrong. Replace the form currently displayed in the modal and let the user try again
    $commands = array();
    $commands[] = bibdk_modal_commands_replace_form($form);
    return $commands;
  }
  else if ($form_state['executed'] && $form_state['uid']) {
    //We're successfullt logged in so close the modal and refresh the page
    $commands = array();
    $commands[] = bibdk_modal_commands_dismiss();
    $commands[] = bibdk_modal_commands_reload();
    return $commands;
  }
}

function bibdk_modal_offensive_form($js = FALSE) {
  $form_state = _bibdk_modal_set_form_state();
  $output = ctools_modal_form_wrapper('bibdk_voxb_offensive_form', $form_state);
  $message = t('bibdk_voxb_offensive_reported', array(), array('context' => 'bibdk_voxb'));
  $voxb_id = $_GET['voxb_id'];
  if (!empty($form_state['executed'])) {
    //$output = array(ctools_modal_command_dismiss(), _bibdk_modal_custom_reload());
    $output = array(
      bibdk_voxb_offensive_posted($voxb_id, $message),
      ctools_modal_command_dismiss()
    );
  }

  print ajax_render($output);
}

function bibdk_modal_review_create_node($js = FALSE) {
  $pid = bibdk_voxb_review_check_pid();
  return bibdk_modal_review_edit_node($js, $pid);
}

/** menu callback. wrap blog_node_form in modal.
 *
 * @param bool $js
 */
function bibdk_modal_review_edit_node($js = FALSE, $pid = NULL) {
  if (!function_exists("node_form")) {
    include_once(drupal_get_path('module', 'node') . '/node.pages.inc');
  }

  $form_state = _bibdk_modal_set_form_state();
  $blog_node = bibdk_voxb_set_blog_node();
  $wrap = entity_metadata_wrapper('node', $blog_node);
  $voxb_id = $wrap->field_voxb_id->value();
  //$form_state['node'] = $blog_node;
  $form_state['build_info']['args'] = array($blog_node);
  //$output = ctools_modal_form_wrapper('bibdk_voxb_review_modal_edit_form', $form_state);

  $output = ctools_modal_form_wrapper('blog_node_form', $form_state);
  if (!empty($form_state['executed'])) {
    if (empty($pid)) {
      $output = array(
        bibdk_voxb_ajax_review_saved($voxb_id),
        ctools_modal_command_dismiss()
      );
    }
    else {
      $output = array(
        bibdk_voxb_ajax_review_created($pid),
        ctools_modal_command_dismiss()
      );
    }
  }

  print ajax_render($output);
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
 *
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
 *
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
 *
 * @param bool $js
 * @param string $branchid
 * @return array|mixed Form array
 */
function bibdk_modal_edit_favourite_userdata_form($js, $branchid) {

  $form_state = _bibdk_modal_set_form_state();
  $form_state['branchid'] = $branchid;

  $output = ctools_modal_form_wrapper('bibdk_favourite_user_form_fields', $form_state);
  $output = bibdk_modal_wrap_form_in_element_wrapper($output);

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
 *
 * @internal param bool $js
 * @internal param string $branchid
 * @return array|mixed Form array
 */
function bibdk_modal_add_to_favorites_callback() {
  global $user;
  module_load_include('inc', 'bibdk_favourite', 'includes/bibdk_favourite.forms');

  $agencyName = bibdk_favourite_check_for_new_agency();
  drupal_set_message(t("%library was added to your favorite libraries. Please enter your userdata below.", array('%library' => $agencyName), array('context' => 'bibdk_favourite')));

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
  $output = bibdk_modal_wrap_form_in_element_wrapper($output);

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
 * Wraps a form (delivered in a modal) in a a element-wrapper and a element
 *
 * @param array $output
 * @return array
 */
function bibdk_modal_wrap_form_in_element_wrapper($output) {
  if (!empty($output[0]['output'])) {
    $output[0]['output'] = '<div class="element-wrapper"><div class="element">' . $output[0]['output'] . '</div></div>';
    return $output;
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