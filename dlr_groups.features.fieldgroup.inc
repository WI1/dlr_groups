<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function dlr_groups_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_focusgroupspeaker
  $groups['focusgroup-group_focusgroupspeaker'] = array(
    'group_type' => 'standard',
    'type_name' => 'focusgroup',
    'group_name' => 'group_focusgroupspeaker',
    'label' => 'Fokusgruppensprecher',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '6',
        'label' => 'hidden',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        'reference_preview' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(
      '0' => 'field_focusgroup_speaker',
      '1' => 'field_fgspeakernoaccount',
      '2' => 'field_fgspeakeremail',
      '3' => 'field_fgspeakerphone',
    ),
  );

  // Exported group: group_mpsupport
  $groups['focusgroup-group_mpsupport'] = array(
    'group_type' => 'standard',
    'type_name' => 'focusgroup',
    'group_name' => 'group_mpsupport',
    'label' => 'Betreuer beim Metaprojekt „DemoScreen“',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '3',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        'reference_preview' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '3',
    'fields' => array(
      '0' => 'field_contactbalance',
    ),
  );

  // Exported group: group_supportdlr
  $groups['focusgroup-group_supportdlr'] = array(
    'group_type' => 'standard',
    'type_name' => 'focusgroup',
    'group_name' => 'group_supportdlr',
    'label' => 'Betreuer beim Projektträger des DLR',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '5',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'description' => '',
        'reference_preview' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '5',
    'fields' => array(
      '0' => 'field_contactdlr',
      '1' => 'field_contactdlrphone',
      '2' => 'field_emailcontactdlr',
      '3' => 'field_contactdlrpicture',
    ),
  );

  // Exported group: group_beteiligteinstitutionen
  $groups['project-group_beteiligteinstitutionen'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_beteiligteinstitutionen',
    'label' => 'Beteiligte Institutionen',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '6',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '6',
    'fields' => array(
      '0' => 'field_ref_projectinstitutions',
      '1' => 'field_ref_valuepartner',
    ),
  );

  // Exported group: group_grouptheories
  $groups['project-group_grouptheories'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_grouptheories',
    'label' => 'Theorien/theoretische Grundlagen',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '9',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        'reference_preview' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '9',
    'fields' => array(
      '0' => 'field_projecttheories',
    ),
  );

  // Exported group: group_methods
  $groups['project-group_methods'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_methods',
    'label' => 'Methoden',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '11',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        'reference_preview' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '11',
    'fields' => array(
      '0' => 'field_projecttechniques',
    ),
  );

  // Exported group: group_projectcontact
  $groups['project-group_projectcontact'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_projectcontact',
    'label' => 'Kontaktinformationen',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '7',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'description' => '',
        'reference_preview' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '7',
    'fields' => array(
      '0' => 'field_projectaccount',
      '1' => 'field_ansprechpartner_nonref',
      '2' => 'field_telephonenumber',
      '3' => 'field_faxnumber',
      '4' => 'field_projectemail',
      '5' => 'field_projecthomepage',
      '6' => 'field_project_rssfeed',
    ),
  );

  // Exported group: group_projectfocus
  $groups['project-group_projectfocus'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_projectfocus',
    'label' => 'Vorgehen',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '12',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        'reference_preview' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '12',
    'fields' => array(
      '0' => 'field_projectapproach',
    ),
  );

  // Exported group: group_projectinfo
  $groups['project-group_projectinfo'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_projectinfo',
    'label' => 'Projektinformationen',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '5',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsible',
          'exclude' => 0,
        ),
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '5',
    'fields' => array(
      '0' => 'field_projectfkz',
      '1' => 'field_projectduration',
      '2' => 'field_project_fg_membership',
      '3' => 'field_tags',
      '4' => 'field_branchen',
      '5' => 'field_berufsgruppen',
      '6' => 'field_projectlogo',
      '7' => 'field_synopsis',
      '8' => 'field_steckbrief',
      '9' => 'field_projectmembers',
    ),
  );

  // Exported group: group_projektziele
  $groups['project-group_projektziele'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_projektziele',
    'label' => 'Projektziele',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '8',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        'reference_preview' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '8',
    'fields' => array(
      '0' => 'field_projektgoals',
    ),
  );

  // Exported group: group_researchquestions
  $groups['project-group_researchquestions'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_researchquestions',
    'label' => 'Forschungsfragen',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset',
        'description' => '',
      ),
      'display' => array(
        'weight' => '10',
        'label' => 'above',
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
          'format' => 'fieldset_collapsed',
          'exclude' => 0,
        ),
        'description' => '',
        'reference_preview' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '4' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '2' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        '3' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
      ),
    ),
    'weight' => '10',
    'fields' => array(
      '0' => 'field_researchquestions',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Beteiligte Institutionen');
  t('Betreuer beim Metaprojekt „DemoScreen“');
  t('Betreuer beim Projektträger des DLR');
  t('Fokusgruppensprecher');
  t('Forschungsfragen');
  t('Kontaktinformationen');
  t('Methoden');
  t('Projektinformationen');
  t('Projektziele');
  t('Theorien/theoretische Grundlagen');
  t('Vorgehen');

  return $groups;
}
