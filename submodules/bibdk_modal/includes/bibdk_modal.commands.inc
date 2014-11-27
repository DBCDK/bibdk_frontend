<?php

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
function bibdk_modal_commands_reload() {
  return array(
    'command' => 'bibdk_modal_reload',
  );
}

function bibdk_modal_commands_replace_form($html, $selector = '#bibdk-modal-form'){
  return array(
    'command' => 'bibdk_modal_replace_form',
    'selector' => $selector,
    'html' => $html,
  );
}

function bibdk_modal_commands_dismiss(){
  return array(
    'command' => 'bibdk_modal_dismiss',
  );
}