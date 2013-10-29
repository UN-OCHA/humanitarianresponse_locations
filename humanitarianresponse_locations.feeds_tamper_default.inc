<?php
/**
 * @file
 * humanitarianresponse_locations.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function humanitarianresponse_locations_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'csv_locations_geonode-pcode-required_field';
  $feeds_tamper->importer = 'csv_locations_geonode';
  $feeds_tamper->source = 'PCode';
  $feeds_tamper->plugin_id = 'required';
  $feeds_tamper->settings = '';
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Required field';
  $export['csv_locations_geonode-pcode-required_field'] = $feeds_tamper;

  return $export;
}
