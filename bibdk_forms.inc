<?php



function bibdk_form_1($form, &$form_state) {


  $form['#prefix'] = '<div class="row"><div class="span19 offset5"><div class="element-wrapper"><div class="element">';
  $form['#suffix'] = '</div></div></div></div>';


  // Single text field
  // #prefix and #suffix is only needed if you want to create a 'form wrapper'
  $form['text1'] = array(
    '#type' => 'textfield',
    '#title' => t('Text field'),
    '#description' => t('This is the description of the text field'),
    '#default_value' => t('This is the default value'),
    '#prefix' => '<div class="form-wrapper">',
    '#suffix' => '</div>',
  );

  // Single text field in container
  $form['container1'] = array(
    '#type' => 'container',
  );
  $form['container1']['text2'] = array(
    '#type' => 'textfield',
    '#title' => t('Text field'),
    '#description' => t('This is the description of the text field'),
    '#default_value' => t('This is the default value'),
  );


  // Vertical tabs
  // #prefix and #suffix is required!
  $form['vertical_tabs'] = array(
    '#type' => 'vertical_tabs',
    '#default_tab' => 'edit-tab1',
    '#prefix' => '<div class="form-wrapper">',
    '#suffix' => '</div>',
   );
  $form['tab1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Tab 1'),
    '#collapsible' => TRUE,
    '#group' => 'vertical_tabs',
  );
  $form['tab1']['field1'] = array(
    '#title' => t('Field 1'),
    '#type' => 'textfield',
  );
  $form['tab1']['field2'] = array(
    '#title' => t('Field 2'),
    '#type' => 'textfield',
  );
  $form['tab2'] = array(
    '#type' => 'fieldset',
    '#title' => t('Tab 2'),
    '#collapsible' => TRUE,
    '#group' => 'vertical_tabs',
  );
  $form['tab2']['field3'] = array(
    '#title' => t('Field 1'),
    '#type' => 'textfield',
  );
  $form['tab2']['field4'] = array(
    '#title' => t('Field 2'),
    '#type' => 'textfield',
  );


  // Several form elements in a 'form wrapper'
  // Add #prefix to first element and #suffix to last element
  $form['text3'] = array(
    '#type' => 'textfield',
    '#title' => t('Text field'),
    '#description' => t('This is the description of the text field'),
    '#default_value' => t('This is the default value'),
    '#prefix' => '<div class="form-wrapper">',
  );
  $form['textarea'] = array(
    '#title' => t('This is a text area'),
    '#type' => 'textarea',
    '#description' => t('This is the description of the text area'),
    '#default_value' => t('This is the default value'),
    '#suffix' => '</div>',
  );



  // Date field
  $form['date'] = array(
    '#type' => 'date',
    '#title' => t('This is a date field'),
    '#description' => t('This is the description of the date field'),
    '#prefix' => '<div class="form-wrapper">',
  );

  // Checkbox
  $form['test_checkbox'] = array(
    '#type' => 'checkbox',
    '#title' => t('This is a checkbox'),
    '#description' => t('This is the description of the checkbox'),
  );

  // Radiobuttons
  $form['test_radios'] = array(
    '#type' => 'radios',
    '#title' => t('This is radiobuttons'),
    '#default_value' => 1,
    '#options' => array(
      0 => t('Option 1'),
      1 => t('Option 2')
    ),
    '#description' => t('This is the description of the radiobuttons'),
    '#suffix' => '</div>',
  );

  // Select
  $form['test_selected'] = array(
    '#type' => 'select',
    '#title' => t('This is a select'),
    '#description' => t('This is the description of the select'),
    '#prefix' => '<div class="form-wrapper">',
    '#suffix' => '</div>',
    '#options' => array(
      0 => t('Option 1'),
      1 => t('Option 2'),
      2 => t('Option 3'),
      3 => t('Option 4'),
      4 => t('Option 5'),
      5 => t('Option 6'),
    ),
  );

  // Upload
  $form['upload'] = array(
    '#type' => 'file',
    '#title' => t('Choose a file'),
    '#description' => t('This is the description of the upload field'),
    '#size' => 22,
    '#prefix' => '<div class="form-wrapper">',
    '#suffix' => '</div>',
  );

  // Fieldset
  $form['fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('This is a fieldset'),
  );
  $form['fieldset']['test_checkboxes'] = array(
    '#type' => 'checkboxes',
    '#options' => drupal_map_assoc(array(t('Option 1'), t('Option 2'))),
    '#title' => t('This is the checkboxes title'),
  );
  $form['fieldset']['text1'] = array(
    '#type' => 'textfield',
    '#title' => t('Text field'),
    '#description' => t('This is the description of the text field'),
    '#default_value' => t('This is the default value'),
  );



  // Fieldset collapsed
  $form['fieldset2'] = array(
    '#type' => 'fieldset',
    '#title' => t('This is a collapsible fieldset'),
    '#collapsible' => TRUE,
  );
  $form['fieldset2']['test_checkboxes'] = array(
    '#type' => 'checkboxes',
    '#options' => drupal_map_assoc(array(t('Option 1'), t('Option 2'))),
    '#title' => t('This is the checkboxes title'),
  );

  // Fieldset with no title
  $form['fieldset3'] = array(
    '#type' => 'fieldset',
  );
  $form['fieldset3']['text1'] = array(
    '#type' => 'textfield',
    '#title' => t('Text field'),
    '#description' => t('This is the description of the text field'),
    '#default_value' => t('This is the default value'),
  );
  $form['fieldset3']['checkboxes'] = array(
    '#type' => 'checkboxes',
    '#options' => drupal_map_assoc(array(t('Option 1'), t('Option 2'))),
    '#title' => t('This is the checkboxes title'),
    '#disabled' => TRUE,
  );


  // Password
  $form['pass'] = array(
    '#type' => 'password',
    '#title' => t('Password input'),
    '#description' => t('This is the description of the password field'),
    '#prefix' => '<div class="form-wrapper">',
    '#suffix' => '</div>',
  );

  // Password + confirm
  $form['passconfirm'] = array(
    '#type' => 'password_confirm',
    '#title' => t('Password with confirm'),
    '#description' => t('This is the description of the password confirm field'),
    '#prefix' => '<div class="form-wrapper">',
    '#suffix' => '</div>',
  );


  // Submit buttons
  $form['actions'] = array('#type' => 'actions');
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
    '#attributes' => array(
      'class' => array('btn-blue')
    ),
  );
  $form['actions']['delete'] = array(
    '#type' => 'button',
    '#value' => t('Delete'),
    '#attributes' => array(
      'class' => array('btn-grey')
    ),
  );
  $form['actions']['cancel'] = array(
    '#markup' => l(t('Cancel'), 'foo/bar', array('attributes' => array('class' => 'form-cancel'))),
  );


  return $form;
}

