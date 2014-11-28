<?php
$page = new stdClass();
$page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
$page->api_version = 1;
$page->name = 'bibdk_frontpage';
$page->task = 'page';
$page->admin_title = 'bibdk_frontpage';
$page->admin_description = '';
$page->path = 'bibdk_frontpage';
$page->access = array(
  'plugins' => array(),
  'logic' => 'and',
);
$page->menu = array();
$page->arguments = array();
$page->conf = array(
  'admin_paths' => FALSE,
);
$page->default_handlers = array();
$handler = new stdClass();
$handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
$handler->api_version = 1;
$handler->name = 'page_bibdk_frontpage_panel_context';
$handler->task = 'page';
$handler->subtask = 'bibdk_frontpage';
$handler->handler = 'panel_context';
$handler->weight = 0;
$handler->conf = array(
  'title' => 'Bibliotek Frontpage',
  'no_blocks' => 0,
  'pipeline' => 'standard',
  'body_classes_to_remove' => '',
  'body_classes_to_add' => '',
  'css_id' => '',
  'css' => '',
  'contexts' => array(),
  'relationships' => array(),
);
$display = new panels_display();
$display->layout = 'bibdk_100';
$display->layout_settings = array();
$display->panel_settings = array(
  'style_settings' => array(
    'default' => NULL,
    'middle' => NULL,
    'top' => NULL,
    'bottom' => NULL,
  ),
  'bottom' => array(
    'style' => '-1',
  ),
  'middle' => array(
    'style' => '-1',
  ),
);
$display->cache = array();
$display->title = 'bibliotek.dk';
$display->content = array();
$display->panels = array();
$pane = new stdClass();
$pane->pid = 'new-1';
$pane->panel = 'bottom';
$pane->type = 'custom_header_block';
$pane->subtype = 'custom_header_block';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'pane_title' => 'NYT FRA BIBLIOTEK.DK',
  'link' => 'article_view_get_panel_link',
  'override_title' => 1,
  'override_title_text' => '',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$display->content['new-1'] = $pane;
$display->panels['bottom'][0] = 'new-1';
$pane = new stdClass();
$pane->pid = 'new-2';
$pane->panel = 'bottom';
$pane->type = 'views_panes';
$pane->subtype = 'article_view-panel_pane_1';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
  'style' => 'naked',
);
$pane->css = array();
$pane->extras = array();
$pane->position = 1;
$pane->locks = array();
$display->content['new-2'] = $pane;
$display->panels['bottom'][1] = 'new-2';
$pane = new stdClass();
$pane->pid = 'new-3';
$pane->panel = 'bottom';
$pane->type = 'views_panes';
$pane->subtype = 'article_view-panel_pane_3';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
  'style' => 'naked',
);
$pane->css = array(
  'css_id' => '',
  'css_class' => 'right',
);
$pane->extras = array();
$pane->position = 2;
$pane->locks = array();
$display->content['new-3'] = $pane;
$display->panels['bottom'][2] = 'new-3';
$pane = new stdClass();
$pane->pid = 'new-4';
$pane->panel = 'middle';
$pane->type = 'custom_header_block';
$pane->subtype = 'custom_header_block';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'text' => '',
  'override_title' => 1,
  'override_title_text' => '',
  'pane_title' => 'SUBJECT HIERARCHY',
  'link' => 'bibdk_subject_hierarchy_get_searchfield',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$display->content['new-4'] = $pane;
$display->panels['middle'][0] = 'new-4';
$pane = new stdClass();
$pane->pid = 'new-5';
$pane->panel = 'middle';
$pane->type = 'subject_hierarchy';
$pane->subtype = 'subject_hierarchy';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array(
  'css_id' => 'subjectshierarchy',
  'css_class' => '',
);
$pane->extras = array();
$pane->position = 1;
$pane->locks = array();
$display->content['new-5'] = $pane;
$display->panels['middle'][1] = 'new-5';
$pane = new stdClass();
$pane->pid = 'new-6';
$pane->panel = 'middle';
$pane->type = 'custom_header_block';
$pane->subtype = 'custom_header_block';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'pane_title' => 'CAROUSEL',
  'link' => '',
  'override_title' => 1,
  'override_title_text' => '',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 2;
$pane->locks = array();
$display->content['new-6'] = $pane;
$display->panels['middle'][2] = 'new-6';
$pane = new stdClass();
$pane->pid = 'new-7';
$pane->panel = 'middle';
$pane->type = 'carousel';
$pane->subtype = 'carousel';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array(
  'override_title' => 1,
  'override_title_text' => '',
);
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array(
  'css_id' => 'carousel',
  'css_class' => '',
);
$pane->extras = array();
$pane->position = 3;
$pane->locks = array();
$display->content['new-7'] = $pane;
$display->panels['middle'][3] = 'new-7';
$pane = new stdClass();
$pane->pid = 'new-8';
$pane->panel = 'top';
$pane->type = 'views_panes';
$pane->subtype = 'article_view-panel_pane_2';
$pane->shown = TRUE;
$pane->access = array();
$pane->configuration = array();
$pane->cache = array();
$pane->style = array(
  'settings' => NULL,
);
$pane->css = array();
$pane->extras = array();
$pane->position = 0;
$pane->locks = array();
$display->content['new-8'] = $pane;
$display->panels['top'][0] = 'new-8';
$display->hide_title = PANELS_TITLE_FIXED;
$display->title_pane = '0';
$handler->conf['display'] = $display;
$page->default_handlers[$handler->name] = $handler;


