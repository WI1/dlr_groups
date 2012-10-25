<?php

/**
 * Implementation of hook_ctools_plugin_api().
 */
function dlr_groups_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => 3);
  }
  elseif ($module == "noderelationships" && $api == "noderelationships") {
    return array("version" => 1);
  }
  elseif ($module == "strongarm" && $api == "strongarm") {
    return array("version" => 1);
  }
}

/**
 * Implementation of hook_custom_formatters_defaults().
 */
function dlr_groups_custom_formatters_defaults() {
  $formatters = array();

  // Content Taxonomy Field with mulitiple items.
  $formatters['content_taxonmy_field_multiple'] = array(
    'name' => 'content_taxonmy_field_multiple',
    'label' => 'Content Taxonomy Field with mulitiple items',
    'field_types' => 'a:1:{i:0;s:16:"content_taxonomy";}',
    'multiple' => '1',
    'description' => '',
    'mode' => 'advanced',
    'code' => '$output = \'<ul>\';
foreach (element_children($element) as $key) {
  $term = taxonomy_get_term($element[$key][\'#item\'][\'value\']);
  $term_name = $term->name;
  $term_link = taxonomy_term_path($term);
  $output .= \'<li> \' . l(t($term_name), $term_link, array(\'html\' => TRUE, \'purl\' => array(\'disabled\' => TRUE))) . \'</li>\';
}
$output .= \'</ul>\';
return $output;',
    'status' => '1',
    'source' => 'module',
  );

  // Outputs a hformat contact card for a user reference.
  $formatters['user_reference_address'] = array(
    'name' => 'user_reference_address',
    'label' => 'Outputs a hformat contact card for a user reference',
    'field_types' => 'a:1:{i:0;s:13:"userreference";}',
    'multiple' => '1',
    'description' => '',
    'mode' => 'advanced',
    'code' => '$hcardOutput = t(\'Noch keine Person eingetragen\', NULL, \'de\');
foreach (element_children($element) as $key) {
  if($element[$key][\'#item\'][\'uid\']) {
    $user = content_profile_load(\'profile\', $element[$key][\'#item\'][\'uid\']);
    if ($user->field_profile_address) {
      $hcard = array(
        \'url\' => \'/user/\' . $user->field_displayname[0][\'view\'],
        \'name\' => $user->name,
        \'street-address\' => $user->field_profile_address[0][\'street\'],
        \'postal-code\' => $user->field_profile_address[0][\'postal_code\'],
        \'locality\' => $user->field_profile_address[0][\'city\'],
        \'country-name\' => $user->field_profile_address[0][\'country\'],
        \'phone-work-value\' => $user->field_profile_address[0][\'phone\'],
        \'fax-work-value\' => $user->field_profile_address[0][\'fax\'],
        \'logo\' => theme(\'imagecache\', \'user-m\', $user->picture)
        );

        $hcardOutput =
        \'<div class="vcard">
	    <span class="logo" style="float: none;">\' . $hcard[\'logo\'] . \'</span>
	    <span class="fn n" style="display: block;">
	      <a class="url" href="\' . $hcard[\'url\'] . \'">
      	        <span class="given-name">\' . $hcard[\'name\'] . \'</span>
    	        <span class="given-name">\' . $hcard[\'given-name\'] . \'</span>
	        <span class="family-name">\' . $hcard[\'family-name\'] . \'</span>
	     </a>
	  </span>
	  <div class="adr">
	    <div class="street-address">\' . $hcard[\'street-address\'] . \'</div>
	    <span class="postal-code">\' . $hcard[\'postal-code\'] . \'</span> <span class="locality">\' . $hcard[\'locality\'] . \'</span>
	    <div class="country-name hide">\' . $hcard[\'country-name\'] . \'</div>
	  </div>
	  <div class="tel"><span class="type">\' . t(\'Tel.\', NULL, \'de\') . \'</span>: <span class="value">\' . $hcard[\'phone-work-value\'] . \'</span></div>
	  <div class="tel"><span class="type">\' . t(\'Fax\', NULL, \'de\') . \'</span>: <span class="value">\' . $hcard[\'fax-work-value\'] . \'</span></div>
        </div>\'; 
    }
  }
  $output .= $hcardOutput;
}
return $output;',
    'status' => '1',
    'source' => 'module',
  );

  return $formatters;

}

/**
 * Implementation of hook_imagecache_default_presets().
 */
function dlr_groups_imagecache_default_presets() {
  $items = array(
    'projectlogo-m' => array(
      'presetname' => 'projectlogo-m',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '60',
            'height' => '60',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '60',
            'height' => '60',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'projectlogo_2c_landscape' => array(
      'presetname' => 'projectlogo_2c_landscape',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '140',
            'height' => '87',
            'upscale' => 1,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_crop',
          'data' => array(
            'width' => '140',
            'height' => '87',
            'xoffset' => 'center',
            'yoffset' => 'center',
          ),
        ),
      ),
    ),
    'projectlogo_9c' => array(
      'presetname' => 'projectlogo_9c',
      'actions' => array(
        '0' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '',
            'height' => '135',
            'upscale' => 0,
          ),
        ),
        '1' => array(
          'weight' => '0',
          'module' => 'imagecache',
          'action' => 'imagecache_scale',
          'data' => array(
            'width' => '790',
            'height' => '0',
            'upscale' => 0,
          ),
        ),
        '2' => array(
          'weight' => '0',
          'module' => 'imagecache_canvasactions',
          'action' => 'canvasactions_definecanvas',
          'data' => array(
            'RGB' => array(
              'HEX' => 'ffffff',
            ),
            'under' => 1,
            'exact' => array(
              'width' => '790',
              'height' => '135',
              'xpos' => 'center',
              'ypos' => 'center',
            ),
            'relative' => array(
              'leftdiff' => '',
              'rightdiff' => '',
              'topdiff' => '',
              'bottomdiff' => '',
            ),
          ),
        ),
      ),
    ),
  );
  return $items;
}

/**
 * Implementation of hook_node_info().
 */
function dlr_groups_node_info() {
  $items = array(
    'focusgroup' => array(
      'name' => t('Fokusgruppe'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Langtitel'),
      'has_body' => '1',
      'body_label' => t('Kurzbeschreibung'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'organisation' => array(
      'name' => t('Organisation'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Name'),
      'has_body' => '1',
      'body_label' => t('Kurzbeschreibung'),
      'min_word_count' => '0',
      'help' => '',
    ),
    'project' => array(
      'name' => t('Projekt'),
      'module' => 'features',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Kurztitel'),
      'has_body' => '0',
      'body_label' => '',
      'min_word_count' => '0',
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implementation of hook_views_api().
 */
function dlr_groups_views_api() {
  return array(
    'api' => '2',
  );
}
