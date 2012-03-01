<?php

/**
 * Implementation of hook_menu_default_menu_links().
 */
function dlr_groups_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: primary-links:og/projekte
  $menu_links['primary-links:og/projekte'] = array(
    'menu_name' => 'primary-links',
    'link_path' => 'og/projekte',
    'router_path' => 'og/projekte',
    'link_title' => 'Projekte',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'purl' => 'disabled',
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Projekte');


  return $menu_links;
}
