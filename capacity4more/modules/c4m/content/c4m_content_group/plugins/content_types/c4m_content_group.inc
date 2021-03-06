<?php

/**
 * Plugin definition.
 */
$plugin = array(
  'title' => t('Content group details'),
  'description' => t('Renders content group details.'),
  'category' => t('C4M'),
  'render callback' => 'c4m_content_group_details_render',
);
/**
 * Run time rendering of the body of the content type.
 *
 * Render group details.
 *
 * @return stdClass
 */
function c4m_content_group_details_render() {
  // Add custom JavaScript for some behaviour on the group details pane.
  drupal_add_js(drupal_get_path('module', 'c4m_content_group') . '/js/group-details.js');
  $block = new stdClass();
  $block->content = c4m_content_group_details();
  $block->title = t('About the group');
  $block->id = 'group_details';

  return $block;
}

/**
 * Helper function to render group details.
 * @return string
 */
function c4m_content_group_details() {
  // Retrieve current group.
  $node = c4m_og_current_group();

  // Render it with our custom c4m_dashboard view mode.
  $node_view = node_view($node, 'c4m_dashboard');
  return drupal_render($node_view);
}