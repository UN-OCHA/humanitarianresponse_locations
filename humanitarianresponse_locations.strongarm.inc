<?php
/**
 * @file
 * humanitarianresponse_locations.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function humanitarianresponse_locations_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'hs_config_taxonomy-locations';
  $strongarm->value = array(
    'config_id' => 'taxonomy-8',
    'save_lineage' => '0',
    'enforce_deepest' => '0',
    'resizable' => '0',
    'level_labels' => array(
      'status' => 0,
      'labels' => array(
        0 => '',
      ),
    ),
    'dropbox' => array(
      'status' => 1,
      'title' => 'All selections',
      'limit' => '0',
      'reset_hs' => '1',
    ),
    'editability' => array(
      'status' => 0,
      'item_types' => array(
        0 => '',
      ),
      'allowed_levels' => array(
        0 => 1,
      ),
      'allow_new_levels' => 0,
      'max_levels' => '0',
    ),
  );
  $export['hs_config_taxonomy-locations'] = $strongarm;

  return $export;
}
