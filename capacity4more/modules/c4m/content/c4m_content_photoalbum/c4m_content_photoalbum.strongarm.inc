<?php
/**
 * @file
 * c4m_content_photoalbum.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function c4m_content_photoalbum_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_anonymous_photoalbum';
  $strongarm->value = 0;
  $export['comment_anonymous_photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_mode_photoalbum';
  $strongarm->value = 1;
  $export['comment_default_mode_photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_default_per_page_photoalbum';
  $strongarm->value = '50';
  $export['comment_default_per_page_photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_form_location_photoalbum';
  $strongarm->value = 1;
  $export['comment_form_location_photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_photoalbum';
  $strongarm->value = '0';
  $export['comment_photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_preview_photoalbum';
  $strongarm->value = '0';
  $export['comment_preview_photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'comment_subject_field_photoalbum';
  $strongarm->value = 0;
  $export['comment_subject_field_photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_node__photoalbum';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'title' => array(
          'weight' => '0',
        ),
        'path' => array(
          'weight' => '6',
        ),
        'locations' => array(
          'weight' => '7',
        ),
      ),
      'display' => array(
        'node_gallery_view' => array(
          'activity_stream' => array(
            'weight' => '1',
            'visible' => TRUE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_node__photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_photoalbum';
  $strongarm->value = array();
  $export['menu_options_photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_photoalbum';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_photoalbum';
  $strongarm->value = array(
    0 => 'status',
    1 => 'revision',
  );
  $export['node_options_photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_photoalbum';
  $strongarm->value = '1';
  $export['node_preview_photoalbum'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_photoalbum';
  $strongarm->value = 0;
  $export['node_submitted_photoalbum'] = $strongarm;

  return $export;
}
