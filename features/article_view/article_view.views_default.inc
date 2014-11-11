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
  $handler->display->display_options['use_more_text'] = 'mere';
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['submit_button'] = 'Udfør';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = 'Gendan';
  $handler->display->display_options['exposed_form']['options']['exposed_sorts_label'] = 'Sortér efter';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Felt: Indhold: Titel */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Felt: Indhold: Banner image */
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
  /* Felt: Indhold: color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
  /* Felt: Indhold: columns */
  $handler->display->display_options['fields']['field_columns']['id'] = 'field_columns';
  $handler->display->display_options['fields']['field_columns']['table'] = 'field_data_field_columns';
  $handler->display->display_options['fields']['field_columns']['field'] = 'field_columns';
  $handler->display->display_options['fields']['field_columns']['label'] = '';
  $handler->display->display_options['fields']['field_columns']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_columns']['element_label_colon'] = FALSE;
  /* Felt: Indhold: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  /* Felt: Indhold: Link */
  $handler->display->display_options['fields']['field_bibdk_article_link']['id'] = 'field_bibdk_article_link';
  $handler->display->display_options['fields']['field_bibdk_article_link']['table'] = 'field_data_field_bibdk_article_link';
  $handler->display->display_options['fields']['field_bibdk_article_link']['field'] = 'field_bibdk_article_link';
  $handler->display->display_options['fields']['field_bibdk_article_link']['label'] = '';
  $handler->display->display_options['fields']['field_bibdk_article_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bibdk_article_link']['element_label_colon'] = FALSE;
  /* Felt: Indhold: link classes */
  $handler->display->display_options['fields']['field_link_classes']['id'] = 'field_link_classes';
  $handler->display->display_options['fields']['field_link_classes']['table'] = 'field_data_field_link_classes';
  $handler->display->display_options['fields']['field_link_classes']['field'] = 'field_link_classes';
  $handler->display->display_options['fields']['field_link_classes']['label'] = '';
  $handler->display->display_options['fields']['field_link_classes']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_classes']['element_label_colon'] = FALSE;
  /* Felt: Indhold: link text */
  $handler->display->display_options['fields']['field_link_text']['id'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['table'] = 'field_data_field_link_text';
  $handler->display->display_options['fields']['field_link_text']['field'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_link_text']['element_label_colon'] = FALSE;
  /* Felt: Indhold: page type */
  $handler->display->display_options['fields']['field_page']['id'] = 'field_page';
  $handler->display->display_options['fields']['field_page']['table'] = 'field_data_field_page';
  $handler->display->display_options['fields']['field_page']['field'] = 'field_page';
  $handler->display->display_options['fields']['field_page']['label'] = '';
  $handler->display->display_options['fields']['field_page']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_page']['element_label_colon'] = FALSE;
  /* Felt: Indhold: rows */
  $handler->display->display_options['fields']['field_rows']['id'] = 'field_rows';
  $handler->display->display_options['fields']['field_rows']['table'] = 'field_data_field_rows';
  $handler->display->display_options['fields']['field_rows']['field'] = 'field_rows';
  $handler->display->display_options['fields']['field_rows']['label'] = '';
  $handler->display->display_options['fields']['field_rows']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_rows']['element_label_colon'] = FALSE;
  /* Felt: Indhold: weight */
  $handler->display->display_options['fields']['field_weight']['id'] = 'field_weight';
  $handler->display->display_options['fields']['field_weight']['table'] = 'field_data_field_weight';
  $handler->display->display_options['fields']['field_weight']['field'] = 'field_weight';
  $handler->display->display_options['fields']['field_weight']['label'] = '';
  $handler->display->display_options['fields']['field_weight']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_weight']['element_label_colon'] = FALSE;
  /* Sort criterion: Indhold: Oprettelsesdato */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Indhold: Udgivet */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Indhold: Type */
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
  /* Contextual filter: Indhold: page region (field_page_region) */
  $handler->display->display_options['arguments']['field_page_region_tid']['id'] = 'field_page_region_tid';
  $handler->display->display_options['arguments']['field_page_region_tid']['table'] = 'field_data_field_page_region';
  $handler->display->display_options['arguments']['field_page_region_tid']['field'] = 'field_page_region_tid';
  $handler->display->display_options['arguments']['field_page_region_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_region_tid']['exception']['title'] = 'Alle';
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
  $handler->display->display_options['arguments']['field_page_region_tid']['validate_options']['transform'] = TRUE;
  $handler->display->display_options['arguments']['field_page_region_tid']['validate']['fail'] = 'ignore';
  $handler->display->display_options['arguments']['field_page_region_tid']['break_phrase'] = TRUE;
  /* Contextual filter: Indhold: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = 'alle_materialer';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'page_type' => 'page_type',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['arguments']['tid']['break_phrase'] = TRUE;
  $handler->display->display_options['argument_input'] = array(
    'field_page_region_tid' => array(
      'type' => 'none',
      'context' => 'entity:taxonomy_vocabulary.name',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: page region (field_page_region)',
    ),
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Has taxonomy term ID',
    ),
  );

  /* Display: top pane */
  $handler = $view->new_display('panel_pane', 'top pane', 'panel_pane_2');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Indhold: page region (field_page_region) */
  $handler->display->display_options['arguments']['field_page_region_tid']['id'] = 'field_page_region_tid';
  $handler->display->display_options['arguments']['field_page_region_tid']['table'] = 'field_data_field_page_region';
  $handler->display->display_options['arguments']['field_page_region_tid']['field'] = 'field_page_region_tid';
  $handler->display->display_options['arguments']['field_page_region_tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_page_region_tid']['exception']['title'] = 'Alle';
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
  /* Contextual filter: Indhold: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = 'Alle';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['argument'] = 'alle_materialer';
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'page_type' => 'page_type',
  );
  $handler->display->display_options['arguments']['tid']['validate_options']['type'] = 'convert';
  $handler->display->display_options['argument_input'] = array(
    'field_page_region_tid' => array(
      'type' => 'none',
      'context' => 'entity:file.fid',
      'context_optional' => 1,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: page region (field_page_region)',
    ),
    'tid' => array(
      'type' => 'panel',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Indhold: Has taxonomy term ID',
    ),
  );
  $translatables['article_view'] = array(
    t('Master'),
    t('mere'),
    t('Udfør'),
    t('Gendan'),
    t('Sortér efter'),
    t('Asc'),
    t('Desc'),
    t('Block'),
    t('bottom pane'),
    t('Alle'),
    t('View panes'),
    t('top pane'),
  );
  $export['article_view'] = $view;

  return $export;
}
