<?php
/**
 * @file
 * bibdk_field_settings.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function bibdk_field_settings_field_default_fields() {
  $fields = array();

  // Exported field: 'bibdkCollection-bibdkCollection-bibdk_coll_reservation_button'.
  $fields['bibdkCollection-bibdkCollection-bibdk_coll_reservation_button'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_coll_reservation_button',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'bibdk_reservation',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_coll_reservation_button',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkCollection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkCollection',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'bibdk_reservation',
          'settings' => array(),
          'type' => 'bibdk_reservation_collection_button',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'bibdk_reservation',
          'settings' => array(),
          'type' => 'bibdk_reservation_collection_button',
          'weight' => 0,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'bibdkCollection',
      'field_name' => 'bibdk_coll_reservation_button',
      'label' => 'Reservation Button',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_cart_manifestation_link'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_cart_manifestation_link'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_cart_manifestation_link',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'bibdk_cart_field',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_cart_manifestation_link',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => NULL,
          'settings' => array(),
          'type' => 'bibdk_cart_link_default',
          'weight' => 47,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '44',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '46',
        ),
        'print' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '47',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 47,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_cart_manifestation_link',
      'label' => 'add_to_cart',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 47,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_access_information'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_access_information'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_access_information',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_access_information',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '14',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '29',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '41',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '37',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '42',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 33,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_access_information',
      'label' => 'Access Information',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 33,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_actor_note'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_actor_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_actor_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_actor_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '12',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '21',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '27',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '23',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '27',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 25,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_actor_note',
      'label' => 'Actor Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 25,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_alt_title'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_alt_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_alt_title',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_alt_title',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '36',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '6',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '2',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '5',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_alt_title',
      'label' => 'Alternative title',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 10,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_audience_subjects'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_audience_subjects'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_audience_subjects',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_audience_subjects',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '27',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '17',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '18',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '14',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '18',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 21,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_audience_subjects',
      'label' => 'Audience Subjects',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 21,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_content_note'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_content_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_content_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_content_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '16',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '40',
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '38',
        ),
        'print' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 44,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_content_note',
      'label' => 'Content Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 44,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_content_partial_note'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_content_partial_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_content_partial_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_content_partial_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '17',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '41',
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '46',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '39',
        ),
        'print' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '44',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 45,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_content_partial_note',
      'label' => 'Content Partial Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 45,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_context'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_context'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_context',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_context',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '3',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '25',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '25',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '21',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '25',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 29,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_context',
      'label' => 'Context',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 29,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_contribs'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_contribs'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_contribs',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_contribs',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '7',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '3',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '6',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_contribs',
      'label' => 'Contributors',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 11,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_creators'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_creators'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_creators',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_creators',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'hidden',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '1',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '3',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '1',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '2',
        ),
        'reservation' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 7,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_creators',
      'label' => 'Creators',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 7,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_description_note'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_description_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_description_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_description_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '13',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '22',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '31',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '27',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '31',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 26,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_description_note',
      'label' => 'Description Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 26,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_edition'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_edition'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_edition',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_edition',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '9',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '32',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '6',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '9',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 36,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_edition',
      'label' => 'Edition',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 36,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_format'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_format'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_format',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_format',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '9',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '13',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '11',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '13',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 13,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_format',
      'label' => 'Format',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 13,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_forms'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_forms'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_forms',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_forms',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '44',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '8',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '22',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '18',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '22',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 12,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_forms',
      'label' => 'Forms',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 12,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_genre'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_genre'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_genre',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_genre',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '40',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '16',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '23',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '19',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '23',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 20,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_genre',
      'label' => 'Genre',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 20,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_host_pub'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_host_pub'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_host_pub',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_host_pub',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '34',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '12',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '10',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '12',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 38,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_host_pub',
      'label' => 'Host Publication',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 38,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_identifiers'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_identifiers'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '26',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '34',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '30',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '34',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 30,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_identifiers',
      'label' => 'Identifiers',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 30,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_identifiers_isbn'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_identifiers_isbn'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers_isbn',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers_isbn',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '25',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '37',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '36',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '31',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '35',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 41,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_identifiers_isbn',
      'label' => 'Identifiers ISBN',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 41,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_identifiers_ismn'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_identifiers_ismn'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers_ismn',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers_ismn',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '21',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '38',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '37',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '33',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '37',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 42,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_identifiers_ismn',
      'label' => 'Identifiers ISMN',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 42,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_identifiers_issn'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_identifiers_issn'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers_issn',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers_issn',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '20',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '39',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '35',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '32',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '36',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 43,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_identifiers_issn',
      'label' => 'Identifiers ISSN',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 43,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_infotext'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_infotext'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_infotext',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_infotext',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '47',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '35',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '40',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '35',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '41',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 39,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_infotext',
      'label' => 'Info text',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 39,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_language'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_language'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_language',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_language',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '7',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '28',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '4',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '7',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 32,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_language',
      'label' => 'Language',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 32,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_marked_audience'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_marked_audience'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_marked_audience',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_marked_audience',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '26',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '18',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '30',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '26',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '30',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 22,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_marked_audience',
      'label' => 'Marked Audience',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 22,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_orig_title'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_orig_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_orig_title',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_orig_title',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '35',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '5',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '32',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '28',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '32',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 9,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_orig_title',
      'label' => 'Original title',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 9,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_originals'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_originals'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_originals',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_originals',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '24',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '33',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '29',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '33',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 28,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_originals',
      'label' => 'Originals',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 28,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_pegi'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_pegi'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_pegi',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_pegi',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '31',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '36',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '29',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '25',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '29',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 40,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_pegi',
      'label' => 'Audience Pegi',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 40,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_price_information'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_price_information'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_price_information',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_price_information',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '6',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '27',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '39',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '36',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '39',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 31,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_price_information',
      'label' => 'Price Information',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 31,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_pub_format'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_pub_format'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_pub_format',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_pub_format',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '15',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '33',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '11',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '9',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '11',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 37,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_pub_format',
      'label' => 'Publication Format',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 37,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_pub_year'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_pub_year'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_pub_year',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_pub_year',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '23',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '31',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '10',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '7',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '10',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 35,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_pub_year',
      'label' => 'Publication Year',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 35,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_publisher'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_publisher'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_publisher',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_publisher',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '22',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '30',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '5',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '8',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 34,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_publisher',
      'label' => 'Publisher',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 34,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_readability_indexes'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_readability_indexes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_readability_indexes',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_readability_indexes',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '41',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '12',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '20',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '16',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '20',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 16,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_readability_indexes',
      'label' => 'Readability indexes',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 16,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_readability_numbers'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_readability_numbers'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_readability_numbers',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_readability_numbers',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '37',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '13',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '21',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '17',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '21',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 17,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_readability_numbers',
      'label' => 'Readability numbers',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 17,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_recommended_audience'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_recommended_audience'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_recommended_audience',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_recommended_audience',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '10',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '19',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '28',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '24',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '28',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 23,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_recommended_audience',
      'label' => 'Recommended Audience',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 23,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_references'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_references'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_references',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_references',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '8',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '23',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '24',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '20',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '24',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 27,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_references',
      'label' => 'References',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 27,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_related_series'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_related_series'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_related_series',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_related_series',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '42',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '11',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '17',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '13',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '17',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 15,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_related_series',
      'label' => 'Related series',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 15,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_section'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_section'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_section',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_section',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 50,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '43',
        ),
        'print' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_section',
      'label' => 'Section',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 54,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_series'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_series'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_series',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_series',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '46',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '10',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '16',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '12',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '16',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 14,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_series',
      'label' => 'Series',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 14,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_shelf'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_shelf'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_shelf',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_shelf',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '38',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '14',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '38',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '34',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '38',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 18,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_shelf',
      'label' => 'Shelf',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 18,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_text_levels'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_text_levels'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_text_levels',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_text_levels',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '39',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '15',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '19',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '15',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '19',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 19,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_text_levels',
      'label' => 'Text Levels',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 19,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_title'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_title',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_title',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'hidden',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '0',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '2',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '0',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '1',
        ),
        'reservation' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_title',
      'label' => 'Title',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 6,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_type'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_type'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_type',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_type',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'hidden',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '2',
        ),
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '4',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '49',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '0',
        ),
        'reservation' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 8,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_type',
      'label' => 'Manifestation type',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 8,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_used_language'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_used_language'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_used_language',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_used_language',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '11',
        ),
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '20',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '26',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '22',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '26',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 24,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_used_language',
      'label' => 'Used Language',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 24,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_mani_volume'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_mani_volume'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_volume',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_volume',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 51,
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '44',
        ),
        'print' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_mani_volume',
      'label' => 'Volume',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 55,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-bibdk_reservation_info'.
  $fields['bibdkManifestation-bibdkManifestation-bibdk_reservation_info'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_reservation_info',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'bibdk_reservation',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_reservation_info',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '34',
        ),
        'default' => array(
          'label' => 'hidden',
          'module' => 'bibdk_reservation',
          'settings' => array(),
          'type' => 'bibdk_reservation_information_default',
          'weight' => '0',
        ),
        'email' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
        'full' => array(
          'label' => 'hidden',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '45',
        ),
        'print' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'bibdk_reservation_info',
      'label' => 'Infotext',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-ting_openformat_mani_abstract'.
  $fields['bibdkManifestation-bibdkManifestation-ting_openformat_mani_abstract'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'ting_openformat_mani_abstract',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'ting_openformat_mani_abstract',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '42',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '15',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '48',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '15',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 48,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'ting_openformat_mani_abstract',
      'label' => 'Work abstract',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 48,
      ),
    ),
  );

  // Exported field: 'bibdkManifestation-bibdkManifestation-ting_openformat_mani_subjects'.
  $fields['bibdkManifestation-bibdkManifestation-ting_openformat_mani_subjects'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'ting_openformat_mani_subjects',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'ting_openformat_mani_subjects',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestation',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestation',
      'display' => array(
        'cart' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '43',
        ),
        'email' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '47',
        ),
        'print' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '14',
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 49,
        ),
      ),
      'entity_type' => 'bibdkManifestation',
      'field_name' => 'ting_openformat_mani_subjects',
      'label' => 'Work subjects',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 49,
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_access_information'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_access_information'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_access_information',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_access_information',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '26',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 24,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 24,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_access_information',
      'label' => 'Access Information',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '26',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_actor_note'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_actor_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_actor_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_actor_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '18',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 16,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 16,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_actor_note',
      'label' => 'Actor Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_alt_title'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_alt_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_alt_title',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_alt_title',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 1,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_alt_title',
      'label' => 'Alternative title',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_audience_subjects'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_audience_subjects'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_audience_subjects',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_audience_subjects',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 12,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 12,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_audience_subjects',
      'label' => 'Audience Subjects',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_content_note'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_content_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_content_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_content_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '36',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 36,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 36,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_content_note',
      'label' => 'Content Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '36',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_content_partial_note'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_content_partial_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_content_partial_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_content_partial_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '37',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 37,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 37,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_content_partial_note',
      'label' => 'Content Partial Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '37',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_context'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_context'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_context',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_context',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '22',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 20,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 20,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_context',
      'label' => 'Context',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_contribs'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_contribs'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_contribs',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_contribs',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 2,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_contribs',
      'label' => 'Contributors',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_description_note'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_description_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_description_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_description_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '19',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 17,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 17,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_description_note',
      'label' => 'Description Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '19',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_edition'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_edition'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_edition',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_edition',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '29',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 27,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 27,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_edition',
      'label' => 'Edition',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '29',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_format'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_format'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_format',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_format',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 4,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_format',
      'label' => 'Format',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_forms'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_forms'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_forms',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_forms',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 3,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_forms',
      'label' => 'Forms',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_genre'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_genre'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_genre',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_genre',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '13',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 11,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_genre',
      'label' => 'Genre',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_host_pub'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_host_pub'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_host_pub',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_host_pub',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '31',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 29,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 29,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_host_pub',
      'label' => 'Host Publication',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_identifiers'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_identifiers'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '23',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 21,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 21,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_identifiers',
      'label' => 'Identifiers',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '23',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_identifiers_isbn'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_identifiers_isbn'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers_isbn',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers_isbn',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '33',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 33,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 33,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_identifiers_isbn',
      'label' => 'Identifiers ISBN',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_identifiers_ismn'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_identifiers_ismn'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers_ismn',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers_ismn',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '34',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 34,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 34,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_identifiers_ismn',
      'label' => 'Identifiers ISMN',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_identifiers_issn'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_identifiers_issn'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers_issn',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers_issn',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '35',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 35,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 35,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_identifiers_issn',
      'label' => 'Identifiers ISSN',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_language'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_language'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_language',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_language',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '25',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 23,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 23,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_language',
      'label' => 'Language',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '25',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_marked_audience'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_marked_audience'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_marked_audience',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_marked_audience',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '15',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 13,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 13,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_marked_audience',
      'label' => 'Marked Audience',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_orig_title'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_orig_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_orig_title',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_orig_title',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 0,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_orig_title',
      'label' => 'Original title',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_originals'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_originals'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_originals',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_originals',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '21',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 19,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 19,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_originals',
      'label' => 'Originals',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_pegi'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_pegi'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_pegi',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_pegi',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '32',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 32,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 32,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_pegi',
      'label' => 'Audience Pegi',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_price_information'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_price_information'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_price_information',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_price_information',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '24',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 22,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 22,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_price_information',
      'label' => 'Price Information',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '24',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_pub_format'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_pub_format'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_pub_format',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_pub_format',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '30',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 28,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 28,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_pub_format',
      'label' => 'Publication Format',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '30',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_pub_year'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_pub_year'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_pub_year',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_pub_year',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '28',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 26,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 26,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_pub_year',
      'label' => 'Publication Year',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '28',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_publisher'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_publisher'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_publisher',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_publisher',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '27',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 25,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 25,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_publisher',
      'label' => 'Publisher',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '27',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_readability_indexes'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_readability_indexes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_readability_indexes',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_readability_indexes',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 7,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 7,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_readability_indexes',
      'label' => 'Readability indexes',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_readability_numbers'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_readability_numbers'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_readability_numbers',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_readability_numbers',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '10',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 8,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 8,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_readability_numbers',
      'label' => 'Readability numbers',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_recommended_audience'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_recommended_audience'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_recommended_audience',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_recommended_audience',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '16',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 14,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 14,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_recommended_audience',
      'label' => 'Recommended Audience',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_references'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_references'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_references',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_references',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '20',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 18,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 18,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_references',
      'label' => 'References',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_related_series'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_related_series'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_related_series',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_related_series',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 6,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_related_series',
      'label' => 'Related series',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_series'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_series'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_series',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_series',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 5,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_series',
      'label' => 'Series',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_shelf'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_shelf'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_shelf',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_shelf',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '11',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 9,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 9,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_shelf',
      'label' => 'Shelf',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_text_levels'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_text_levels'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_text_levels',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_text_levels',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '12',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 10,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_text_levels',
      'label' => 'Text Levels',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_used_language'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_mani_used_language'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_used_language',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_used_language',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '17',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 15,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 15,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_mani_used_language',
      'label' => 'Used Language',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_section_creators'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_section_creators'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_section_creators',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_section_creators',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 31,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 31,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_section_creators',
      'label' => 'Section Creators',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationSection-bibdkManifestationSection-bibdk_section_title'.
  $fields['bibdkManifestationSection-bibdkManifestationSection-bibdk_section_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_section_title',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_section_title',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationSection',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationSection',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 30,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 30,
        ),
      ),
      'entity_type' => 'bibdkManifestationSection',
      'field_name' => 'bibdk_section_title',
      'label' => 'Section Title',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_access_information'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_access_information'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_access_information',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_access_information',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '26',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 24,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 24,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_access_information',
      'label' => 'Access Information',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '26',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_actor_note'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_actor_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_actor_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_actor_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '18',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 16,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 16,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_actor_note',
      'label' => 'Actor Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '18',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_alt_title'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_alt_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_alt_title',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_alt_title',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '3',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 1,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_alt_title',
      'label' => 'Alternative title',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_audience_subjects'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_audience_subjects'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_audience_subjects',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_audience_subjects',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '14',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 12,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 12,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_audience_subjects',
      'label' => 'Audience Subjects',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '14',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_content_note'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_content_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_content_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_content_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '37',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 36,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 36,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_content_note',
      'label' => 'Content Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '36',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_content_partial_note'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_content_partial_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_content_partial_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_content_partial_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '38',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 37,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 37,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_content_partial_note',
      'label' => 'Content Partial Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '37',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_context'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_context'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_context',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_context',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '22',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 20,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 20,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_context',
      'label' => 'Context',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '22',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_contribs'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_contribs'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_contribs',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_contribs',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '4',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 2,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_contribs',
      'label' => 'Contributors',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '4',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_description_note'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_description_note'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_description_note',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_description_note',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '19',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 17,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 17,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_description_note',
      'label' => 'Description Note',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '19',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_edition'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_edition'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_edition',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_edition',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '30',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 27,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 27,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_edition',
      'label' => 'Edition',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '29',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_format'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_format'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_format',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_format',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '6',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 4,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 4,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_format',
      'label' => 'Format',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '6',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_forms'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_forms'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_forms',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_forms',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 3,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 3,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_forms',
      'label' => 'Forms',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '5',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_genre'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_genre'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_genre',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_genre',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '13',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 11,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 11,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_genre',
      'label' => 'Genre',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '13',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_host_pub'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_host_pub'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_host_pub',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_host_pub',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '32',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 29,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 29,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_host_pub',
      'label' => 'Host Publication',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '31',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_identifiers'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_identifiers'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '23',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 21,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 21,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_identifiers',
      'label' => 'Identifiers',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '23',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_identifiers_isbn'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_identifiers_isbn'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers_isbn',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers_isbn',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '34',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 33,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 33,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_identifiers_isbn',
      'label' => 'Identifiers ISBN',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '33',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_identifiers_ismn'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_identifiers_ismn'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers_ismn',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers_ismn',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '35',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 34,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 34,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_identifiers_ismn',
      'label' => 'Identifiers ISMN',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '34',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_identifiers_issn'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_identifiers_issn'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_identifiers_issn',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_identifiers_issn',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '36',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 35,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 35,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_identifiers_issn',
      'label' => 'Identifiers ISSN',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '35',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_language'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_language'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_language',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_language',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '25',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 23,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 23,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_language',
      'label' => 'Language',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '25',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_marked_audience'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_marked_audience'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_marked_audience',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_marked_audience',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '15',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 13,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 13,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_marked_audience',
      'label' => 'Marked Audience',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '15',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_orig_title'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_orig_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_orig_title',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_orig_title',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 0,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_orig_title',
      'label' => 'Original title',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_originals'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_originals'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_originals',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_originals',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '21',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 19,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 19,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_originals',
      'label' => 'Originals',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '21',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_pegi'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_pegi'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_pegi',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_pegi',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '33',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 32,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 32,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_pegi',
      'label' => 'Audience Pegi',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '32',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_price_information'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_price_information'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_price_information',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_price_information',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '24',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 22,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 22,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_price_information',
      'label' => 'Price Information',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '24',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_pub_format'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_pub_format'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_pub_format',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_pub_format',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '31',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 28,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 28,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_pub_format',
      'label' => 'Publication Format',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '30',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_pub_year'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_pub_year'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_pub_year',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_pub_year',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '28',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 26,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 26,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_pub_year',
      'label' => 'Publication Year',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '28',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_publisher'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_publisher'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_publisher',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_publisher',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '27',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 25,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 25,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_publisher',
      'label' => 'Publisher',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '27',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_readability_indexes'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_readability_indexes'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_readability_indexes',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_readability_indexes',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '9',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 7,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 7,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_readability_indexes',
      'label' => 'Readability indexes',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '9',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_readability_numbers'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_readability_numbers'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_readability_numbers',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_readability_numbers',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '10',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 8,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 8,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_readability_numbers',
      'label' => 'Readability numbers',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '10',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_recommended_audience'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_recommended_audience'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_recommended_audience',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_recommended_audience',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '16',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 14,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 14,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_recommended_audience',
      'label' => 'Recommended Audience',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '16',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_references'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_references'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_references',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_references',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '20',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 18,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 18,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_references',
      'label' => 'References',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '20',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_related_series'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_related_series'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_related_series',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_related_series',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '8',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 6,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 6,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_related_series',
      'label' => 'Related series',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '8',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_series'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_series'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_series',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_series',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '7',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 5,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_series',
      'label' => 'Series',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '7',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_shelf'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_shelf'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_shelf',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_shelf',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '11',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 9,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 9,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_shelf',
      'label' => 'Shelf',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '11',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_text_levels'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_text_levels'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_text_levels',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_text_levels',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '12',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 10,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 10,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_text_levels',
      'label' => 'Text Levels',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '12',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_used_language'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_mani_used_language'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_mani_used_language',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_mani_used_language',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '17',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 15,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 15,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_mani_used_language',
      'label' => 'Used Language',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '17',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_volume_creators'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_volume_creators'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_volume_creators',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_volume_creators',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '1',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 31,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 31,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_volume_creators',
      'label' => 'Volume Creators',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'bibdkManifestationVolume-bibdkManifestationVolume-bibdk_volume_title'.
  $fields['bibdkManifestationVolume-bibdkManifestationVolume-bibdk_volume_title'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'bibdk_volume_title',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'bibdk_volume_title',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkManifestationVolume',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkManifestationVolume',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 30,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 30,
        ),
      ),
      'entity_type' => 'bibdkManifestationVolume',
      'field_name' => 'bibdk_volume_title',
      'label' => 'Volume Title',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => '0',
      ),
    ),
  );

  // Exported field: 'bibdkWorkEntity-bibdkWorkEntity-ting_cover_work'.
  $fields['bibdkWorkEntity-bibdkWorkEntity-ting_cover_work'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'ting_cover_work',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_covers_field',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'ting_cover_work',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkWorkEntity',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkWorkEntity',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'ting_covers',
          'settings' => array(
            'image_style' => 'medium',
          ),
          'type' => 'ting_cover_work',
          'weight' => '0',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_covers',
          'settings' => array(
            'image_style' => 'medium',
          ),
          'type' => 'ting_cover_work',
          'weight' => 0,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 0,
        ),
      ),
      'entity_type' => 'bibdkWorkEntity',
      'field_name' => 'ting_cover_work',
      'label' => 'Cover image',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => NULL,
        'settings' => array(),
        'type' => 'default',
        'weight' => 0,
      ),
    ),
  );

  // Exported field: 'bibdkWorkEntity-bibdkWorkEntity-ting_openformat_work_abstract'.
  $fields['bibdkWorkEntity-bibdkWorkEntity-ting_openformat_work_abstract'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'ting_openformat_work_abstract',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'ting_openformat_work_abstract',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkWorkEntity',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkWorkEntity',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 1,
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 1,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 1,
        ),
      ),
      'entity_type' => 'bibdkWorkEntity',
      'field_name' => 'ting_openformat_work_abstract',
      'label' => 'Work abstract',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
  );

  // Exported field: 'bibdkWorkEntity-bibdkWorkEntity-ting_openformat_work_subjects'.
  $fields['bibdkWorkEntity-bibdkWorkEntity-ting_openformat_work_subjects'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'ting_openformat_work_subjects',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'ting_openformat',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'ting_openformat_work_subjects',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkWorkEntity',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkWorkEntity',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => '5',
        ),
        'full' => array(
          'label' => 'above',
          'module' => 'ting_openformat',
          'settings' => array(),
          'type' => 'ting_openformat_default_formatter',
          'weight' => 2,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 2,
        ),
      ),
      'entity_type' => 'bibdkWorkEntity',
      'field_name' => 'ting_openformat_work_subjects',
      'label' => 'Work subjects',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'text',
        'settings' => array(
          'size' => 60,
        ),
        'type' => 'text_textfield',
        'weight' => 2,
      ),
    ),
  );

  // Exported field: 'bibdkWorkEntity-bibdkWorkEntity-worktabs'.
  $fields['bibdkWorkEntity-bibdkWorkEntity-worktabs'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'worktabs',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'worktabs',
      'settings' => array(),
      'storage' => array(
        'active' => '1',
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'virtual_field',
      ),
      'translatable' => '0',
      'type' => 'worktabs',
    ),
    'field_instance' => array(
      'bundle' => 'bibdkWorkEntity',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'ding_entity_type' => 'bibdkWorkEntity',
      'display' => array(
        'default' => array(
          'label' => 'hidden',
          'module' => 'worktabs',
          'settings' => array(),
          'type' => 'worktabs_default',
          'weight' => '2',
        ),
        'full' => array(
          'label' => 'hidden',
          'module' => 'worktabs',
          'settings' => array(),
          'type' => 'worktabs_default',
          'weight' => 5,
        ),
        'reservation' => array(
          'label' => 'above',
          'settings' => array(),
          'type' => 'hidden',
          'weight' => 5,
        ),
      ),
      'entity_type' => 'bibdkWorkEntity',
      'field_name' => 'worktabs',
      'label' => 'Worktabs',
      'required' => FALSE,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'module' => 'virtual_field',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Access Information');
  t('Actor Note');
  t('Alternative title');
  t('Audience Pegi');
  t('Audience Subjects');
  t('Content Note');
  t('Content Partial Note');
  t('Context');
  t('Contributors');
  t('Cover image');
  t('Creators');
  t('Description Note');
  t('Edition');
  t('Format');
  t('Forms');
  t('Genre');
  t('Host Publication');
  t('Identifiers');
  t('Identifiers ISBN');
  t('Identifiers ISMN');
  t('Identifiers ISSN');
  t('Info text');
  t('Infotext');
  t('Language');
  t('Manifestation type');
  t('Marked Audience');
  t('Original title');
  t('Originals');
  t('Price Information');
  t('Publication Format');
  t('Publication Year');
  t('Publisher');
  t('Readability indexes');
  t('Readability numbers');
  t('Recommended Audience');
  t('References');
  t('Related series');
  t('Reservation Button');
  t('Section');
  t('Section Creators');
  t('Section Title');
  t('Series');
  t('Shelf');
  t('Text Levels');
  t('Title');
  t('Used Language');
  t('Volume');
  t('Volume Creators');
  t('Volume Title');
  t('Work abstract');
  t('Work subjects');
  t('Worktabs');
  t('add_to_cart');

  return $fields;
}
