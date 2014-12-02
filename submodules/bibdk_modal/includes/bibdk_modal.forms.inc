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
    drupal_exit();
  }
  else {
    print $output;
    drupal_exit();
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
  } //TODO mmj wont a check on executed be sufficient
  elseif ($form_state['submitted'] && (empty($form_state['executed']) || empty($form_state['uid']))) {
    //Something went wrong. Replace the form currently displayed in the modal and let the user try again
    $commands = array();
    $commands[] = bibdk_modal_command_replace_form($form);
    return $commands;
  }
  else if ($form_state['executed'] && $form_state['uid']) {
    //We're successfullt logged in so close the modal and refresh the page
    $commands = array();
    $commands[] = bibdk_modal_command_dismiss();
    $commands[] = bibdk_modal_command_reload();
    return $commands;
  }
}

/**
 * Menu callback that returns the forgot password form form wrapped in a modal
 * If JavaScript is disabled the normal form will be returned without the modal
 * wrapper.
 */
function bibdk_modal_forgot_password() {
  $output = bibdk_modal_forgot_password_form();

  print ajax_render($output);
  drupal_exit();
}

/**
 * Forgot password form generator
 *
 * @return array|mixed
 */
function bibdk_modal_forgot_password_form() {
  module_load_include('pages.inc', 'user');

  $form_state = _bibdk_modal_set_form_state();

  $output = bibdk_modal_form_wrapper('user_pass', $form_state);
  $commands = array();

  if (empty($form_state['executed'])) {
    $commands[] = bibdk_modal_command_replace_form($output);
  }
  else {
    $commands[] = bibdk_modal_command_dismiss();
    $commands[] = bibdk_modal_command_reload();
  }

  return $commands;
}

/**
 * Menu callback that returns the user register form wrapped in a modal
 * If JavaScript is disabled the normal form will be returned without the modal
 * wrapper.
 */
function bibdk_modal_register() {
  $output = bibdk_modal_register_form();

  print ajax_render($output);
  drupal_exit();
}

/**
 * Register form generator
 *
 * @return array|mixed
 */
function bibdk_modal_register_form() {
  $form_state = _bibdk_modal_set_form_state();

  $output = bibdk_modal_form_wrapper('user_register_form', $form_state);
  $commands = array();

  if (empty($form_state['executed'])) {
    $commands[] = bibdk_modal_command_replace_form($output);
  }
  else {
    $commands[] = bibdk_modal_command_dismiss();
    $commands[] = bibdk_modal_command_reload();
  }

  return $commands;
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

function bibdk_modal_review_create_node() {
  $pid = bibdk_voxb_review_check_pid();
  return bibdk_modal_review_edit_node($pid);
}

/**
 * Menu callback. wrap blog_node_form in modal.
 *
 * @param string|null $pid
 */
function bibdk_modal_review_edit_node($pid = NULL) {
  if (!function_exists("node_form")) {
    include_once(drupal_get_path('module', 'node') . '/node.pages.inc');
  }

  $form_state = _bibdk_modal_set_form_state();

  $blog_node = bibdk_voxb_set_blog_node();

  $wrap = entity_metadata_wrapper('node', $blog_node);
  $voxb_id = $wrap->field_voxb_id->value();
  $form_state['build_info']['args'] = array($blog_node);

  $output = bibdk_modal_form_wrapper('blog_node_form', $form_state);

  $commands = array();
  if (empty($form_state['executed']) && empty($form_state['submitted'])) {
    $output = bibdk_modal_wrap_form_in_element_wrapper($output);
    $commands = $output;
  }
  elseif (empty($form_state['executed']) && !empty($form_state['submitted'])) {
    $commands[] = bibdk_modal_command_replace_form($output);
  }
  elseif (!empty($form_state['executed']) && !empty($form_state['submitted'])) {
    if (empty($pid)) {
      $commands[] = bibdk_voxb_ajax_review_saved($voxb_id);
    }
    else {
      $commands = bibdk_voxb_ajax_review_created($pid);
    }
    $commands[] = bibdk_modal_command_dismiss();
  }

  if (is_array($commands)) {
    print ajax_render($commands);
  }
  else {
    print $commands;
  }

  drupal_exit();
}

/**
 * Genrate form fro editing favourite userdaata
 *
 * @param string $branchid
 */
function bibdk_modal_edit_favourite_userdata_form($branchid) {
  $form_state = _bibdk_modal_set_form_state();
  $form_state['branchid'] = $branchid;

  $output = bibdk_modal_form_wrapper('bibdk_favourite_user_form_fields', $form_state);

  $commands = array();
  if (empty($form_state['executed']) && empty($form_state['submitted'])) {
    $output = bibdk_modal_wrap_form_in_element_wrapper($output);
    $commands = $output;
  }
  elseif (empty($form_state['executed']) && !empty($form_state['submitted'])) {
    $commands[] = bibdk_modal_command_replace_form($output);
  }
  elseif (!empty($form_state['executed']) && !empty($form_state['submitted'])) {
    $commands[] = bibdk_modal_command_reload();
    $commands[] = bibdk_modal_command_dismiss();
  }

  if (is_array($commands)) {
    print ajax_render($commands);
  }
  else {
    print $commands;
  }

  drupal_exit();
}

/**
 * Genrate form fro editing favourite userdaata
 *
 * @return array|mixed Form array
 */
function bibdk_modal_add_to_favorites_callback() {
  module_load_include('inc', 'bibdk_favourite', 'includes/bibdk_favourite.forms');

  $agencyName = bibdk_favourite_check_for_new_agency();
  drupal_set_message(t("%library was added to your favorite libraries. Please enter your userdata below.", array('%library' => $agencyName), array('context' => 'bibdk_favourite')));
  if (empty($_GET['agency'])) {
    global $user;
    $url = "";
    if ($user->uid) {
      $url = "user/$user->uid/bibdk_favourite_list";
    }
    drupal_goto($url);
  }

  $branchid = $_GET['agency'];

  $form_state = _bibdk_modal_set_form_state();
  $form_state['branchid'] = $branchid;

  $output = bibdk_modal_form_wrapper('bibdk_favourite_user_form_fields', $form_state);

  $commands = array();
  //$output[0]['title'] = t('please_enter_personal_loaner_data', array(), array('context' => 'bibdk_favourite')); //TODO mmj to use or not to use?

  if (empty($form_state['executed']) && empty($form_state['submitted'])) {
    $output = bibdk_modal_wrap_form_in_element_wrapper($output);
    $commands = $output;
  }
  elseif (empty($form_state['executed']) && !empty($form_state['submitted'])) {
    $commands[] = bibdk_modal_command_replace_form($output);
  }
  elseif (!empty($form_state['executed']) && !empty($form_state['submitted'])) {
    global $user;
    if ($user->uid) {
      $url = "user/$user->uid/bibdk_favourite_list";
      $commands[] = bibdk_modal_command_redirect($url, array());
    }
    else {
      $commands[] = bibdk_modal_command_reload();
    }
    $commands[] = bibdk_modal_command_dismiss();
  }

  if (is_array($commands)) {
    print ajax_render($commands);
  }
  else {
    print $commands;
  }
  drupal_exit();
}

/**
 * Wraps a form in a element-wrapper and a element
 *
 * @param string $output
 * @return string
 */
function bibdk_modal_wrap_form_in_element_wrapper($output) {
  if (!empty($output)) {
    $output = '<div class="element-wrapper"><div class="element">' . $output . '</div></div>';
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