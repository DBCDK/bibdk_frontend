<?php

/**
 * @file API documentation of hook_worktabs_items().
 */


/**
 * Hook used by the worktabs module to retrieve content from other modules,
 * implementing the hook, to display embedded in the tabs.
 *
 *  'title':  String giving the title of the current item. If an empty string is
 *            provided no title will be set.
 *
 *  'btn_txt_closed:' Optional string, setting the title of the open/close
 *                    button when the item untoggled.
 *
 *  'btn_txt_open': Optional string, setting the title of the open/close button
 *                  when the item is toggled.
 *
 *  'rendered': String containing ready for disaplay rendered HTML.
 *
 *  'weight': Integer indicating the weight of the item.
 *            Lower number = rendered as first item.
 *
 *
 * @param array $tabs Array describing the maintabs
 * @param BibdkWork $entity
 *
 * @return array
 *
 * @see worktabs.module - worktabs_render_content($tabs)
 *
 */
function hook_worktabs_items($tabs, $entity) {
  $tabs['PARENT_TAB']['MY_ITEM'] = array(
    'title' => '',
    'btn_txt_closed' => '',
    'btn_txt_open' => '',
    'rendered' => '',
    'weight' => 0,
    );
  return $tabs;
}
