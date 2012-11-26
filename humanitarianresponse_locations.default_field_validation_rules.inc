<?php
/**
 * @file
 * humanitarianresponse_locations.default_field_validation_rules.inc
 */

/**
 * Implements hook_default_field_validation_rule().
 */
function humanitarianresponse_locations_default_field_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'unique_pcode';
  $rule->name = 'unique_pcode';
  $rule->field_name = 'field_location_pcode';
  $rule->col = 'value';
  $rule->entity_type = 'taxonomy_term';
  $rule->bundle = 'locations';
  $rule->validator = 'field_validation_unique_validator';
  $rule->settings = array(
    'data' => 'global',
    'bypass' => 0,
    'roles' => array(
      2 => 0,
      218860149 => 0,
      200153887 => 0,
      52310416 => 0,
      30037204 => 0,
    ),
    'errors' => 0,
  );
  $rule->error_message = 'The PCode field must be unique';
  $export['unique_pcode'] = $rule;

  return $export;
}
