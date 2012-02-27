<?php

/**
 * Implementation of hook_menu_default_menu_custom().
 */
function dlr_groups_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-projekte
  $menus['menu-projekte'] = array(
    'menu_name' => 'menu-projekte',
    'title' => 'Projekte',
    'description' => 'Alle Projekte gruppiert nach Fokusgruppen. Für die Balance Bar.',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Alle Projekte gruppiert nach Fokusgruppen. Für die Balance Bar.');
  t('Projekte');


  return $menus;
}
