<?php
/**
 * @file
 * ssrx_doctors.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function ssrx_doctors_taxonomy_default_vocabularies() {
  return array(
    'doctor_specialty' => array(
      'name' => 'Doctor Specialty',
      'machine_name' => 'doctor_specialty',
      'description' => 'The specialty of the doctor',
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
