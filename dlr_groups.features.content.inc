<?php

/**
 * Implementation of hook_content_default_fields().
 */
function dlr_groups_content_default_fields() {
  $fields = array();

  // Exported field: field_color_hex
  $fields['focusgroup-field_color_hex'] = array(
    'field_name' => 'field_color_hex',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '9',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Farbcode',
      'weight' => '9',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contactbalance
  $fields['focusgroup-field_contactbalance'] = array(
    'field_name' => 'field_contactbalance',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '4',
      'parent' => 'group_mpsupport',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'custom_formatters_user_reference_address',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 2,
      '8' => 8,
      '7' => 7,
      '9' => 9,
    ),
    'referenceable_status' => '1',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'reference_preview' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_contactbalance][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Betreuer beim Metaprojekt „DemoScreen“',
      'weight' => '4',
      'description' => '',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_contactdlr
  $fields['focusgroup-field_contactdlr'] = array(
    'field_name' => 'field_contactdlr',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '5',
      'parent' => 'group_supportdlr',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => '5',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '5',
          '_error_element' => 'default_value_widget][field_contactdlr][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Name',
      'weight' => '5',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contactdlrphone
  $fields['focusgroup-field_contactdlrphone'] = array(
    'field_name' => 'field_contactdlrphone',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '6',
      'parent' => 'group_supportdlr',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_contactdlrphone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Telefon',
      'weight' => '6',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_contactdlrpicture
  $fields['focusgroup-field_contactdlrpicture'] = array(
    'field_name' => 'field_contactdlrpicture',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_supportdlr',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'reference_preview' => '',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => NULL,
      'use_default_image' => 0,
      'label' => 'Bild',
      'weight' => '8',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_emailcontactdlr
  $fields['focusgroup-field_emailcontactdlr'] = array(
    'field_name' => 'field_emailcontactdlr',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '7',
      'parent' => 'group_supportdlr',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'reference_preview' => '',
    'widget' => array(
      'size' => '60',
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email',
      'weight' => '7',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_fgident
  $fields['focusgroup-field_fgident'] = array(
    'field_name' => 'field_fgident',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'hidden',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '1',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '4',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fgident][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Kürzel',
      'weight' => '2',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_fgspeakeremail
  $fields['focusgroup-field_fgspeakeremail'] = array(
    'field_name' => 'field_fgspeakeremail',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '31',
      'parent' => 'group_focusgroupspeaker',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'reference_preview' => '',
    'widget' => array(
      'size' => '60',
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email',
      'weight' => '31',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_fgspeakernoaccount
  $fields['focusgroup-field_fgspeakernoaccount'] = array(
    'field_name' => 'field_fgspeakernoaccount',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '30',
      'parent' => 'group_focusgroupspeaker',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fgspeakernoaccount][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Fokusgruppensprecher (ohne Benutzeraccount)',
      'weight' => '30',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_fgspeakerphone
  $fields['focusgroup-field_fgspeakerphone'] = array(
    'field_name' => 'field_fgspeakerphone',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '32',
      'parent' => 'group_focusgroupspeaker',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_fgspeakerphone][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Telefon',
      'weight' => '32',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_focusgroup_speaker
  $fields['focusgroup-field_focusgroup_speaker'] = array(
    'field_name' => 'field_focusgroup_speaker',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '29',
      'parent' => 'group_focusgroupspeaker',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 0,
      '8' => 0,
      '7' => 0,
      '10' => 0,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'reference_preview' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Fokusgruppensprecher',
      'weight' => '29',
      'description' => '',
      'type' => 'userreference_autocomplete',
      'module' => 'userreference',
    ),
  );

  // Exported field: field_frontpageimage
  $fields['focusgroup-field_frontpageimage'] = array(
    'field_name' => 'field_frontpageimage',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'image_plain',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '',
    'list_default' => '',
    'description_field' => '',
    'reference_preview' => '',
    'widget' => array(
      'file_extensions' => NULL,
      'file_path' => NULL,
      'progress_indicator' => NULL,
      'max_filesize_per_file' => NULL,
      'max_filesize_per_node' => NULL,
      'max_resolution' => NULL,
      'min_resolution' => NULL,
      'alt' => NULL,
      'custom_alt' => NULL,
      'title' => NULL,
      'custom_title' => NULL,
      'title_type' => NULL,
      'default_image' => NULL,
      'use_default_image' => NULL,
      'label' => 'Hintergrundbild für die Startseite',
      'weight' => '8',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_projectlogo
  $fields['focusgroup-field_projectlogo'] = array(
    'field_name' => 'field_projectlogo',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '1',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'projectlogo_9c_default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'projectlogo_9c_default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'reference_preview' => '',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'logos',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '124x124',
      'min_resolution' => '0',
      'alt' => 'Fokusgruppenlogo',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'logo_light.png',
        'filepath' => 'sites/dlr.wi1projects.com/files/imagefield_default_images/logo_light.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/dlr.wi1projects.com/files/imagefield_default_images/logo_light.png',
        'filesize' => 14445,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1340008834,
        'fid' => '46',
      ),
      'use_default_image' => 1,
      'label' => 'Projektlogo',
      'weight' => '1',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_projects
  $fields['focusgroup-field_projects'] = array(
    'field_name' => 'field_projects',
    'type_name' => 'focusgroup',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'viewfield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'viewfield',
    'active' => '1',
    'allowed_views' => array(
      'fg_projects' => 'fg_projects',
      'front_visual' => 0,
      'projects' => 0,
      'og_members_faces' => 0,
      'og_members' => 0,
      'og_members_block' => 0,
      'recent_posts_in_active_group' => 0,
      'og' => 0,
      'download_center' => 0,
      'og_unread' => 0,
      'og_ghp_ron' => 0,
      'taxonomy_term' => 0,
      'slideshow' => 0,
      'personal_blog' => 0,
      'og_my' => 0,
      'newest_faqs' => 0,
      'ProjekteSchlagworte' => 0,
      'og_mytracker' => 0,
      'public_downloads' => 0,
      'og_tracker' => 0,
      'signup_available_signups' => 0,
      'signup_current_signups' => 0,
      'bo_pressreleases' => 0,
      'og_open_requests' => 0,
      'og_open_member_requests' => 0,
      'focus_groups_overview' => 0,
      'bo_ur_contacts_pictures' => 0,
      'Veranstaltungen' => 0,
      'projecttabs_wiki_index' => 0,
      'Veranstaltungen_vergangen' => 0,
      'frontpage' => 0,
      'bo_all_project_documentlisting' => 0,
      'bo_projectmembersbox' => 0,
      'bo_projekt_uebersicht_tabelle' => 0,
      'user_byregistration' => 0,
      'bo_wiki_users' => 0,
      'bo_gmap_forschungsladnkarte' => 0,
      'bo_wiki_definitions' => 0,
      'bo_wiki_links' => 0,
      'control_content' => 0,
      'control_content_panes' => 0,
      'gallery' => 0,
      'galley_list' => 0,
      'comments_recent' => 0,
      'tracker' => 0,
      'glossary' => 0,
      'archive' => 0,
      'backlinks' => 0,
      'popular' => 0,
      'location_table' => 0,
      'location_directory' => 0,
      'user_location_table' => 0,
      'nodehierarchy_children_teasers' => 0,
      'nodehierarchy_children_list' => 0,
      'nodehierarchy_downloads' => 0,
      'og_files' => 0,
      'og_recent_type_term' => 0,
      'posts_by_term' => 0,
      'og_search' => 0,
      'signup_user_list' => 0,
      'signup_user_vbo_admin_list' => 0,
      'signup_user_admin_list' => 0,
      'control_activity' => 0,
      'control_comments' => 0,
      'control_files' => 0,
      'control_terms' => 0,
      'control_users' => 0,
      'control_users_pane' => 0,
      'user_relationships_content' => 0,
      'user_relationships_browser' => 0,
      'admin_content' => 0,
      'admin_users' => 0,
      'frontpage_news' => 0,
      'bo_wiki_allposts' => 0,
      'bo_wiki_bulk_operations' => 0,
      'bo_wiki_relatedgroups' => 0,
      'rsvp_calendar' => 0,
      'rsvp_invitations' => 0,
    ),
    'super_default' => 1,
    'token_enabled' => 1,
    'super_default_widget' => array(
      'vname' => 'fg_projects|default',
      'vargs' => '[term]',
    ),
    'reference_preview' => '',
    'widget' => array(
      'force_default' => 0,
      'label' => 'Projekte',
      'weight' => '7',
      'description' => '',
      'type' => 'viewfield_select',
      'module' => 'viewfield',
    ),
  );

  // Exported field: field_backref_2bd4ca9f584265ff02
  $fields['organisation-field_backref_2bd4ca9f584265ff02'] = array(
    'field_name' => 'field_backref_2bd4ca9f584265ff02',
    'type_name' => 'organisation',
    'display_settings' => array(
      'weight' => '6',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'noderelationships_backref',
    'required' => '0',
    'multiple' => '0',
    'module' => 'noderelationships',
    'active' => '1',
    'referrer_type' => 'project',
    'referrer_field' => 'field_ref_valuepartner',
    'reference_preview' => '',
    'widget' => array(
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Value Partner in folgenden Projekten',
      'weight' => '6',
      'description' => '',
      'type' => 'noderelationships_backref',
      'module' => 'noderelationships',
    ),
  );

  // Exported field: field_backref_9fcdb0e157cbfdbc7e
  $fields['organisation-field_backref_9fcdb0e157cbfdbc7e'] = array(
    'field_name' => 'field_backref_9fcdb0e157cbfdbc7e',
    'type_name' => 'organisation',
    'display_settings' => array(
      'weight' => '5',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'noderelationships_backref',
    'required' => '0',
    'multiple' => '0',
    'module' => 'noderelationships',
    'active' => '1',
    'referrer_type' => 'project',
    'referrer_field' => 'field_umsetzungspartner',
    'reference_preview' => '',
    'widget' => array(
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Umsetzungspartner in folgenden Projekten',
      'weight' => '5',
      'description' => '',
      'type' => 'noderelationships_backref',
      'module' => 'noderelationships',
    ),
  );

  // Exported field: field_backref_b6fc31c6554f41e2d5
  $fields['organisation-field_backref_b6fc31c6554f41e2d5'] = array(
    'field_name' => 'field_backref_b6fc31c6554f41e2d5',
    'type_name' => 'organisation',
    'display_settings' => array(
      'weight' => '8',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'noderelationships_backref',
    'required' => '0',
    'multiple' => '0',
    'module' => 'noderelationships',
    'active' => '1',
    'referrer_type' => 'profile',
    'referrer_field' => 'field_profile_organization',
    'reference_preview' => '',
    'widget' => array(
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Mitglieder dieser Organisation',
      'weight' => '8',
      'description' => '',
      'type' => 'noderelationships_backref',
      'module' => 'noderelationships',
    ),
  );

  // Exported field: field_backref_e81e2d94d76f6572d4
  $fields['organisation-field_backref_e81e2d94d76f6572d4'] = array(
    'field_name' => 'field_backref_e81e2d94d76f6572d4',
    'type_name' => 'organisation',
    'display_settings' => array(
      'weight' => '7',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'noderelationships_backref',
    'required' => '0',
    'multiple' => '0',
    'module' => 'noderelationships',
    'active' => '1',
    'referrer_type' => 'project',
    'referrer_field' => 'field_ref_projectinstitutions',
    'reference_preview' => '',
    'widget' => array(
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Verbundprojektpartner in folgenden Projekten',
      'weight' => '7',
      'description' => '',
      'type' => 'noderelationships_backref',
      'module' => 'noderelationships',
    ),
  );

  // Exported field: field_companylogo
  $fields['organisation-field_companylogo'] = array(
    'field_name' => 'field_companylogo',
    'type_name' => 'organisation',
    'display_settings' => array(
      'weight' => '2',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'projectlogo-m_linked',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'projectlogo_2c_landscape_default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'projectlogo-m_default',
        'exclude' => 0,
      ),
      'teaser_noderef' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'reference_preview' => '',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '0',
      'min_resolution' => '0',
      'alt' => '',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'logo_light_0.png',
        'filepath' => 'sites/dlr.wi1projects.com/files/imagefield_default_images/logo_light_0_1.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/dlr.wi1projects.com/files/imagefield_default_images/logo_light_0_1.png',
        'filesize' => 8877,
        'uid' => '8',
        'status' => 1,
        'timestamp' => 1342159194,
        'fid' => '111',
      ),
      'use_default_image' => 1,
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'label' => 'Logo',
      'weight' => '2',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_location
  $fields['organisation-field_location'] = array(
    'field_name' => 'field_location',
    'type_name' => 'organisation',
    'display_settings' => array(
      'weight' => '3',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'all',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'location',
    'required' => '1',
    'multiple' => '0',
    'module' => 'location_cck',
    'active' => '1',
    'location_settings' => array(
      'form' => array(
        'fields' => array(
          'name' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '2',
          ),
          'street' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '4',
          ),
          'additional' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '6',
          ),
          'city' => array(
            'collect' => '2',
            'default' => '',
            'weight' => '8',
          ),
          'province' => array(
            'collect' => '0',
            'default' => '',
            'weight' => '10',
          ),
          'postal_code' => array(
            'collect' => '1',
            'default' => '',
            'weight' => '12',
          ),
          'country' => array(
            'collect' => '1',
            'default' => 'de',
            'weight' => '14',
          ),
          'locpick' => array(
            'collect' => '0',
            'weight' => '20',
          ),
        ),
      ),
      'display' => array(
        'hide' => array(
          'province' => 'province',
          'locpick' => 'locpick',
          'province_name' => 'province_name',
          'country_name' => 'country_name',
          'map_link' => 'map_link',
          'coords' => 'coords',
          'name' => 0,
          'street' => 0,
          'additional' => 0,
          'city' => 0,
          'postal_code' => 0,
          'country' => 0,
        ),
      ),
    ),
    'gmap_macro' => '[gmap ]',
    'gmap_marker' => 'purple',
    'reference_preview' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'name' => '',
          'street' => '',
          'additional' => '',
          'country' => 'de',
          'locpick' => array(
            'user_latitude' => '',
            'user_longitude' => '',
          ),
          'cck_preview_in_progress' => TRUE,
          'location_settings' => array(
            'form' => array(
              'fields' => array(
                'lid' => array(
                  'default' => FALSE,
                ),
                'name' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 2,
                ),
                'street' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 4,
                ),
                'additional' => array(
                  'default' => '',
                  'collect' => 1,
                  'weight' => 6,
                ),
                'city' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 8,
                ),
                'province' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 10,
                ),
                'postal_code' => array(
                  'default' => '',
                  'collect' => 0,
                  'weight' => 12,
                ),
                'country' => array(
                  'default' => 'de',
                  'collect' => 1,
                  'weight' => 14,
                ),
                'locpick' => array(
                  'default' => FALSE,
                  'collect' => 1,
                  'weight' => 20,
                  'nodiff' => TRUE,
                ),
                'latitude' => array(
                  'default' => 0,
                ),
                'longitude' => array(
                  'default' => 0,
                ),
                'source' => array(
                  'default' => 0,
                ),
                'is_primary' => array(
                  'default' => 0,
                ),
                'delete_location' => array(
                  'default' => FALSE,
                  'nodiff' => TRUE,
                ),
              ),
            ),
          ),
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Adresse',
      'weight' => '3',
      'description' => 'Fügen Sie hier die Adressdaten Ihrer Organisation ein. Damit Ihre Organisation auf der Forschungslandkarte erscheint muss mindestens die Stadt angegeben sein.',
      'type' => 'location',
      'module' => 'location_cck',
    ),
  );

  // Exported field: field_organisation_url
  $fields['organisation-field_organisation_url'] = array(
    'field_name' => 'field_organisation_url',
    'type_name' => 'organisation',
    'display_settings' => array(
      'weight' => '4',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'reference_preview' => '',
    'widget' => array(
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Webseite der Organisation',
      'weight' => '4',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_ansprechpartner_nonref
  $fields['project-field_ansprechpartner_nonref'] = array(
    'field_name' => 'field_ansprechpartner_nonref',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '26',
      'parent' => 'group_projectcontact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '60',
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_ansprechpartner_nonref][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Ansprechpartner/in (ohne Benutzerkonto)',
      'weight' => '26',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_berufsgruppen
  $fields['project-field_berufsgruppen'] = array(
    'field_name' => 'field_berufsgruppen',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '40',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'link',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'custom_formatters_content_taxonmy_field_multiple',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '4',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'reference_preview' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => NULL,
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Berufsgruppen',
      'weight' => '40',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_branchen
  $fields['project-field_branchen'] = array(
    'field_name' => 'field_branchen',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '39',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'link',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'custom_formatters_content_taxonmy_field_multiple',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '5',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'reference_preview' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => NULL,
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Branchen',
      'weight' => '39',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_faxnumber
  $fields['project-field_faxnumber'] = array(
    'field_name' => 'field_faxnumber',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '28',
      'parent' => 'group_projectcontact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_faxnumber][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Faxnummer Ansprechpartner',
      'weight' => '28',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_project_fg_membership
  $fields['project-field_project_fg_membership'] = array(
    'field_name' => 'field_project_fg_membership',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '37',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'focusgroup' => 'focusgroup',
      'blog' => 0,
      'book' => 0,
      'event' => 0,
      'exhibit' => 0,
      'group' => 0,
      'imageandhover' => 0,
      'organisation' => 0,
      'panel' => 0,
      'profile' => 0,
      'project' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'reference_preview' => array(
      'enable' => 1,
      'type' => 'node-reference_preview',
      'links' => 1,
    ),
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'nid' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Mitglied in Fokusgruppe',
      'weight' => '37',
      'description' => '',
      'type' => 'nodereference_select',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_project_rssfeed
  $fields['project-field_project_rssfeed'] = array(
    'field_name' => 'field_project_rssfeed',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '31',
      'parent' => 'group_projectcontact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'none',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 0,
    'reference_preview' => '',
    'widget' => array(
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'RSSFeed',
      'weight' => '31',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_projectaccount
  $fields['project-field_projectaccount'] = array(
    'field_name' => 'field_projectaccount',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '25',
      'parent' => 'group_projectcontact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '0',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 2,
      '3' => 3,
      '6' => 6,
      '4' => 4,
      '5' => 5,
    ),
    'referenceable_status' => '',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'reference_preview' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 1,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_projectaccount][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'label' => 'Ansprechpartner/-in',
      'weight' => '25',
      'description' => '',
      'type' => 'realname_userreference_auto',
      'module' => 'realname_userreference',
    ),
  );

  // Exported field: field_projectapproach
  $fields['project-field_projectapproach'] = array(
    'field_name' => 'field_projectapproach',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '44',
      'parent' => 'group_projectfocus',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain_linebreaks',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '6',
          '_error_element' => 'default_value_widget][field_projectapproach][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Vorgehen',
      'weight' => '44',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_projectduration
  $fields['project-field_projectduration'] = array(
    'field_name' => 'field_projectduration',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '36',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'date',
    'required' => '0',
    'multiple' => '0',
    'module' => 'date',
    'active' => '1',
    'granularity' => array(
      'year' => 'year',
      'month' => 'month',
    ),
    'timezone_db' => '',
    'tz_handling' => 'none',
    'todate' => 'optional',
    'repeat' => 0,
    'repeat_collapsed' => '',
    'default_format' => 'long',
    'reference_preview' => '',
    'widget' => array(
      'default_value' => 'blank',
      'default_value_code' => '',
      'default_value2' => 'same',
      'default_value_code2' => '',
      'input_format' => 'd.m.Y',
      'input_format_custom' => '',
      'increment' => '1',
      'text_parts' => array(),
      'year_range' => '-3:+3',
      'label_position' => 'above',
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'label' => 'Projektlaufzeit',
      'weight' => '36',
      'description' => '',
      'type' => 'date_popup',
      'module' => 'date',
    ),
  );

  // Exported field: field_projectemail
  $fields['project-field_projectemail'] = array(
    'field_name' => 'field_projectemail',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '29',
      'parent' => 'group_projectcontact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'spamspan',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'spamspan',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'hidden',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'email',
    'required' => '0',
    'multiple' => '0',
    'module' => 'email',
    'active' => '1',
    'reference_preview' => '',
    'widget' => array(
      'size' => '50',
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => array(
        '0' => array(
          'email' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Email Kontakt',
      'weight' => '29',
      'description' => '',
      'type' => 'email_textfield',
      'module' => 'email',
    ),
  );

  // Exported field: field_projectfkz
  $fields['project-field_projectfkz'] = array(
    'field_name' => 'field_projectfkz',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '35',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_projectfkz][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Förderkennzeichen (FKZ)',
      'weight' => '35',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_projecthomepage
  $fields['project-field_projecthomepage'] = array(
    'field_name' => 'field_projecthomepage',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '30',
      'parent' => 'group_projectcontact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'link',
    'required' => '0',
    'multiple' => '0',
    'module' => 'link',
    'active' => '1',
    'attributes' => array(
      'target' => 'default',
      'rel' => '',
      'class' => '',
      'title' => '',
    ),
    'display' => array(
      'url_cutoff' => '80',
    ),
    'url' => 0,
    'title' => 'optional',
    'title_value' => '',
    'enable_tokens' => 0,
    'validate_url' => 1,
    'reference_preview' => '',
    'widget' => array(
      'default_value' => array(
        '0' => array(
          'title' => '',
          'url' => '',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Webseite',
      'weight' => '30',
      'description' => '',
      'type' => 'link',
      'module' => 'link',
    ),
  );

  // Exported field: field_projectlogo
  $fields['project-field_projectlogo'] = array(
    'field_name' => 'field_projectlogo',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '41',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'projectlogo_9c_default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'projectlogo_9c_default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'image_plain',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'reference_preview' => '',
    'widget' => array(
      'file_extensions' => 'png gif jpg jpeg',
      'file_path' => 'logos',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'max_resolution' => '550x150',
      'min_resolution' => '0',
      'alt' => 'Projektlogo',
      'custom_alt' => 0,
      'title' => '',
      'custom_title' => 0,
      'title_type' => 'textfield',
      'default_image' => array(
        'filename' => 'logo_light.png',
        'filepath' => 'sites/dlr.wi1projects.com/files/imagefield_default_images/logo_light_0.png',
        'filemime' => 'image/png',
        'source' => 'default_image_upload',
        'destination' => 'sites/dlr.wi1projects.com/files/imagefield_default_images/logo_light_0.png',
        'filesize' => 14445,
        'uid' => '1',
        'status' => 1,
        'timestamp' => 1340008888,
        'fid' => '47',
      ),
      'use_default_image' => 1,
      'label' => 'Projektlogo',
      'weight' => '41',
      'description' => '',
      'type' => 'imagefield_widget',
      'module' => 'imagefield',
    ),
  );

  // Exported field: field_projectmembers
  $fields['project-field_projectmembers'] = array(
    'field_name' => 'field_projectmembers',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '44',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 1,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'userreference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'userreference',
    'active' => '1',
    'referenceable_roles' => array(
      '2' => 2,
      '6' => 6,
      '4' => 4,
      '5' => 5,
      '3' => 0,
    ),
    'referenceable_status' => '1',
    'advanced_view' => '--',
    'advanced_view_args' => '',
    'reference_preview' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'reverse_link' => 0,
      'default_value' => array(
        '0' => array(
          'uid' => NULL,
          '_error_element' => 'default_value_widget][field_projectmembers][0][uid][uid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Personen im Projekt',
      'weight' => '44',
      'description' => '',
      'type' => 'realname_userreference_auto',
      'module' => 'realname_userreference',
    ),
  );

  // Exported field: field_projecttechniques
  $fields['project-field_projecttechniques'] = array(
    'field_name' => 'field_projecttechniques',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '43',
      'parent' => 'group_methods',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain_linebreaks',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '6',
          '_error_element' => 'default_value_widget][field_projecttechniques][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Methoden',
      'weight' => '43',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_projecttheories
  $fields['project-field_projecttheories'] = array(
    'field_name' => 'field_projecttheories',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '40',
      'parent' => 'group_grouptheories',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain_linebreaks',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => '5',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '6',
          '_error_element' => 'default_value_widget][field_projecttheories][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Theorien / theoretische Grundlagen',
      'weight' => '40',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_projektgoals
  $fields['project-field_projektgoals'] = array(
    'field_name' => 'field_projektgoals',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '8',
      'parent' => 'group_projektziele',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain_linebreaks',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => '10',
      'size' => 60,
      'default_value' => array(
        '0' => array(
          'value' => '',
          'format' => '6',
          '_error_element' => 'default_value_widget][field_projektgoals][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'label' => 'Projektziele / Angestrebtes Ergebnis',
      'weight' => '8',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_ref_projectinstitutions
  $fields['project-field_ref_projectinstitutions'] = array(
    'field_name' => 'field_ref_projectinstitutions',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '16',
      'parent' => 'group_beteiligteinstitutionen',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'views_dlr_groups_org_ref_formatter_reference_field_1',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'views_dlr_groups_org_ref_formatter_reference_field_1',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'organisation' => 'organisation',
      'blog' => 0,
      'book' => 0,
      'event' => 0,
      'exhibit' => 0,
      'focusgroup' => 0,
      'group' => 0,
      'imageandhover' => 0,
      'panel' => 0,
      'profile' => 0,
      'project' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => 'dlr_groups_noderefprev_org',
    'advanced_view_args' => '',
    'reference_preview' => array(
      'enable' => 1,
      'type' => 'node-reference_preview',
      'links' => 1,
    ),
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_ref_projectinstitutions][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Verbundprojektpartner',
      'weight' => '16',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_ref_valuepartner
  $fields['project-field_ref_valuepartner'] = array(
    'field_name' => 'field_ref_valuepartner',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '17',
      'parent' => 'group_beteiligteinstitutionen',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'views_dlr_groups_org_ref_formatter_reference_field_1',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'views_dlr_groups_org_ref_formatter_reference_field_1',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'organisation' => 'organisation',
      'blog' => 0,
      'book' => 0,
      'event' => 0,
      'exhibit' => 0,
      'focusgroup' => 0,
      'group' => 0,
      'imageandhover' => 0,
      'panel' => 0,
      'profile' => 0,
      'project' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => 'dlr_groups_noderefprev_org',
    'advanced_view_args' => '',
    'reference_preview' => array(
      'enable' => 1,
      'type' => 'node-reference_preview',
      'links' => 1,
    ),
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_ref_valuepartner][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Value Partner',
      'weight' => '17',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Exported field: field_researchquestions
  $fields['project-field_researchquestions'] = array(
    'field_name' => 'field_researchquestions',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '41',
      'parent' => 'group_researchquestions',
      'label' => array(
        'format' => 'hidden',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'plain_linebreaks',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => '5',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_researchquestions][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Forschungsfragen',
      'weight' => '41',
      'description' => '',
      'type' => 'text_textarea',
      'module' => 'text',
    ),
  );

  // Exported field: field_steckbrief
  $fields['project-field_steckbrief'] = array(
    'field_name' => 'field_steckbrief',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '43',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_plain' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'email_html' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'reference_preview' => '',
    'widget' => array(
      'file_extensions' => 'txt doc doc docx pdf',
      'file_path' => '',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '20M',
      'max_filesize_per_node' => '',
      'label' => 'Steckbrief aus Konferenzband',
      'weight' => '43',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_synopsis
  $fields['project-field_synopsis'] = array(
    'field_name' => 'field_synopsis',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '42',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'filefield',
    'required' => '0',
    'multiple' => '0',
    'module' => 'filefield',
    'active' => '1',
    'list_field' => '0',
    'list_default' => 1,
    'description_field' => '0',
    'reference_preview' => '',
    'widget' => array(
      'file_extensions' => 'pdf',
      'file_path' => 'synopses',
      'progress_indicator' => 'bar',
      'max_filesize_per_file' => '',
      'max_filesize_per_node' => '',
      'label' => 'Projektexposé',
      'weight' => '42',
      'description' => '',
      'type' => 'filefield_widget',
      'module' => 'filefield',
    ),
  );

  // Exported field: field_tags
  $fields['project-field_tags'] = array(
    'field_name' => 'field_tags',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '38',
      'parent' => 'group_projectinfo',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'link',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'custom_formatters_content_taxonmy_field_multiple',
        'exclude' => 0,
      ),
      'reference_preview' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'content_taxonomy',
    'required' => '0',
    'multiple' => '1',
    'module' => 'content_taxonomy',
    'active' => '1',
    'save_term_node' => 1,
    'vid' => '2',
    'parent' => '0',
    'parent_php_code' => '',
    'depth' => '',
    'reference_preview' => '',
    'widget' => array(
      'new_terms' => 'insert',
      'extra_parent' => '0',
      'maxlength' => '255',
      'active_tags' => NULL,
      'wysiwyg_fields_status' => 0,
      'wysiwyg_fields_icon' => '6f7621a02161e347e66d99d8ace540a3',
      'wysiwyg_fields_formatters' => array(),
      'wysiwyg_fields_hide' => 1,
      'wysiwyg_fields_delete' => 1,
      'default_value' => NULL,
      'default_value_php' => NULL,
      'label' => 'Schlagwörter',
      'weight' => '38',
      'description' => '',
      'type' => 'content_taxonomy_autocomplete',
      'module' => 'content_taxonomy_autocomplete',
    ),
  );

  // Exported field: field_telephonenumber
  $fields['project-field_telephonenumber'] = array(
    'field_name' => 'field_telephonenumber',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '27',
      'parent' => 'group_projectcontact',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'text',
    'required' => '0',
    'multiple' => '0',
    'module' => 'text',
    'active' => '1',
    'text_processing' => '0',
    'max_length' => '',
    'allowed_values' => '',
    'allowed_values_php' => '',
    'reference_preview' => '',
    'widget' => array(
      'rows' => 5,
      'size' => '20',
      'default_value' => array(
        '0' => array(
          'value' => '',
          '_error_element' => 'default_value_widget][field_telephonenumber][0][value',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Telefonnummer Ansprechpartner',
      'weight' => '27',
      'description' => '',
      'type' => 'text_textfield',
      'module' => 'text',
    ),
  );

  // Exported field: field_umsetzungspartner
  $fields['project-field_umsetzungspartner'] = array(
    'field_name' => 'field_umsetzungspartner',
    'type_name' => 'project',
    'display_settings' => array(
      'weight' => '13',
      'parent' => '',
      'label' => array(
        'format' => 'above',
      ),
      'teaser' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'full' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '5' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '4' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '2' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      '3' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
      'token' => array(
        'format' => 'default',
        'exclude' => 0,
      ),
    ),
    'widget_active' => '1',
    'type' => 'nodereference',
    'required' => '0',
    'multiple' => '1',
    'module' => 'nodereference',
    'active' => '1',
    'referenceable_types' => array(
      'organisation' => 'organisation',
      'blog' => 0,
      'book' => 0,
      'event' => 0,
      'focusgroup' => 0,
      'group' => 0,
      'simplenews' => 0,
      'profile' => 0,
      'project' => 0,
      'feed_ical_item' => 0,
      'feed_ical' => 0,
    ),
    'advanced_view' => 'dlr_groups_noderefprev_org',
    'advanced_view_args' => '',
    'reference_preview' => '',
    'widget' => array(
      'autocomplete_match' => 'contains',
      'size' => '60',
      'default_value' => array(
        '0' => array(
          'nid' => NULL,
          '_error_element' => 'default_value_widget][field_umsetzungspartner][0][nid][nid',
        ),
      ),
      'default_value_php' => NULL,
      'label' => 'Umsetzungspartner',
      'weight' => '13',
      'description' => '',
      'type' => 'nodereference_autocomplete',
      'module' => 'nodereference',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Adresse');
  t('Ansprechpartner/-in');
  t('Ansprechpartner/in (ohne Benutzerkonto)');
  t('Berufsgruppen');
  t('Betreuer beim Metaprojekt „DemoScreen“');
  t('Bild');
  t('Branchen');
  t('Email');
  t('Email Kontakt');
  t('Farbcode');
  t('Faxnummer Ansprechpartner');
  t('Fokusgruppensprecher');
  t('Fokusgruppensprecher (ohne Benutzeraccount)');
  t('Forschungsfragen');
  t('Förderkennzeichen (FKZ)');
  t('Hintergrundbild für die Startseite');
  t('Kürzel');
  t('Logo');
  t('Methoden');
  t('Mitglied in Fokusgruppe');
  t('Mitglieder dieser Organisation');
  t('Name');
  t('Personen im Projekt');
  t('Projekte');
  t('Projektexposé');
  t('Projektlaufzeit');
  t('Projektlogo');
  t('Projektziele / Angestrebtes Ergebnis');
  t('RSSFeed');
  t('Schlagwörter');
  t('Steckbrief aus Konferenzband');
  t('Telefon');
  t('Telefonnummer Ansprechpartner');
  t('Theorien / theoretische Grundlagen');
  t('Umsetzungspartner');
  t('Umsetzungspartner in folgenden Projekten');
  t('Value Partner');
  t('Value Partner in folgenden Projekten');
  t('Verbundprojektpartner');
  t('Verbundprojektpartner in folgenden Projekten');
  t('Vorgehen');
  t('Webseite');
  t('Webseite der Organisation');

  return $fields;
}
