<?php
/**
 * @file
 * stanford_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
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
  drupal_alter('node_info', $items);
  return $items;
}
