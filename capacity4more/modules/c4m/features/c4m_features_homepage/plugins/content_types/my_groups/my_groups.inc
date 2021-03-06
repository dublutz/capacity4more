<?php

/**
 * Plugin definition.
 */
$plugin = array(
  'title' => t('My groups'),
  'description' => t('Renders authenticated user\'s groups.'),
  'category' => t('C4M'),
  'hook theme' => 'c4m_features_homepage_my_groups_content_type_theme',
);

/**
 * Render callback.
 */
function c4m_features_homepage_my_groups_content_type_render($subtype, $conf, $args, $context) {
  $my_groups = array();
  $first_groups = '';
  $extra_groups = '';

  // Get All user's groups (We get them sorted by id).
  $groups = og_get_groups_by_user();

  if (empty($groups['node'])) {
    return FALSE;
  }

  // Load node for each group and add the first 2 letters of the group title as a key.
  foreach (node_load_multiple($groups['node']) as $node) {
    $my_groups[strtolower(substr($node->title, 0, 2))] = $node;
  }

  // Sort my groups by key, which will sort them alphabetically (Keys are first 2 letters of each group's title).
  ksort($my_groups, SORT_STRING);

  // Render node views for each group,
  // First 3 groups are displayed (first_groups), the rest are hidden and only shown when user clicks on "Show all" (extra_groups).
  $count = 0;
  foreach ($my_groups as $group) {
    if ($group->type != 'group') {
      continue;
    }
    $node_view = node_view($group, 'teaser');
    if ($count < 3) {
      $first_groups .= drupal_render($node_view);
    }
    else {
      $extra_groups .= drupal_render($node_view);
    }
    $count++;
  }

  $variables = array(
    'first_groups' => $first_groups,
    'extra_groups' => $extra_groups,
    'show_all_link' => $count > 3 ? TRUE : FALSE,
  );

  $block = new stdClass();
  $block->module = 'c4m_features_homepage';
  $block->title = '';
  $block->content = $first_groups ? theme('c4m_features_homepage_my_groups', $variables) : FALSE;
  return $block;
}

/**
 * Edit form.
 */
function c4m_features_homepage_my_groups_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Delegated hook_theme().
 */
function c4m_features_homepage_my_groups_content_type_theme(&$theme, $plugin) {
  $theme['c4m_features_homepage_my_groups'] = array(
    'variables' => array(
      'first_groups' => NULL,
      'extra_groups' => NULL,
      'show_all_link' => NULL,
    ),
    'path' => $plugin['path'],
    'template' => 'my-groups',
  );
}
