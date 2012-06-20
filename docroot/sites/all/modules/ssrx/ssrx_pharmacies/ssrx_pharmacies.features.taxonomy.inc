<?php
/**
 * @file
 * ssrx_pharmacies.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ssrx_pharmacies_taxonomy_default_vocabularies() {
  return array(
    'pharmacy_chain' => array(
      'name' => 'Pharmacy Chain',
      'machine_name' => 'pharmacy_chain',
      'description' => 'Pharmacy Chain such as Costco, Sam\'s Club, or Walgreen\'s',
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
