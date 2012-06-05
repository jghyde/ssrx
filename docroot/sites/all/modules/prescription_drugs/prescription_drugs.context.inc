<?php
/**
 * @file
 * prescription_drugs.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function prescription_drugs_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_page';
  $context->description = 'Prescriptions Search Page';
  $context->tag = 'Prescriptions';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'prescriptions_search:page' => 'prescriptions_search:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'facetapi-XK6IO2LwfUWFVvTvRmFZNnAX0FqNqZGW' => array(
          'module' => 'facetapi',
          'delta' => 'XK6IO2LwfUWFVvTvRmFZNnAX0FqNqZGW',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-ntS505RV873MVX1FcKAPZzj2Xouiwq5s' => array(
          'module' => 'facetapi',
          'delta' => 'ntS505RV873MVX1FcKAPZzj2Xouiwq5s',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-LQ1AaQs1ecEMHb12h0Ted0vn0EiwfKm8' => array(
          'module' => 'facetapi',
          'delta' => 'LQ1AaQs1ecEMHb12h0Ted0vn0EiwfKm8',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
        'facetapi-BaGdWGhrD7xNvv08W6nc0Cb8y5For9fV' => array(
          'module' => 'facetapi',
          'delta' => 'BaGdWGhrD7xNvv08W6nc0Cb8y5For9fV',
          'region' => 'sidebar_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Prescriptions');
  t('Prescriptions Search Page');
  $export['search_page'] = $context;

  return $export;
}
