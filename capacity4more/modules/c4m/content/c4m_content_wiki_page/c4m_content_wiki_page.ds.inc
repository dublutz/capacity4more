<?php
/**
 * @file
 * c4m_content_wiki_page.ds.inc
 */

/**
 * Implements hook_ds_field_settings_info().
 */
function c4m_content_wiki_page_ds_field_settings_info() {
  $export = array();

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'comment|comment_node_wiki_page|default';
  $ds_fieldsetting->entity_type = 'comment';
  $ds_fieldsetting->bundle = 'comment_node_wiki_page';
  $ds_fieldsetting->view_mode = 'default';
  $ds_fieldsetting->settings = array(
    'links' => array(
      'weight' => '4',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'post_date' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'ds_post_date_day',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'span',
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'field-name-post-date',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_user_picture' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'c4m_user_author_thumb_image',
    ),
    'c4m_user_first_and_last_name' => array(
      'weight' => '1',
      'label' => 'hidden',
      'format' => 'linked_user',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'span',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'field-name-c4m-user-first-and-last-name',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
  );
  $export['comment|comment_node_wiki_page|default'] = $ds_fieldsetting;

  $ds_fieldsetting = new stdClass();
  $ds_fieldsetting->api_version = 1;
  $ds_fieldsetting->id = 'node|wiki_page|full';
  $ds_fieldsetting->entity_type = 'node';
  $ds_fieldsetting->bundle = 'wiki_page';
  $ds_fieldsetting->view_mode = 'full';
  $ds_fieldsetting->settings = array(
    'title' => array(
      'weight' => '2',
      'label' => 'hidden',
      'format' => 'default',
      'formatter_settings' => array(
        'ft' => array(),
      ),
    ),
    'links' => array(
      'weight' => '6',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'comments' => array(
      'weight' => '10',
      'label' => 'above',
      'format' => 'default',
    ),
    'book_navigation' => array(
      'weight' => '9',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'c4m_user_first_and_last_name' => array(
      'weight' => '3',
      'label' => 'inline',
      'format' => 'linked_user',
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb' => 'Page created by',
          'lb-col' => TRUE,
          'ow' => TRUE,
          'ow-el' => 'span',
          'ow-cl' => 'user-name',
          'ow-def-cl' => FALSE,
          'ow-at' => '',
          'ow-def-at' => FALSE,
        ),
      ),
    ),
    'c4m_ds_creation_date' => array(
      'weight' => '5',
      'label' => 'hidden',
      'format' => 'j F Y, G:i',
    ),
    'c4m_content_wiki_page_navigation' => array(
      'weight' => '0',
      'label' => 'hidden',
      'format' => 'default',
    ),
    'c4m_related_document' => array(
      'formatter_settings' => array(
        'ft' => array(
          'func' => 'theme_ds_field_expert',
          'lb-el' => 'h3',
          'lb-col' => TRUE,
        ),
      ),
    ),
  );
  $export['node|wiki_page|full'] = $ds_fieldsetting;

  return $export;
}

/**
 * Implements hook_ds_layout_settings_info().
 */
function c4m_content_wiki_page_ds_layout_settings_info() {
  $export = array();

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'comment|comment_node_wiki_page|default';
  $ds_layout->entity_type = 'comment';
  $ds_layout->bundle = 'comment_node_wiki_page';
  $ds_layout->view_mode = 'default';
  $ds_layout->layout = 'c4m_ds_2col_icon_left';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'c4m_user_picture',
      ),
      'right' => array(
        1 => 'c4m_user_first_and_last_name',
        2 => 'post_date',
        3 => 'comment_body',
        4 => 'links',
      ),
    ),
    'fields' => array(
      'c4m_user_picture' => 'left',
      'c4m_user_first_and_last_name' => 'right',
      'post_date' => 'right',
      'comment_body' => 'right',
      'links' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
  );
  $export['comment|comment_node_wiki_page|default'] = $ds_layout;

  $ds_layout = new stdClass();
  $ds_layout->api_version = 1;
  $ds_layout->id = 'node|wiki_page|full';
  $ds_layout->entity_type = 'node';
  $ds_layout->bundle = 'wiki_page';
  $ds_layout->view_mode = 'full';
  $ds_layout->layout = 'c4m_ds_4_8_fluid';
  $ds_layout->settings = array(
    'regions' => array(
      'left' => array(
        0 => 'c4m_related_topic',
        1 => 'group_pages',
        2 => 'c4m_content_wiki_page_navigation',
        3 => 'group_details',
        4 => 'og_vocabulary',
        5 => 'c4m_vocab_date',
        7 => 'c4m_vocab_language',
        9 => 'c4m_vocab_geo',
      ),
      'right' => array(
        6 => 'title',
        8 => 'c4m_user_first_and_last_name',
        10 => 'c4m_ds_creation_date',
        11 => 'links',
        12 => 'c4m_body',
        13 => 'c4m_related_document',
        14 => 'book_navigation',
        15 => 'comments',
      ),
    ),
    'fields' => array(
      'c4m_related_topic' => 'left',
      'group_pages' => 'left',
      'c4m_content_wiki_page_navigation' => 'left',
      'group_details' => 'left',
      'og_vocabulary' => 'left',
      'c4m_vocab_date' => 'left',
      'title' => 'right',
      'c4m_vocab_language' => 'left',
      'c4m_user_first_and_last_name' => 'right',
      'c4m_vocab_geo' => 'left',
      'c4m_ds_creation_date' => 'right',
      'links' => 'right',
      'c4m_body' => 'right',
      'c4m_related_document' => 'right',
      'book_navigation' => 'right',
      'comments' => 'right',
    ),
    'classes' => array(),
    'wrappers' => array(
      'left' => 'div',
      'right' => 'div',
    ),
    'layout_wrapper' => 'div',
    'layout_attributes' => '',
    'layout_attributes_merge' => 1,
    'layout_link_attribute' => '',
    'layout_link_custom' => '',
    'hide_page_title' => '1',
    'page_option_title' => '',
  );
  $export['node|wiki_page|full'] = $ds_layout;

  return $export;
}
