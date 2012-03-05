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
