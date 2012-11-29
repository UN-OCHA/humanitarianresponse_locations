<?php

/**
 * @file
 * Convert PCode into location.
 */

$plugin = array(
  'form' => 'humanitarianresponse_locations_pcode_to_location_form',
  'callback' => 'humanitarianresponse_locations_pcode_to_location_callback',
  'name' => 'Convert PCodes into Locations',
  'category' => 'Other',
);

function humanitarianresponse_locations_pcode_to_location_form($importer, $element_key, $settings) {
  $form = array();
  $form['info'] = array(
    '#markup' => t('Convert PCodes into Locations.'),
  );
  return $form;
}

function humanitarianresponse_locations_pcode_to_location_callback($result, $item_key, $element_key, &$field, $settings) {
  $term = humanitarianresponse_locations_load_by_pcode($field);
  if (!empty($term)) {
    return $term->tid;
  }
  else {
    return NULL;
  }
}
