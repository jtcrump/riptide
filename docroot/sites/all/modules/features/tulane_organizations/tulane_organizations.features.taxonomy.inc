<?php
/**
 * @file
 * tulane_organizations.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function tulane_organizations_taxonomy_default_vocabularies() {
  return array(
    'organizations' => array(
      'name' => 'Organizations',
      'machine_name' => 'organizations',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
