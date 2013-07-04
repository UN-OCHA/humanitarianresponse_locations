<?php
/**
 * @file
 * humanitarianresponse_locations.openlayers_maps.inc
 */

/**
 * Implements hook_openlayers_maps().
 */
function humanitarianresponse_locations_openlayers_maps() {
  $export = array();

  $openlayers_maps = new stdClass();
  $openlayers_maps->disabled = FALSE; /* Edit this to true to make a default openlayers_maps disabled initially */
  $openlayers_maps->api_version = 1;
  $openlayers_maps->name = 'locations';
  $openlayers_maps->title = 'Locations';
  $openlayers_maps->description = 'Locations Map';
  $openlayers_maps->data = array(
    'width' => 'auto',
    'height' => '400px',
    'image_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/img/',
    'css_path' => 'sites/all/modules/contrib/openlayers/themes/default_dark/style.css',
    'proxy_host' => '',
    'hide_empty_map' => 0,
    'center' => array(
      'initial' => array(
        'centerpoint' => '0,0',
        'zoom' => '2',
      ),
      'restrict' => array(
        'restrictextent' => 0,
        'restrictedExtent' => '',
      ),
    ),
    'behaviors' => array(
      'openlayers_behavior_keyboarddefaults' => array(),
      'openlayers_behavior_attribution' => array(
        'separator' => '',
      ),
      'openlayers_behavior_layerswitcher' => array(
        'ascending' => 1,
        'sortBaseLayer' => '0',
        'roundedCorner' => 1,
        'roundedCornerColor' => '#222222',
        'maximizeDefault' => 0,
        'div' => '',
      ),
      'openlayers_behavior_navigation' => array(
        'zoomWheelEnabled' => 1,
        'zoomBoxEnabled' => 1,
        'documentDrag' => 0,
      ),
      'openlayers_behavior_panzoombar' => array(
        'zoomWorldIcon' => 0,
        'panIcons' => 1,
      ),
      'openlayers_behavior_popup' => array(
        'layers' => array(
          'locations_map_data' => 'locations_map_data',
        ),
        'panMapIfOutOfView' => 0,
        'keepInMap' => 1,
      ),
    ),
    'default_layer' => 'mapbox_world_bright',
    'layers' => array(
      'mapbox_world_bright' => 'mapbox_world_bright',
      'mapbox_world_dark' => 'mapbox_world_dark',
      'mapbox_world_light' => 'mapbox_world_light',
      'mapbox_world_print' => 'mapbox_world_print',
      'mapbox_world_black' => 'mapbox_world_black',
      'locations_map_data' => 'locations_map_data',
    ),
    'layer_weight' => array(
      'locations_map_data' => '0',
      'op_presence_map_data' => '0',
      'openlayers_geojson_picture_this' => '0',
      'openlayers_kml_example' => '0',
      'geofield_formatter' => '0',
    ),
    'layer_styles' => array(
      'geofield_formatter' => 'default',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'op_presence_map_data' => '0',
      'locations_map_data' => 'humanitarianresponse_default',
    ),
    'layer_styles_select' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'op_presence_map_data' => '0',
      'locations_map_data' => 'humanitarianresponse_select',
    ),
    'layer_styles_temporary' => array(
      'geofield_formatter' => '0',
      'openlayers_kml_example' => '0',
      'openlayers_geojson_picture_this' => '0',
      'op_presence_map_data' => '0',
      'locations_map_data' => '0',
    ),
    'layer_activated' => array(
      'locations_map_data' => 'locations_map_data',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'op_presence_map_data' => 0,
    ),
    'layer_switcher' => array(
      'locations_map_data' => 'locations_map_data',
      'geofield_formatter' => 0,
      'openlayers_kml_example' => 0,
      'openlayers_geojson_picture_this' => 0,
      'op_presence_map_data' => 0,
    ),
    'projection' => 'EPSG:3857',
    'displayProjection' => 'EPSG:4326',
    'styles' => array(
      'default' => 'humanitarianresponse_default',
      'select' => 'humanitarianresponse_select',
      'temporary' => 'default',
    ),
  );
  $export['locations'] = $openlayers_maps;

  return $export;
}
