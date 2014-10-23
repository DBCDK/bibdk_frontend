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
  $view->name = 'bibdk_articles_view';
  $view->description = 'article list for frontpage and custom search pages';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'bibdk articles view';
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
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Body */
  $handler->display->display_options['fields']['body']['id'] = 'body';
  $handler->display->display_options['fields']['body']['table'] = 'field_data_body';
  $handler->display->display_options['fields']['body']['field'] = 'body';
  $handler->display->display_options['fields']['body']['label'] = '';
  $handler->display->display_options['fields']['body']['element_label_colon'] = FALSE;
  /* Field: Content: columns */
  $handler->display->display_options['fields']['field_columns']['id'] = 'field_columns';
  $handler->display->display_options['fields']['field_columns']['table'] = 'field_data_field_columns';
  $handler->display->display_options['fields']['field_columns']['field'] = 'field_columns';
  $handler->display->display_options['fields']['field_columns']['label'] = '';
  $handler->display->display_options['fields']['field_columns']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_columns']['element_label_colon'] = FALSE;
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
  /* Field: Content: color */
  $handler->display->display_options['fields']['field_color']['id'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['table'] = 'field_data_field_color';
  $handler->display->display_options['fields']['field_color']['field'] = 'field_color';
  $handler->display->display_options['fields']['field_color']['label'] = '';
  $handler->display->display_options['fields']['field_color']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_color']['element_label_colon'] = FALSE;
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
  /* Field: Content: Link */
  $handler->display->display_options['fields']['field_bibdk_article_link']['id'] = 'field_bibdk_article_link';
  $handler->display->display_options['fields']['field_bibdk_article_link']['table'] = 'field_data_field_bibdk_article_link';
  $handler->display->display_options['fields']['field_bibdk_article_link']['field'] = 'field_bibdk_article_link';
  $handler->display->display_options['fields']['field_bibdk_article_link']['label'] = '';
  $handler->display->display_options['fields']['field_bibdk_article_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_bibdk_article_link']['element_label_colon'] = FALSE;
  /* Field: Content: link text */
  $handler->display->display_options['fields']['field_link_text']['id'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['table'] = 'field_data_field_link_text';
  $handler->display->display_options['fields']['field_link_text']['field'] = 'field_link_text';
  $handler->display->display_options['fields']['field_link_text']['label'] = '';
  $handler->display->display_options['fields']['field_link_text']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link_text']['element_label_colon'] = FALSE;
  /* Field: Content: link */
  $handler->display->display_options['fields']['field_link']['id'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['table'] = 'field_data_field_link';
  $handler->display->display_options['fields']['field_link']['field'] = 'field_link';
  $handler->display->display_options['fields']['field_link']['label'] = '';
  $handler->display->display_options['fields']['field_link']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_link']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: page type (field_page) */
  $handler->display->display_options['arguments']['field_page_value']['id'] = 'field_page_value';
  $handler->display->display_options['arguments']['field_page_value']['table'] = 'field_data_field_page';
  $handler->display->display_options['arguments']['field_page_value']['field'] = 'field_page_value';
  $handler->display->display_options['arguments']['field_page_value']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_page_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_page_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_page_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_page_value']['limit'] = '0';
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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'bibdk_frontpage';

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $translatables['bibdk_articles_view'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('All'),
    t('Page'),
    t('Block'),
  );
  $export['bibdk_articles_view'] = $view;

  return $export;
}
