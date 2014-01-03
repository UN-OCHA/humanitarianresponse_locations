<?php
/**
 * @file
 * humanitarianresponse_locations.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function humanitarianresponse_locations_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'locations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'taxonomy_term_data';
  $view->human_name = 'Locations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Locations';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'name' => 'name',
    'field_location_pcode_1' => 'field_location_pcode_1',
    'field_location_pcode' => 'field_location_pcode',
    'field_location_pop' => 'field_location_pop',
    'field_location' => 'field_location',
  );
  $handler->display->display_options['style_options']['default'] = 'field_location_pcode';
  $handler->display->display_options['style_options']['info'] = array(
    'name' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location_pcode_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location_pcode' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location_pop' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_location' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode_1']['id'] = 'field_location_pcode_1';
  $handler->display->display_options['fields']['field_location_pcode_1']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_1']['field'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['field_location_pcode_1']['label'] = 'Parent';
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode']['id'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['field'] = 'field_location_pcode';
  /* Field: Taxonomy term: Population */
  $handler->display->display_options['fields']['field_location_pop']['id'] = 'field_location_pop';
  $handler->display->display_options['fields']['field_location_pop']['table'] = 'field_data_field_location_pop';
  $handler->display->display_options['fields']['field_location_pop']['field'] = 'field_location_pop';
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'WKT';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  /* Sort criterion: Taxonomy term: PCode (field_location_pcode) */
  $handler->display->display_options['sorts']['field_location_pcode_value']['id'] = 'field_location_pcode_value';
  $handler->display->display_options['sorts']['field_location_pcode_value']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['sorts']['field_location_pcode_value']['field'] = 'field_location_pcode_value';
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Taxonomy term: Name */
  $handler->display->display_options['filters']['name']['id'] = 'name';
  $handler->display->display_options['filters']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['name']['field'] = 'name';
  $handler->display->display_options['filters']['name']['operator'] = 'contains';
  $handler->display->display_options['filters']['name']['exposed'] = TRUE;
  $handler->display->display_options['filters']['name']['expose']['operator_id'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['label'] = 'Name';
  $handler->display->display_options['filters']['name']['expose']['operator'] = 'name_op';
  $handler->display->display_options['filters']['name']['expose']['identifier'] = 'name';
  $handler->display->display_options['filters']['name']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    188284353 => 0,
    200153887 => 0,
    197637936 => 0,
    52310416 => 0,
    3 => 0,
  );
  /* Filter criterion: Taxonomy term: PCode (field_location_pcode) */
  $handler->display->display_options['filters']['field_location_pcode_value']['id'] = 'field_location_pcode_value';
  $handler->display->display_options['filters']['field_location_pcode_value']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['filters']['field_location_pcode_value']['field'] = 'field_location_pcode_value';
  $handler->display->display_options['filters']['field_location_pcode_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_location_pcode_value']['expose']['operator_id'] = 'field_location_pcode_value_op';
  $handler->display->display_options['filters']['field_location_pcode_value']['expose']['label'] = 'PCode';
  $handler->display->display_options['filters']['field_location_pcode_value']['expose']['operator'] = 'field_location_pcode_value_op';
  $handler->display->display_options['filters']['field_location_pcode_value']['expose']['identifier'] = 'field_location_pcode_value';
  $handler->display->display_options['filters']['field_location_pcode_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    218860149 => 0,
    188284353 => 0,
    200153887 => 0,
    197637936 => 0,
    52310416 => 0,
    3 => 0,
  );

  /* Display: Master */
  $handler = $view->new_display('page', 'Master', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent']['id'] = 'parent';
  $handler->display->display_options['relationships']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent']['field'] = 'parent';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_1']['id'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_1']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_1']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['relationship'] = 'parent';
  $handler->display->display_options['relationships']['parent_1']['label'] = 'Parent2';
  /* Relationship: Taxonomy term: Parent term */
  $handler->display->display_options['relationships']['parent_2']['id'] = 'parent_2';
  $handler->display->display_options['relationships']['parent_2']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['relationships']['parent_2']['field'] = 'parent';
  $handler->display->display_options['relationships']['parent_2']['relationship'] = 'parent_1';
  $handler->display->display_options['relationships']['parent_2']['label'] = 'Parent3';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Term ID */
  $handler->display->display_options['fields']['tid']['id'] = 'tid';
  $handler->display->display_options['fields']['tid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['tid']['field'] = 'tid';
  $handler->display->display_options['fields']['tid']['label'] = '';
  $handler->display->display_options['fields']['tid']['exclude'] = TRUE;
  $handler->display->display_options['fields']['tid']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['tid']['separator'] = '';
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode']['id'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['field'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['label'] = 'PCode4';
  $handler->display->display_options['fields']['field_location_pcode']['exclude'] = TRUE;
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode_1']['id'] = 'field_location_pcode_1';
  $handler->display->display_options['fields']['field_location_pcode_1']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_1']['field'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['field_location_pcode_1']['label'] = 'PCode3';
  $handler->display->display_options['fields']['field_location_pcode_1']['exclude'] = TRUE;
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode_2']['id'] = 'field_location_pcode_2';
  $handler->display->display_options['fields']['field_location_pcode_2']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_2']['field'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_2']['relationship'] = 'parent_1';
  $handler->display->display_options['fields']['field_location_pcode_2']['label'] = 'PCode2';
  $handler->display->display_options['fields']['field_location_pcode_2']['exclude'] = TRUE;
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode_3']['id'] = 'field_location_pcode_3';
  $handler->display->display_options['fields']['field_location_pcode_3']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_3']['field'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_3']['relationship'] = 'parent_2';
  $handler->display->display_options['fields']['field_location_pcode_3']['label'] = 'PCode1';
  $handler->display->display_options['fields']['field_location_pcode_3']['exclude'] = TRUE;
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_4']['id'] = 'php_4';
  $handler->display->display_options['fields']['php_4']['table'] = 'views';
  $handler->display->display_options['fields']['php_4']['field'] = 'php';
  $handler->display->display_options['fields']['php_4']['label'] = 'Admin1';
  $handler->display->display_options['fields']['php_4']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_4']['php_output'] = '<?php
$depth = count(taxonomy_get_parents_all($row->tid));
switch($depth) {
  case 4:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_2_tid\';
    break;
  case 3:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_1_tid\';
    break;
  case 2:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_tid\';
    break;
  case 1:
    $relation = \'tid\';
    break;
}
if (!empty($relation)) {
  $entity = $data->_field_data[$relation][\'entity\'];
  echo $entity->name;
}
?>';
  $handler->display->display_options['fields']['php_4']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_4']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php']['id'] = 'php';
  $handler->display->display_options['fields']['php']['table'] = 'views';
  $handler->display->display_options['fields']['php']['field'] = 'php';
  $handler->display->display_options['fields']['php']['label'] = 'PCode1';
  $handler->display->display_options['fields']['php']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php']['php_output'] = '<?php
$depth = count(taxonomy_get_parents_all($row->tid));
switch($depth) {
  case 4:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_2_tid\';
    break;
  case 3:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_1_tid\';
    break;
  case 2:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_tid\';
    break;
  case 1:
    $relation = \'tid\';
    break;
}
if (!empty($relation)) {
  $entity = $data->_field_data[$relation][\'entity\'];
  echo $entity->field_location_pcode[LANGUAGE_NONE][0][\'value\'];
}
?>';
  $handler->display->display_options['fields']['php']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_5']['id'] = 'php_5';
  $handler->display->display_options['fields']['php_5']['table'] = 'views';
  $handler->display->display_options['fields']['php_5']['field'] = 'php';
  $handler->display->display_options['fields']['php_5']['label'] = 'Admin2';
  $handler->display->display_options['fields']['php_5']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_5']['php_output'] = '<?php
$depth = count(taxonomy_get_parents_all($row->tid));;
switch($depth) {
  case 4:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_1_tid\';
    break;
  case 3:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_tid\';
    break;
  case 2:
    $relation = \'tid\';
    break;
}
if (!empty($relation)) {
  $entity = $data->_field_data[$relation][\'entity\'];
  echo $entity->name;
}
?>';
  $handler->display->display_options['fields']['php_5']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_5']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_1']['id'] = 'php_1';
  $handler->display->display_options['fields']['php_1']['table'] = 'views';
  $handler->display->display_options['fields']['php_1']['field'] = 'php';
  $handler->display->display_options['fields']['php_1']['label'] = 'PCode2';
  $handler->display->display_options['fields']['php_1']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_1']['php_output'] = '<?php
$depth = count(taxonomy_get_parents_all($row->tid));;
switch($depth) {
  case 4:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_1_tid\';
    break;
  case 3:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_tid\';
    break;
  case 2:
    $relation = \'tid\';
    break;
}
if (!empty($relation)) {
  $entity = $data->_field_data[$relation][\'entity\'];
  echo $entity->field_location_pcode[LANGUAGE_NONE][0][\'value\'];
}
?>';
  $handler->display->display_options['fields']['php_1']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_1']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_6']['id'] = 'php_6';
  $handler->display->display_options['fields']['php_6']['table'] = 'views';
  $handler->display->display_options['fields']['php_6']['field'] = 'php';
  $handler->display->display_options['fields']['php_6']['label'] = 'Admin3';
  $handler->display->display_options['fields']['php_6']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_6']['php_output'] = '<?php
$depth = count(taxonomy_get_parents_all($row->tid));;
switch($depth) {
  case 4:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_tid\';
    break;
  case 3:
    $relation = \'tid\';
    break;
}
if (!empty($relation)) {
  $entity = $data->_field_data[$relation][\'entity\'];
  echo $entity->name;
}
?>';
  $handler->display->display_options['fields']['php_6']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_6']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_2']['id'] = 'php_2';
  $handler->display->display_options['fields']['php_2']['table'] = 'views';
  $handler->display->display_options['fields']['php_2']['field'] = 'php';
  $handler->display->display_options['fields']['php_2']['label'] = 'PCode3';
  $handler->display->display_options['fields']['php_2']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_2']['php_output'] = '<?php
$depth = count(taxonomy_get_parents_all($row->tid));;
switch($depth) {
  case 4:
    $relation = \'taxonomy_term_data_taxonomy_term_hierarchy_tid\';
    break;
  case 3:
    $relation = \'tid\';
    break;
}
if (!empty($relation)) {
  $entity = $data->_field_data[$relation][\'entity\'];
  echo $entity->field_location_pcode[LANGUAGE_NONE][0][\'value\'];
}
?>';
  $handler->display->display_options['fields']['php_2']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_2']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_7']['id'] = 'php_7';
  $handler->display->display_options['fields']['php_7']['table'] = 'views';
  $handler->display->display_options['fields']['php_7']['field'] = 'php';
  $handler->display->display_options['fields']['php_7']['label'] = 'Admin4';
  $handler->display->display_options['fields']['php_7']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_7']['php_output'] = '<?php
$depth = count(taxonomy_get_parents_all($row->tid));;
switch($depth) {
  case 4:
    $relation = \'tid\';
    break;
}
if (!empty($relation)) {
  $entity = $data->_field_data[$relation][\'entity\'];
  echo $entity->name;
}
?>';
  $handler->display->display_options['fields']['php_7']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_7']['php_click_sortable'] = '';
  /* Field: Global: PHP */
  $handler->display->display_options['fields']['php_3']['id'] = 'php_3';
  $handler->display->display_options['fields']['php_3']['table'] = 'views';
  $handler->display->display_options['fields']['php_3']['field'] = 'php';
  $handler->display->display_options['fields']['php_3']['label'] = 'PCode4';
  $handler->display->display_options['fields']['php_3']['use_php_setup'] = 0;
  $handler->display->display_options['fields']['php_3']['php_output'] = '<?php
$depth = count(taxonomy_get_parents_all($row->tid));;
switch($depth) {
  case 4:
    $relation = \'tid\';
    break;
}
if (!empty($relation)) {
  $entity = $data->_field_data[$relation][\'entity\'];
  echo $entity->field_location_pcode[LANGUAGE_NONE][0][\'value\'];
}
?>';
  $handler->display->display_options['fields']['php_3']['use_php_click_sortable'] = '0';
  $handler->display->display_options['fields']['php_3']['php_click_sortable'] = '';
  $handler->display->display_options['path'] = 'locations';

  /* Display: Table */
  $handler = $view->new_display('page', 'Table', 'page_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode']['id'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['field'] = 'field_location_pcode';
  $handler->display->display_options['path'] = 'locations/table';
  $handler->display->display_options['menu']['type'] = 'default tab';
  $handler->display->display_options['menu']['title'] = 'Table';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $handler->display->display_options['tab_options']['weight'] = '0';

  /* Display: Map */
  $handler = $view->new_display('page', 'Map', 'map');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_map';
  $handler->display->display_options['style_options']['map'] = 'locations';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['path'] = 'locations/map';
  $handler->display->display_options['menu']['type'] = 'tab';
  $handler->display->display_options['menu']['title'] = 'Map';
  $handler->display->display_options['menu']['weight'] = '5';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Map Data */
  $handler = $view->new_display('openlayers', 'Map Data', 'map_data');
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'openlayers_data';
  $handler->display->display_options['style_options']['data_source'] = array(
    'value' => 'wkt',
    'other_lat' => 'name',
    'other_lon' => 'name',
    'wkt' => 'field_location',
    'other_top' => 'name',
    'other_right' => 'name',
    'other_bottom' => 'name',
    'other_left' => 'name',
    'name_field' => 'name',
    'description_field' => 'field_location_pcode',
    'style_field' => '',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode']['id'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['field'] = 'field_location_pcode';
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'WKT';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );

  /* Display: CSV */
  $handler = $view->new_display('views_data_export', 'CSV', 'views_data_export_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_csv';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['quote'] = 1;
  $handler->display->display_options['style_options']['trim'] = 0;
  $handler->display->display_options['style_options']['replace_newlines'] = 0;
  $handler->display->display_options['style_options']['header'] = 1;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode_1']['id'] = 'field_location_pcode_1';
  $handler->display->display_options['fields']['field_location_pcode_1']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_1']['field'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['field_location_pcode_1']['label'] = 'Parent';
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode']['id'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['field'] = 'field_location_pcode';
  /* Field: Taxonomy term: Population */
  $handler->display->display_options['fields']['field_location_pop']['id'] = 'field_location_pop';
  $handler->display->display_options['fields']['field_location_pop']['table'] = 'field_data_field_location_pop';
  $handler->display->display_options['fields']['field_location_pop']['field'] = 'field_location_pop';
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'WKT';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['path'] = 'locations/csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';

  /* Display: XLS */
  $handler = $view->new_display('views_data_export', 'XLS', 'xls');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['filename'] = 'locations.xls';
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode_1']['id'] = 'field_location_pcode_1';
  $handler->display->display_options['fields']['field_location_pcode_1']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_1']['field'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['field_location_pcode_1']['label'] = 'Parent';
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode']['id'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['field'] = 'field_location_pcode';
  /* Field: Taxonomy term: Population */
  $handler->display->display_options['fields']['field_location_pop']['id'] = 'field_location_pop';
  $handler->display->display_options['fields']['field_location_pop']['table'] = 'field_data_field_location_pop';
  $handler->display->display_options['fields']['field_location_pop']['field'] = 'field_location_pop';
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'WKT';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['path'] = 'locations/xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';

  /* Display: XML */
  $handler = $view->new_display('views_data_export', 'XML', 'xml');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xml';
  $handler->display->display_options['style_options']['provide_file'] = 0;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['style_options']['transform'] = 1;
  $handler->display->display_options['style_options']['transform_type'] = 'pascal';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode_1']['id'] = 'field_location_pcode_1';
  $handler->display->display_options['fields']['field_location_pcode_1']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_1']['field'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode_1']['relationship'] = 'parent';
  $handler->display->display_options['fields']['field_location_pcode_1']['label'] = 'Parent';
  /* Field: Taxonomy term: PCode */
  $handler->display->display_options['fields']['field_location_pcode']['id'] = 'field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['table'] = 'field_data_field_location_pcode';
  $handler->display->display_options['fields']['field_location_pcode']['field'] = 'field_location_pcode';
  /* Field: Taxonomy term: Population */
  $handler->display->display_options['fields']['field_location_pop']['id'] = 'field_location_pop';
  $handler->display->display_options['fields']['field_location_pop']['table'] = 'field_data_field_location_pop';
  $handler->display->display_options['fields']['field_location_pop']['field'] = 'field_location_pop';
  /* Field: Taxonomy term: Location */
  $handler->display->display_options['fields']['field_location']['id'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['table'] = 'field_data_field_location';
  $handler->display->display_options['fields']['field_location']['field'] = 'field_location';
  $handler->display->display_options['fields']['field_location']['label'] = 'WKT';
  $handler->display->display_options['fields']['field_location']['click_sort_column'] = 'wkt';
  $handler->display->display_options['fields']['field_location']['settings'] = array(
    'data' => 'full',
  );
  $handler->display->display_options['path'] = 'locations/xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['defaults']['pager'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['name']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Taxonomy term: Name */
  $handler->display->display_options['sorts']['name']['id'] = 'name';
  $handler->display->display_options['sorts']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['sorts']['name']['field'] = 'name';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Taxonomy vocabulary: Machine name */
  $handler->display->display_options['filters']['machine_name']['id'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['table'] = 'taxonomy_vocabulary';
  $handler->display->display_options['filters']['machine_name']['field'] = 'machine_name';
  $handler->display->display_options['filters']['machine_name']['value'] = array(
    'locations' => 'locations',
  );
  /* Filter criterion: Taxonomy term: Parent term */
  $handler->display->display_options['filters']['parent']['id'] = 'parent';
  $handler->display->display_options['filters']['parent']['table'] = 'taxonomy_term_hierarchy';
  $handler->display->display_options['filters']['parent']['field'] = 'parent';
  $handler->display->display_options['filters']['parent']['value']['value'] = '0';
  $handler->display->display_options['block_description'] = 'Locations';
  $translatables['locations'] = array(
    t('Master'),
    t('Locations'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« first'),
    t('‹ previous'),
    t('next ›'),
    t('last »'),
    t('Parent'),
    t('Name'),
    t('PCode'),
    t('Population'),
    t('WKT'),
    t('Parent2'),
    t('Parent3'),
    t('.'),
    t('PCode4'),
    t('PCode3'),
    t('PCode2'),
    t('PCode1'),
    t('Admin1'),
    t('Admin2'),
    t('Admin3'),
    t('Admin4'),
    t('Table'),
    t('Map'),
    t('Map Data'),
    t('CSV'),
    t('XLS'),
    t('XML'),
    t('Block'),
  );
  $export['locations'] = $view;

  return $export;
}
