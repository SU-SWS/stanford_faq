<?php
/**
 * @file
 * stanford_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function stanford_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
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
      'description' => t('Frequently asked questions: the title is the question and the body is the answer. '),
      'has_title' => '1',
      'title_label' => t('Question'),
      'help' => t('This node displays a question and an answer. The title gives the question, and the body field give the answer. The display categories tags allow the FAQ to be displayed on pages tagged with the same content.'),
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
