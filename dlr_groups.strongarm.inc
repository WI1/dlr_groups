<?php

/**
 * Implementation of hook_strongarm().
 */
function dlr_groups_strongarm() {
  $export = array();

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_focusgroup';
  $strongarm->value = 0;
  $export['comment_anonymous_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_organisation';
  $strongarm->value = 0;
  $export['comment_anonymous_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_project';
  $strongarm->value = 0;
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
  $strongarm->value = '2';
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
  $strongarm->value = '1';
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
    'title' => '-3',
    'body_field' => '-2',
    'revision_information' => '5',
    'author' => '4',
    'options' => '6',
    'comment_settings' => '11',
    'menu' => '8',
    'book' => '12',
    'path' => '10',
    'attachments' => '9',
    'domain' => '7',
    'nodehierarchy' => '1',
    'nodehierarchy_children' => '2',
    'nodehierarchy_children_links' => '3',
  );
  $export['content_extra_weights_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_organisation';
  $strongarm->value = array(
    'title' => '34',
    'body_field' => '39',
    'revision_information' => '44',
    'author' => '43',
    'options' => '45',
    'comment_settings' => '46',
    'menu' => '40',
    'book' => '41',
    'path' => '47',
    'domain' => '42',
  );
  $export['content_extra_weights_organisation'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'content_extra_weights_project';
  $strongarm->value = array(
    'title' => '34',
    'body_field' => '40',
    'revision_information' => '42',
    'author' => '41',
    'options' => '43',
    'comment_settings' => '49',
    'menu' => '47',
    'book' => '53',
    'path' => '46',
    'attachments' => '50',
    'og_description' => '35',
    'og_selective' => '37',
    'og_register' => '39',
    'og_directory' => '36',
    'domain' => '51',
    'nodehierarchy' => '52',
    'og_private' => '38',
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
  $strongarm->value = 'optional_no';
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
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Versionsinformation',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Einstellungen für Kommentare',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Veröffentlichungseinstellungen',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Informationen zum Autor',
      'collapsed' => 0,
      'hidden' => 0,
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
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Benachrichtigungen',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'right',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Book outline',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'attachments' => array(
      'region' => 'right',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Dateianhänge',
      'collapsed' => 1,
      'hidden' => 1,
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
    'nodehierarchy' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Node Hierarchy',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'group_details' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => TRUE,
      'title' => 'Details',
      'collapsed' => 0,
    ),
    'field_projects' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Projekte',
      'hidden' => 1,
    ),
    'og_description' => array(
      'region' => 'main',
      'weight' => '-4',
      'has_required' => TRUE,
      'title' => 'Beschreibung',
    ),
    'og_selective' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Anträge auf Mitgliedschaft',
    ),
    'og_register' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Registrierungsformular',
      'hidden' => 0,
    ),
    'og_directory' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Im Gruppenverzeichnis anzeigen',
      'hidden' => 0,
    ),
    'themes' => array(
      'region' => 'right',
      'weight' => '13',
      'has_required' => FALSE,
      'title' => 'Theme configuration',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'og_private' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Nicht öffentliche Gruppe',
      'hidden' => 0,
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
      'weight' => '-5',
      'has_required' => TRUE,
      'title' => 'Title',
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Menüeinstellungen',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Versionsinformation',
      'collapsed' => 0,
      'hidden' => 0,
    ),
    'comment_settings' => array(
      'region' => 'right',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Einstellungen für Kommentare',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'path' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '10',
      'has_required' => FALSE,
      'title' => 'Veröffentlichungseinstellungen',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Informationen zum Autor',
      'collapsed' => 0,
      'hidden' => 0,
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
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Benachrichtigungen',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'right',
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'Book outline',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'field_companylogo' => array(
      'region' => 'main',
      'weight' => '35',
      'has_required' => FALSE,
      'title' => 'Logo',
      'hidden' => 0,
    ),
    'field_org_project' => array(
      'region' => 'main',
      'weight' => '36',
      'has_required' => FALSE,
      'title' => 'Mitgliedschaft in Projekten',
      'hidden' => 0,
    ),
    'field_org_project_vp' => array(
      'region' => 'main',
      'weight' => '37',
      'has_required' => FALSE,
      'title' => 'Beteiligung als Umsetungspartner',
      'hidden' => 0,
    ),
    'field_location' => array(
      'region' => 'main',
      'weight' => '38',
      'has_required' => FALSE,
      'title' => 'Ort',
      'hidden' => 0,
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
      'weight' => '9',
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
      'weight' => '1',
      'has_required' => TRUE,
      'title' => 'Vollständiger Projektname',
    ),
    'body_field' => array(
      'region' => 'main',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => NULL,
      'hidden' => 0,
    ),
    'menu' => array(
      'region' => 'right',
      'weight' => '7',
      'has_required' => FALSE,
      'title' => 'Menüeinstellungen',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'revision_information' => array(
      'region' => 'right',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Versionsinformation',
      'collapsed' => 0,
      'hidden' => 0,
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
      'weight' => '8',
      'has_required' => FALSE,
      'title' => 'URL path settings',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'options' => array(
      'region' => 'right',
      'weight' => '9',
      'has_required' => FALSE,
      'title' => 'Veröffentlichungseinstellungen',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'author' => array(
      'region' => 'right',
      'weight' => '2',
      'has_required' => FALSE,
      'title' => 'Informationen zum Autor',
      'collapsed' => 0,
      'hidden' => 0,
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
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Benachrichtigungen',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'book' => array(
      'region' => 'right',
      'weight' => '11',
      'has_required' => FALSE,
      'title' => 'Book outline',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'attachments' => array(
      'region' => 'right',
      'weight' => '13',
      'has_required' => FALSE,
      'title' => 'Dateianhänge',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'field_projectident' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Projektkürzel',
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
    'nodehierarchy' => array(
      'region' => 'right',
      'weight' => '6',
      'has_required' => FALSE,
      'title' => 'Node Hierarchy',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'group_projectinfo' => array(
      'region' => 'main',
      'weight' => '3',
      'has_required' => FALSE,
      'title' => 'Projektinformationen',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'group_projectfocus' => array(
      'region' => 'main',
      'weight' => '4',
      'has_required' => FALSE,
      'title' => 'Forschungsausrichtung',
      'hidden' => 0,
      'collapsed' => 0,
    ),
    'group_projectcontact' => array(
      'region' => 'main',
      'weight' => '5',
      'has_required' => FALSE,
      'title' => 'Kontakt',
      'collapsed' => 1,
      'hidden' => 0,
    ),
    'og_description' => array(
      'region' => 'main',
      'weight' => '-4',
      'has_required' => TRUE,
      'title' => 'Beschreibung',
    ),
    'og_selective' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => TRUE,
      'title' => 'Anträge auf Mitgliedschaft',
    ),
    'og_register' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Registrierungsformular',
      'hidden' => 0,
    ),
    'og_directory' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Im Gruppenverzeichnis anzeigen',
      'hidden' => 0,
    ),
    'themes' => array(
      'region' => 'right',
      'weight' => '12',
      'has_required' => FALSE,
      'title' => 'Theme configuration',
      'collapsed' => 1,
      'hidden' => 1,
    ),
    'og_private' => array(
      'region' => 'main',
      'weight' => '0',
      'has_required' => FALSE,
      'title' => 'Nicht öffentliche Gruppe',
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
  $strongarm->name = 'show_preview_changes_focusgroup';
  $strongarm->value = 1;
  $export['show_preview_changes_focusgroup'] = $strongarm;

  $strongarm = new stdClass;
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'show_preview_changes_organisation';
  $strongarm->value = 1;
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
