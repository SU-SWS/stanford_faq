<?php
/**
 * @file
 * stanford_faq.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function stanford_faq_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-faq-field_s_faq_category'
  $field_instances['node-faq-field_s_faq_category'] = array(
    'bundle' => 'faq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'These categories allow the FAQ to display with related data. Select one or more category.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_s_faq_category',
    'label' => 'Display categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 2,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Display categories');
  t('These categories allow the FAQ to display with related data. Select one or more category.');

  return $field_instances;
}
