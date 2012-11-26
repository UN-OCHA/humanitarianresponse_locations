<?php
/**
 * @file
 * humanitarianresponse_locations.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function humanitarianresponse_locations_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "field_validation" && $api == "default_field_validation_rules") {
    return array("version" => "2");
  }
}

/**
 * Implements hook_views_api().
 */
function humanitarianresponse_locations_views_api() {
  return array("version" => "3.0");
}
