<?php

/**
 * Implementation of hook_strongarm().
 */
function dlr_groups_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'buildmodes_modes';
  $strongarm->value = array(
    'reference_preview' => array(
      'title' => 'Reference Preview',
      'views style' => TRUE,
    ),
  );
  $export['buildmodes_modes'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_focusgroup';
  $strongarm->value = '0';
  $export['comment_anonymous_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_organisation';
  $strongarm->value = '0';
  $export['comment_anonymous_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_project';
  $strongarm->value = '0';
  $export['comment_anonymous_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_focusgroup';
  $strongarm->value = '3';
  $export['comment_controls_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_organisation';
  $strongarm->value = '3';
  $export['comment_controls_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_controls_project';
  $strongarm->value = '3';
  $export['comment_controls_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_focusgroup';
  $strongarm->value = '4';
  $export['comment_default_mode_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_organisation';
  $strongarm->value = '4';
  $export['comment_default_mode_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_project';
  $strongarm->value = '4';
  $export['comment_default_mode_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_focusgroup';
  $strongarm->value = '1';
  $export['comment_default_order_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_organisation';
  $strongarm->value = '1';
  $export['comment_default_order_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_order_project';
  $strongarm->value = '1';
  $export['comment_default_order_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_focusgroup';
  $strongarm->value = '50';
  $export['comment_default_per_page_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_organisation';
  $strongarm->value = '50';
  $export['comment_default_per_page_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_project';
  $strongarm->value = '50';
  $export['comment_default_per_page_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_focusgroup';
  $strongarm->value = '2';
  $export['comment_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_focusgroup';
  $strongarm->value = '0';
  $export['comment_form_location_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_organisation';
  $strongarm->value = '0';
  $export['comment_form_location_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_project';
  $strongarm->value = '0';
  $export['comment_form_location_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_organisation';
  $strongarm->value = '2';
  $export['comment_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_focusgroup';
  $strongarm->value = '1';
  $export['comment_preview_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_organisation';
  $strongarm->value = '1';
  $export['comment_preview_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_project';
  $strongarm->value = '1';
  $export['comment_preview_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_project';
  $strongarm->value = '0';
  $export['comment_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_focusgroup';
  $strongarm->value = '1';
  $export['comment_subject_field_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_organisation';
  $strongarm->value = '1';
  $export['comment_subject_field_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_project';
  $strongarm->value = '0';
  $export['comment_subject_field_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_focusgroup';
  $strongarm->value = '0';
  $export['comment_upload_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_focusgroup';
  $strongarm->value = 'none';
  $export['comment_upload_images_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_organisation';
  $strongarm->value = 'none';
  $export['comment_upload_images_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_images_project';
  $strongarm->value = 'none';
  $export['comment_upload_images_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_organisation';
  $strongarm->value = '0';
  $export['comment_upload_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_upload_project';
  $strongarm->value = '0';
  $export['comment_upload_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_focusgroup';
  $strongarm->value = array(
    'og_user_roles_default_role' => '11',
    'title' => '-2',
    'body_field' => '0',
    'revision_information' => '20',
    'author' => '22',
    'options' => '21',
    'comment_settings' => '25',
    'menu' => '24',
    'taxonomy' => '-3',
    'book' => '26',
    'path' => '27',
    'attachments' => '13',
    'og_description' => '-1',
    'og_selective' => '12',
    'og_register' => '10',
    'og_directory' => '14',
    'domain' => '23',
    'locations' => '16',
    'nodehierarchy' => '17',
    'nodehierarchy_children' => '18',
    'nodehierarchy_children_links' => '19',
    'og_private' => '15',
  );
  $export['content_extra_weights_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_organisation';
  $strongarm->value = array(
    'title' => '1',
    'body_field' => '0',
    'revision_information' => '13',
    'author' => '12',
    'options' => '14',
    'comment_settings' => '15',
    'menu' => '10',
    'book' => '9',
    'path' => '16',
    'domain' => '11',
  );
  $export['content_extra_weights_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_project';
  $strongarm->value = array(
    'og_user_roles_default_role' => '24',
    'title' => '3',
    'revision_information' => '19',
    'author' => '14',
    'options' => '20',
    'comment_settings' => '22',
    'menu' => '21',
    'taxonomy' => '4',
    'book' => '27',
    'path' => '28',
    'attachments' => '23',
    'og_description' => '2',
    'og_selective' => '15',
    'og_register' => '18',
    'og_directory' => '17',
    'domain' => '25',
    'nodehierarchy' => '26',
    'og_private' => '16',
  );
  $export['content_extra_weights_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_organisation';
  $strongarm->value = 0;
  $export['content_profile_use_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_profile_use_project';
  $strongarm->value = 0;
  $export['content_profile_use_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'form_build_id_focusgroup';
  $strongarm->value = 'form-f52f2cea26524b1b1e5b1df903968b38';
  $export['form_build_id_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_focusgroup';
  $strongarm->value = '0';
  $export['language_content_type_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_organisation';
  $strongarm->value = '0';
  $export['language_content_type_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_content_type_project';
  $strongarm->value = '0';
  $export['language_content_type_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nh_allowchild_focusgroup';
  $strongarm->value = array(
    0 => 'project',
  );
  $export['nh_allowchild_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nh_allowchild_project';
  $strongarm->value = array();
  $export['nh_allowchild_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nh_createmenu_focusgroup';
  $strongarm->value = 'optional_no';
  $export['nh_createmenu_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nh_createmenu_project';
  $strongarm->value = 'never';
  $export['nh_createmenu_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nh_defaultparent_focusgroup';
  $strongarm->value = '';
  $export['nh_defaultparent_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nh_defaultparent_project';
  $strongarm->value = '';
  $export['nh_defaultparent_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nh_multiple_focusgroup';
  $strongarm->value = 0;
  $export['nh_multiple_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nh_multiple_project';
  $strongarm->value = 0;
  $export['nh_multiple_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_depth_2';
  $strongarm->value = '1';
  $export['nice_menus_depth_2'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_menu_2';
  $strongarm->value = 'menu-projekte:0';
  $export['nice_menus_menu_2'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_name_2';
  $strongarm->value = 'Nice menu 2';
  $export['nice_menus_name_2'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nice_menus_type_2';
  $strongarm->value = 'down';
  $export['nice_menus_type_2'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_focusgroup_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Name',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Menüeinstellungen',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '15',
      'has_required' => FALSE,
      'title' => 'Versionsinformation',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '18',
      'has_required' => FALSE,
      'title' => 'Einstellungen für Kommentare',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '17',
      'has_required' => FALSE,
      'title' => 'Benutzerdefinierte URL',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '16',
      'has_required' => FALSE,
      'title' => 'Veröffentlichungseinstellungen',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '13',
      'has_required' => FALSE,
      'title' => 'Informationen zum Autor',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'notifications' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Benachrichtigungen',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'og_user_roles_default_role' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Default role for new members',
      'hidden' => 1,
    ),
    'book' => array(
      'region' => 'right',
      'weight' => '14',
      'has_required' => FALSE,
      'title' => 'Buch-Hierarchie',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'taxonomy' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Eigenschaften',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'attachments' => array(
      'region' => 'main',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Dateianhänge',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'field_projectlogo' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Projektlogo',
      'hidden' => 0,
    ),
    'field_fgident' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => TRUE,
      'title' => 'Kürzel',
    ),
    'field_contactdlrpicture' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Bild Betreuer DLR',
      'hidden' => 0,
    ),
    'field_contactdlr' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Betreuung DLR',
      'hidden' => 0,
    ),
    'field_contactbalance' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Betreuung DemoScreen',
      'hidden' => 0,
    ),
    'field_projects' => array(
      'region' => 'main',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Projekte',
      'hidden' => 1,
    ),
    'field_frontpageimage' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Hintergrundbild für die Startseite',
      'hidden' => 0,
    ),
    'field_color_hex' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Farbcode',
      'hidden' => 1,
    ),
    'field_focusgroup_speaker' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Fokusgruppensprecher',
      'hidden' => 0,
    ),
    'og_selective' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => TRUE,
      'title' => 'Anträge auf Mitgliedschaft',
    ),
    'og_register' => array(
      'region' => 'right',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Registrierungsformular',
      'hidden' => 1,
    ),
    'og_directory' => array(
      'region' => 'right',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Im Gruppenverzeichnis anzeigen',
      'hidden' => 1,
    ),
    'themes' => array(
      'region' => 'right',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Theme configuration',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'domain' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => TRUE,
      'title' => 'Domain access options',
      'collapsed' => 1,
    ),
    'delete' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'locations' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Ort',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'nodehierarchy' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Node Hierarchy',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'og_private' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Private Gruppe',
      'hidden' => 1,
    ),
  );
  $export['nodeformscols_field_placements_focusgroup_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_organisation_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Name',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Menüeinstellungen',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Versionsinformation',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Einstellungen für Kommentare',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Veröffentlichungseinstellungen',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Informationen zum Autor',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'right',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'notifications' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Benachrichtigungen',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'book' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Buch-Hierarchie',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'field_companylogo' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => 'Logo der Organisation',
      'hidden' => 0,
    ),
    'field_org_project' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Mitgliedschaft in Projekten',
      'hidden' => 0,
    ),
    'field_org_project_vp' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Beteiligung als Umsetungspartner',
      'hidden' => 0,
    ),
    'field_location' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => TRUE,
      'title' => 'Adresse',
    ),
    'domain' => array(
      'region' => 'right',
      'weight' => '5',
      'has_required' => TRUE,
      'title' => 'Domain access options',
      'collapsed' => 1,
    ),
    'delete' => array(
      'region' => 'right',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'attachments' => array(
      'region' => 'right',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 1,
    ),
  );
  $export['nodeformscols_field_placements_organisation_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'nodeformscols_field_placements_project_default';
  $strongarm->value = array(
    'title' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Kurztitel',
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '-2',
      'has_required' => FALSE,
      'title' => 'Menüeinstellungen',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Versionsinformation',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '30',
      'has_required' => FALSE,
      'title' => 'Einstellungen für Kommentare',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '0.033',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'hidden' => 0,
      'collapsed' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '25',
      'has_required' => FALSE,
      'title' => 'Veröffentlichungseinstellungen',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Informationen zum Autor',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'buttons' => array(
      'region' => 'main',
      'weight' => '23',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'notifications' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Benachrichtigungen',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'og_user_roles_default_role' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Default role for new members',
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'main',
      'weight' => '14',
      'has_required' => FALSE,
      'title' => 'Buch-Hierarchie',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'attachments' => array(
      'region' => 'main',
      'weight' => '20',
      'has_required' => FALSE,
      'title' => 'Dateianhänge',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'og_description' => array(
      'region' => 'main',
      'weight' => '7',
      'has_required' => TRUE,
      'title' => 'Name',
    ),
    'og_selective' => array(
      'region' => 'main',
      'weight' => '13',
      'has_required' => TRUE,
      'title' => 'Anträge auf Mitgliedschaft',
    ),
    'og_register' => array(
      'region' => 'main',
      'weight' => '17',
      'has_required' => FALSE,
      'title' => 'Registrierungsformular',
      'hidden' => 0,
    ),
    'og_directory' => array(
      'region' => 'main',
      'weight' => '16',
      'has_required' => FALSE,
      'title' => 'Im Gruppenverzeichnis anzeigen',
      'hidden' => 0,
    ),
    'themes' => array(
      'region' => 'main',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Theme configuration',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'domain' => array(
      'region' => 'footer',
      'weight' => '19',
      'has_required' => TRUE,
      'title' => 'Domain access options',
      'collapsed' => 1,
    ),
    'delete' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'nodehierarchy' => array(
      'region' => 'main',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Node Hierarchy',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'og_private' => array(
      'region' => 'main',
      'weight' => '15',
      'has_required' => FALSE,
      'title' => 'Private Gruppe',
      'hidden' => 0,
    ),
    'group_projectinfo' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Projektinformationen',
      'hidden' => 0,
    ),
    'group_projectfocus' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Ausführliche Projektinformationen',
      'hidden' => 0,
    ),
    'group_projectcontact' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Kontakt',
      'hidden' => 0,
    ),
    'taxonomy' => array(
      'region' => 'main',
      'weight' => '1',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'field_umsetzungspartner' => array(
      'region' => 'main',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Umsetzungspartner',
      'hidden' => 1,
    ),
    'group_beteiligteinstitutionen' => array(
      'region' => 'main',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Beteiligte Institutionen',
      'hidden' => 0,
    ),
    'group_internetpresence' => array(
      'region' => 'main',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Internetpräsenz',
      'hidden' => 0,
    ),
  );
  $export['nodeformscols_field_placements_project_default'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_focusgroup';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_organisation';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_project';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_focusgroup';
  $strongarm->value = array(
    0 => 'thread',
    1 => 'nodetype',
    2 => 'author',
  );
  $export['notifications_content_type_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_organisation';
  $strongarm->value = array(
    0 => 'thread',
    1 => 'nodetype',
    2 => 'author',
  );
  $export['notifications_content_type_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_content_type_project';
  $strongarm->value = array(
    0 => 'thread',
    1 => 'nodetype',
    2 => 'author',
  );
  $export['notifications_content_type_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_team_type_focusgroup';
  $strongarm->value = array();
  $export['notifications_team_type_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'notifications_team_type_organisation';
  $strongarm->value = array();
  $export['notifications_team_type_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_focusgroup';
  $strongarm->value = 'group';
  $export['og_content_type_usage_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_organisation';
  $strongarm->value = 'omitted';
  $export['og_content_type_usage_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_content_type_usage_project';
  $strongarm->value = 'group';
  $export['og_content_type_usage_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_max_groups_focusgroup';
  $strongarm->value = '';
  $export['og_max_groups_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_max_groups_organisation';
  $strongarm->value = '';
  $export['og_max_groups_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_max_groups_project';
  $strongarm->value = '';
  $export['og_max_groups_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_default_admin_role';
  $strongarm->value = '4';
  $export['og_user_roles_default_admin_role'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_default_role';
  $strongarm->value = '5';
  $export['og_user_roles_default_role'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_roles_focusgroup';
  $strongarm->value = array(
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  $export['og_user_roles_roles_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'og_user_roles_roles_group';
  $strongarm->value = array(
    3 => 0,
    6 => 0,
    4 => 0,
    5 => 0,
  );
  $export['og_user_roles_roles_group'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'reference_preview';
  $strongarm->value = array(
    'field_ref_projectinstitutions' => 'node-teaser',
    'field_umsetzungspartner' => 'node-teaser',
    'field_ref_valuepartner' => 'node-teaser',
  );
  $export['reference_preview'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_focusgroup';
  $strongarm->value = 1;
  $export['show_preview_changes_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_organisation';
  $strongarm->value = 0;
  $export['show_preview_changes_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_project';
  $strongarm->value = 1;
  $export['show_preview_changes_project'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_focusgroup';
  $strongarm->value = '1';
  $export['upload_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_organisation';
  $strongarm->value = '0';
  $export['upload_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'upload_project';
  $strongarm->value = '1';
  $export['upload_project'] = $strongarm;

  return $export;
}
