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

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['hide_admin_links'] = FALSE;
  $handler->display->display_options['path'] = 'locations';

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
  $handler->display->display_options['path'] = 'locations.xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );

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
  $handler->display->display_options['path'] = 'locations.xml';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
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
  $handler->display->display_options['path'] = 'locations.csv';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
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
    t('Page'),
    t('XLS'),
    t('XML'),
    t('CSV'),
  );
  $export['locations'] = $view;

  return $export;
}
