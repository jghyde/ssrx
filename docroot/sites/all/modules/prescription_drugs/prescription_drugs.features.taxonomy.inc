<?php
/**
 * @file
 * prescription_drugs.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function prescription_drugs_taxonomy_default_vocabularies() {
  return array(
    'drug_dosage' => array(
      'name' => 'Drug Dosage',
      'machine_name' => 'drug_dosage',
      'description' => 'Prescription drug dosage, such as 500mg, 1000mg, etc',
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
    'drug_format' => array(
      'name' => 'Drug Format',
      'machine_name' => 'drug_format',
      'description' => 'Prescription drug formats, such as pill, capsule, suspension, etc',
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
