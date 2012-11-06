<?php


function wrap_form_section() {

  return array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('form-section'),
    ),
  );

}



function bibdk_form_1($form, &$form_state) {


  $form['#prefix'] = '<div class="row"><div class="span19 offset5"><div class="element-wrapper"><div class="element">';
  $form['#suffix'] = '</div></div></div></div>';



  // Section1
  $form['form_section1'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('form-section', 'form-section-first'),
    ),
  );

// Text fields
  $form['form_section1']['textfield'] = array(
    '#type' => 'textfield',
    '#title' => t('Text field'),
    '#description' => t('This is the description of the text field'),
    '#default_value' => t('This is the default value'),
  );
  $form['form_section1']['textfield_disabled'] = array(
    '#type' => 'textfield',
    '#title' => t('Disabled text field'),
    '#description' => t('This is the description of the disabled text field'),
    '#default_value' => t('This is the default value'),
    '#disabled' => TRUE,
  );
  $form['form_section1']['textfield_required'] = array(
    '#type' => 'textfield',
    '#title' => t('Required text field'),
    '#description' => t('This is the description of the required text field'),
    '#default_value' => t('This is the default value'),
    '#required' => TRUE,
  );

  // Text area
  $form['form_section1']['textarea'] = array(
    '#title' => t('This is a text area'),
    '#type' => 'textarea',
    '#description' => t('This is the description of the text area'),
    '#default_value' => t('This is the default value'),
  );

  // Text area disabled
  $form['form_section1']['textarea_disabled'] = array(
    '#title' => t('This is a disabled text area'),
    '#type' => 'textarea',
    '#description' => t('This is the description of the disabled text area'),
    '#default_value' => t('This is the default value'),
    '#disabled' => TRUE,
  );

  // Date field
  $form['form_section1']['date'] = array(
    '#type' => 'date',
    '#title' => t('This is a date field'),
    '#description' => t('This is the description of the date field'),
  );

  // Checkbox
  $form['form_section1']['checkbox'] = array(
    '#type' => 'checkbox',
    '#title' => t('This is a checkbox'),
    '#description' => t('This is the description of the checkbox'),
  );

  // Radiobuttons
  $form['form_section1']['radios'] = array(
    '#type' => 'radios',
    '#title' => t('This is radiobuttons'),
    '#default_value' => 1,
    '#options' => array(
      0 => t('Option 1'),
      1 => t('Option 2')
    ),
    '#description' => t('This is the description of the radiobuttons'),
  );

  // Select
  $form['form_section1']['selected'] = array(
    '#type' => 'select',
    '#title' => t('This is a select'),
    '#description' => t('This is the description of the select'),
    '#disabled' => TRUE,
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
  $form['form_section1']['upload'] = array(
    '#type' => 'file',
    '#title' => t('Choose a file'),
    '#description' => t('This is the description of the upload field'),
    '#size' => 22,
  );

  // Password
  $form['form_section1']['pass'] = array(
    '#type' => 'password',
    '#title' => t('Password input'),
    '#description' => t('This is the description of the password field'),
  );

  $form['form_section1']['passconfirm'] = array(
    '#type' => 'password_confirm',
    '#title' => t('Password with confirm'),
    '#description' => t('This is the description of the password confirm field'),
  );






  // Section2
  $form['form_section2'] = wrap_form_section();


  // Vertical tabs
  $form['form_section2']['vertical_tabs'] = array(
    '#type' => 'vertical_tabs',
    '#default_tab' => 'edit-tab1',
   );
  $form['form_section2']['tab1'] = array(
    '#type' => 'fieldset',
    '#title' => t('Tab 1'),
    '#collapsible' => TRUE,
    '#group' => 'vertical_tabs',
  );
  $form['form_section2']['tab1']['field1'] = array(
    '#title' => t('Field 1'),
    '#type' => 'textfield',
  );
  $form['form_section2']['tab1']['field2'] = array(
    '#title' => t('Field 2'),
    '#type' => 'textfield',
  );
  $form['form_section2']['tab2'] = array(
    '#type' => 'fieldset',
    '#title' => t('Tab 2'),
    '#collapsible' => TRUE,
    '#group' => 'vertical_tabs',
  );
  $form['form_section2']['tab2']['field3'] = array(
    '#title' => t('Field 1'),
    '#type' => 'textfield',
  );
  $form['form_section2']['tab2']['field4'] = array(
    '#title' => t('Field 2'),
    '#type' => 'textfield',
  );





  // Section3
  $form['form_section3'] = wrap_form_section();

  // Fieldset
  $form['form_section3']['fieldset'] = array(
    '#type' => 'fieldset',
    '#title' => t('This is a fieldset'),
  );
  $form['form_section3']['fieldset']['checkboxes'] = array(
    '#type' => 'checkboxes',
    '#options' => drupal_map_assoc(array(t('Option 1'), t('Option 2'))),
    '#title' => t('This is the checkboxes title'),
  );




  // Section4
  $form['form_section4'] = wrap_form_section();


  // Fieldset collapsed
  $form['form_section4']['fieldset2'] = array(
    '#type' => 'fieldset',
    '#title' => t('This is a collapsible fieldset'),
    '#collapsible' => TRUE,
  );
  $form['form_section4']['fieldset2']['checkboxes'] = array(
    '#type' => 'checkboxes',
    '#options' => drupal_map_assoc(array(t('Option 1'), t('Option 2'))),
    '#title' => t('This is the checkboxes title'),
  );



  // Section5
  $form['form_section5'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('form-section', 'form-section-horizontal'),
    ),
  );


  // Fieldset
  $form['form_section5']['fieldset3'] = array(
    '#type' => 'fieldset',
    '#attributes' => array(
      'class' => array('fieldset-notitle'),
    ),
  );
  $form['form_section5']['fieldset3']['checkboxes'] = array(
    '#type' => 'checkboxes',
    '#options' => drupal_map_assoc(array(t('Option 1'), t('Option 2'))),
    '#title' => t('This is the checkboxes title'),
    '#disabled' => TRUE,
  );





  // Section6
  $form['form_section6'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('form-section', 'form-section-horizontal'),
    ),
  );

  $form['form_section6']['input_container'] = array(
    '#type' => 'textfield',
    '#title' => t('This is a textfield in a container'),
  );


  // Section7
  $form['form_section7'] = array(
    '#type' => 'container',
    '#attributes' => array(
      'class' => array('form-section', 'form-section-last'),
    ),
  );
  $form['form_section7']['actions'] = array('#type' => 'actions');
  $form['form_section7']['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );
  $form['form_section7']['actions']['delete'] = array(
    '#type' => 'button',
    '#value' => t('Delete'),
  );
  $form['form_section7']['actions']['cancel'] = array(
    '#markup' => l(t('Cancel'), 'foo/bar', array('attributes' => array('class' => 'form-cancel'))),
  );


  return $form;
}

