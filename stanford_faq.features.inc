<?php
/**
 * @file
 * stanford_faq.features.inc
 */

/**
 * Implements hook_views_api().
 */
function stanford_faq_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function stanford_faq_node_info() {
  $items = array(
    'stanford_faq' => array(
      'name' => t('Stanford FAQ'),
      'base' => 'node_content',
      'description' => t('Frequently asked questions, title is the question, body is the answer. '),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
