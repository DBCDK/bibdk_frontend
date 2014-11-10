<?php
/**
 * @file
 * article_view.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function article_view_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'article_view';
  $view->description = 'bibdk articles in a view(block)';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'article_view';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Banner image */
  $handler->display->display_options['fields']['field_image']['id'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['table'] = 'field_data_field_image';
  $handler->display->display_options['fields']['field_image']['field'] = 'field_image';
  $handler->display->display_options['fields']['field_image']['label'] = '';
  $handler->display->display_options['fields']['field_image']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_image']['click_sort_column'] = 'fid';
  $handler->display->display_options['fields']['field_image']['settings'] = array(
    'image_style' => '',
    'image_link' => '',
  );
  /* Field: Content: color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  /* Field: Content: columns */
  $handler->display->display_options['fields']['field_columns']['id'] = 'field_columns';
  $handler->display->display_options['fields']['field_columns']['table'] = 'field_data_field_columns';
  $handler->display->display_options['fields']['field_columns']['field'] = 'field_columns';
  $handler->display->display_options['fields']['field_columns']['label'] = '';
  $handler->display->display_options['fields']['field_columns']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_columns']['element_label_colon'] = FALSE;
  /* Field: Content: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_bibdk_article_link']['id'] = 'field_bibdk_article_link';
  $handler->display->display_options['fields']['field_bibdk_article_link']['table'] = 'field_data_field_bibdk_article_link';
  $handler->display->display_options['fields']['field_bibdk_article_link']['field'] = 'field_bibdk_article_link';
  $handler->display->display_options['fields']['field_bibdk_article_link']['label'] = '';
  $handler->display->display_options['fields']['field_bibdk_article_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bibdk_article_link']['element_label_colon'] = FALSE;
  /* Field: Content: link classes */
  $handler->display->display_options['fields']['field_link_classes']['id'] = 'field_link_classes';
  $handler->display->display_options['fields']['field_link_classes']['table'] = 'field_data_field_link_classes';
  $handler->display->display_options['fields']['field_link_classes']['field'] = 'field_link_classes';
  $handler->display->display_options['fields']['field_link_classes']['label'] = '';
  $handler->display->display_options['fields']['field_link_classes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_classes']['element_label_colon'] = FALSE;
  /* Field: Content: link text */
  $handler->display->display_options['fields']['field_link_text']['id'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['table'] = 'field_data_field_link_text';
  $handler->display->display_options['fields']['field_link_text']['field'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_link_text']['element_label_colon'] = FALSE;
  /* Field: Content: Page type */
  $handler->display->display_options['fields']['field_taxonomy']['id'] = 'field_taxonomy';
  $handler->display->display_options['fields']['field_taxonomy']['table'] = 'field_data_field_taxonomy';
  $handler->display->display_options['fields']['field_taxonomy']['field'] = 'field_taxonomy';
  $handler->display->display_options['fields']['field_taxonomy']['label'] = '';
  $handler->display->display_options['fields']['field_taxonomy']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_taxonomy']['element_label_colon'] = FALSE;
  /* Field: Content: page type */
  $handler->display->display_options['fields']['field_page']['id'] = 'field_page';
  $handler->display->display_options['fields']['field_page']['table'] = 'field_data_field_page';
  $handler->display->display_options['fields']['field_page']['field'] = 'field_page';
  $handler->display->display_options['fields']['field_page']['label'] = '';
  $handler->display->display_options['fields']['field_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page']['element_label_colon'] = FALSE;
  /* Field: Content: rows */
  $handler->display->display_options['fields']['field_rows']['id'] = 'field_rows';
  $handler->display->display_options['fields']['field_rows']['table'] = 'field_data_field_rows';
  $handler->display->display_options['fields']['field_rows']['field'] = 'field_rows';
  $handler->display->display_options['fields']['field_rows']['label'] = '';
  $handler->display->display_options['fields']['field_rows']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rows']['element_label_colon'] = FALSE;
  /* Field: Content: weight */
  $handler->display->display_options['fields']['field_weight']['id'] = 'field_weight';
  $handler->display->display_options['fields']['field_weight']['table'] = 'field_data_field_weight';
  $handler->display->display_options['fields']['field_weight']['field'] = 'field_weight';
  $handler->display->display_options['fields']['field_weight']['label'] = '';
  $handler->display->display_options['fields']['field_weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_weight']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Page type (field_taxonomy) */
  $handler->display->display_options['arguments']['field_taxonomy_tid']['id'] = 'field_taxonomy_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['table'] = 'field_data_field_taxonomy';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['field'] = 'field_taxonomy_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['default_argument_options']['argument'] = 'alle_materialer';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_taxonomy_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: page region (field_page_region) */
  $handler->display->display_options['arguments']['field_page_region_tid']['id'] = 'field_page_region_tid';
  $handler->display->display_options['arguments']['field_page_region_tid']['table'] = 'field_data_field_page_region';
  $handler->display->display_options['arguments']['field_page_region_tid']['field'] = 'field_page_region_tid';
  $handler->display->display_options['arguments']['field_page_region_tid']['default_action'] = 'not found';
  $handler->display->display_options['arguments']['field_page_region_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_page_region_tid']['default_argument_options']['argument'] = 'bottom';
  $handler->display->display_options['arguments']['field_page_region_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_region_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_region_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_page_region_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_page_region_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_page_region_tid']['validate_options']['vocabularies'] = array(
    'page_region' => 'page_region',
  );
  $handler->display->display_options['arguments']['field_page_region_tid']['validate_options']['type'] = 'convert';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'bibdk_article' => 'bibdk_article',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;

  /* Display: bottom pane */
  $handler = $view->new_display('panel_pane', 'bottom pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Page type (field_taxonomy) */
  $handler->display->display_options['arguments']['field_taxonomy_tid']['id'] = 'field_taxonomy_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['table'] = 'field_data_field_taxonomy';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['field'] = 'field_taxonomy_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['default_argument_options']['argument'] = 'alle_materialer';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_taxonomy_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: page region (field_page_region) */
  $handler->display->display_options['arguments']['field_page_region_tid']['id'] = 'field_page_region_tid';
  $handler->display->display_options['arguments']['field_page_region_tid']['table'] = 'field_data_field_page_region';
  $handler->display->display_options['arguments']['field_page_region_tid']['field'] = 'field_page_region_tid';
  $handler->display->display_options['arguments']['field_page_region_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_region_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_page_region_tid']['default_argument_options']['argument'] = 'bottom';
  $handler->display->display_options['arguments']['field_page_region_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_region_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_region_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_page_region_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_page_region_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_page_region_tid']['validate_options']['vocabularies'] = array(
    'page_region' => 'page_region',
  );
  $handler->display->display_options['arguments']['field_page_region_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_page_region_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'field_taxonomy_tid' => array(
      'type' => 'panel',
      'context' => 'entity:file.fid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Page type (field_taxonomy)',
    ),
    'field_page_region_tid' => array(
      'type' => 'context',
      'context' => 'entity:taxonomy_vocabulary.name',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: page region (field_page_region)',
    ),
  );

  /* Display: top pane */
  $handler = $view->new_display('panel_pane', 'top pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Page type (field_taxonomy) */
  $handler->display->display_options['arguments']['field_taxonomy_tid']['id'] = 'field_taxonomy_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['table'] = 'field_data_field_taxonomy';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['field'] = 'field_taxonomy_tid';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['default_argument_options']['argument'] = 'alle_materialer';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_taxonomy_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_taxonomy_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Content: page region (field_page_region) */
  $handler->display->display_options['arguments']['field_page_region_tid']['id'] = 'field_page_region_tid';
  $handler->display->display_options['arguments']['field_page_region_tid']['table'] = 'field_data_field_page_region';
  $handler->display->display_options['arguments']['field_page_region_tid']['field'] = 'field_page_region_tid';
  $handler->display->display_options['arguments']['field_page_region_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_region_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_page_region_tid']['default_argument_options']['argument'] = 'top';
  $handler->display->display_options['arguments']['field_page_region_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_region_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_region_tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_page_region_tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['field_page_region_tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['field_page_region_tid']['validate_options']['vocabularies'] = array(
    'page_region' => 'page_region',
  );
  $handler->display->display_options['arguments']['field_page_region_tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['field_page_region_tid']['break_phrase'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'field_taxonomy_tid' => array(
      'type' => 'panel',
      'context' => 'entity:file.fid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Page type (field_taxonomy)',
    ),
    'field_page_region_tid' => array(
      'type' => 'context',
      'context' => 'entity:file.fid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: page region (field_page_region)',
    ),
  );
  $translatables['article_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('All'),
    t('Block'),
    t('bottom pane'),
    t('View panes'),
    t('top pane'),
  );
  $export['article_view'] = $view;

  return $export;
}
