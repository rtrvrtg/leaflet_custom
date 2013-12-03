<?php
/**
 * @file
 * leaflet_custom.features.inc
 */

/**
 * Implements hook_eck_bundle_info().
 */
function leaflet_custom_eck_bundle_info() {
  $items = array(
  'leaflet_custom_map_leaflet_custom_map' => array(
  'machine_name' => 'leaflet_custom_map_leaflet_custom_map',
  'entity_type' => 'leaflet_custom_map',
  'name' => 'leaflet_custom_map',
  'label' => 'Leaflet Custom map',
),
  );
  return $items;
}

/**
 * Implements hook_eck_entity_type_info().
 */
function leaflet_custom_eck_entity_type_info() {
$items = array(
       'leaflet_custom_map' => array(
  'name' => 'leaflet_custom_map',
  'label' => 'Leaflet Custom map',
  'properties' => array(
    'title' => array(
      'label' => 'Title',
      'type' => 'text',
      'behavior' => 'title',
    ),
    'uid' => array(
      'label' => 'Author',
      'type' => 'integer',
      'behavior' => 'author',
    ),
    'created' => array(
      'label' => 'Created',
      'type' => 'integer',
      'behavior' => 'created',
    ),
    'changed' => array(
      'label' => 'Changed',
      'type' => 'integer',
      'behavior' => 'changed',
    ),
    'language' => array(
      'label' => 'Entity language',
      'type' => 'language',
      'behavior' => 'language',
    ),
  ),
),
  );
  return $items;
}
