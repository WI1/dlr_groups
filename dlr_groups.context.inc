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
  $context->description = 'Kontext für Fokusgruppen und Projekte';
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
  t('Kontext für Fokusgruppen und Projekte');
  t('Projects');
  $export['dlr_fg_projects'] = $context;

  return $export;
}
