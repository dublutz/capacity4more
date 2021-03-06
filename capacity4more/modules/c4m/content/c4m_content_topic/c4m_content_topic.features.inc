<?php
/**
 * @file
 * c4m_content_topic.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function c4m_content_topic_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function c4m_content_topic_node_info() {
  $items = array(
    'topic' => array(
      'name' => t('Topic'),
      'base' => 'node_content',
      'description' => t('Add a topic so content can relates itself to it. Topics are used to link related content. They are also used so that users can indicate their interests and their expertise.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
