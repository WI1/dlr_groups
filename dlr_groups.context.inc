<?php

/**
 * Implementation of hook_context_default_contexts().
 */
function dlr_groups_context_default_contexts() {
  $export = array();

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dlr_fg_projects';
  $context->description = 'Kontext für die Übersicht über Fokusgruppen und Projekte';
  $context->tag = 'Projects';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'dlr_groups_fg_projects' => 'dlr_groups_fg_projects',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Kontext für die Übersicht über Fokusgruppen und Projekte');
  t('Projects');
  $export['dlr_fg_projects'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'dlr_groups_context_links';
  $context->description = '';
  $context->tag = 'Groups';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'focusgroup' => 'focusgroup',
        'group' => 'group',
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
    'node' => array(
      'values' => array(
        'focusgroup' => 'focusgroup',
        'group' => 'group',
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Groups');
  $export['dlr_groups_context_links'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'global_admin';
  $context->description = '';
  $context->tag = 'Intranet';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
    'user' => array(
      'values' => array(
        'administrator' => 'administrator',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'atrium-admin_links' => array(
          'module' => 'atrium',
          'delta' => 'admin_links',
          'region' => 'space_tools',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Intranet');
  $export['global_admin'] = $context;

  $context = new stdClass;
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'groups_menu';
  $context->description = '';
  $context->tag = 'Groups';
  $context->conditions = array(
    'context_og_condition_group_type' => array(
      'values' => array(
        'focusgroup' => 'focusgroup',
        'group' => 'group',
        'project' => 'project',
      ),
      'options' => array(
        'node_form' => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'menu-features' => array(
          'module' => 'menu',
          'delta' => 'features',
          'region' => 'page_tools',
          'weight' => 0,
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Groups');
  $export['groups_menu'] = $context;

  return $export;
}
