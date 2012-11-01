<?php
/**
 * @file
 * stanford_faq.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function stanford_faq_taxonomy_default_vocabularies() {
  return array(
    'stanford_display_categories' => array(
      'name' => 'Stanford Display Categories',
      'machine_name' => 'stanford_display_categories',
      'description' => 'Taxonomy to group related content for display.',
      'hierarchy' => '0',
      'module' => 'taxonomy',
      'weight' => '0',
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
