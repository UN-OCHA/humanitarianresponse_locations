<?php
/**
 * @file
 * humanitarianresponse_locations.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function humanitarianresponse_locations_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'administer locations vocabulary terms'.
  $permissions['administer locations vocabulary terms'] = array(
    'name' => 'administer locations vocabulary terms',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'vppr',
  );

  // Exported permission: 'clear csv_locations feeds'.
  $permissions['clear csv_locations feeds'] = array(
    'name' => 'clear csv_locations feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import csv_locations feeds'.
  $permissions['import csv_locations feeds'] = array(
    'name' => 'import csv_locations feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock csv_locations feeds'.
  $permissions['unlock csv_locations feeds'] = array(
    'name' => 'unlock csv_locations feeds',
    'roles' => array(
      'administrator' => 'administrator',
      'manager' => 'manager',
    ),
    'module' => 'feeds',
  );

  return $permissions;
}
