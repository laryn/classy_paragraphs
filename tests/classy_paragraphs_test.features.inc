<?php
/**
 * @file
 * classy_paragraphs_test.features.inc
 */

/**
 * Implements hook_node_info().
 */
function classy_paragraphs_test_node_info() {
  $items = array(
    'cp_landing_page' => array(
      'name' => t('Landing page'),
      'base' => 'node_content',
      'description' => t('Content type used for testing.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}

/**
 * Implements hook_paragraphs_info().
 */
function classy_paragraphs_test_paragraphs_info() {
  $items = array(
    'cp_content' => array(
      'name' => 'Content',
      'bundle' => 'cp_content',
      'locked' => '1',
    ),
  );
  return $items;
}