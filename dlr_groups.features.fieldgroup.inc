<?php

/**
 * Implementation of hook_fieldgroup_default_groups().
 */
function dlr_groups_fieldgroup_default_groups() {
  $groups = array();

  // Exported group: group_projectcontact
  $groups['project-group_projectcontact'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_projectcontact',
    'label' => 'Kontakt',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
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
        'mobile' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '38',
    'fields' => array(
      '0' => 'field_projecthomepage',
      '1' => 'field_project_rssfeed',
      '2' => 'field_projectaccount',
      '3' => 'field_ref_projectinstitutions',
      '4' => 'field_ref_valuepartner',
    ),
  );

  // Exported group: group_projectfocus
  $groups['project-group_projectfocus'] = array(
    'group_type' => 'standard',
    'type_name' => 'project',
    'group_name' => 'group_projectfocus',
    'label' => 'Forschungsausrichtung',
    'settings' => array(
      'form' => array(
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
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
        'mobile' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '37',
    'fields' => array(
      '0' => 'field_projektgoals',
      '1' => 'field_synopsis',
      '2' => 'field_steckbrief',
      '3' => 'field_projectmembers',
      '4' => 'field_researchquestions',
      '5' => 'field_projecttheories',
      '6' => 'field_projectapproach',
      '7' => 'field_projecttechniques',
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
        'style' => 'fieldset_collapsible',
        'description' => '',
      ),
      'display' => array(
        'description' => '',
        '5' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'teaser' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'full' => array(
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
        'mobile' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'token' => array(
          'format' => 'fieldset',
          'exclude' => 0,
        ),
        'label' => 'above',
      ),
    ),
    'weight' => '36',
    'fields' => array(
      '0' => 'field_projectfkz',
      '1' => 'field_projectlogo',
      '2' => 'field_project_fg_membership',
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Forschungsausrichtung');
  t('Kontakt');
  t('Projektinformationen');

  return $groups;
}
