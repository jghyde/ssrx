<?php
/**
 * @file
 * ssrx_context.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ssrx_context_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all';
  $context->description = 'All Pages Context';
  $context->tag = 'All Pages';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'system-help' => array(
          'module' => 'system',
          'delta' => 'help',
          'region' => 'content',
          'weight' => '0',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '2',
        ),
        'fb_connect-login_ssrx' => array(
          'module' => 'fb_connect',
          'delta' => 'login_ssrx',
          'region' => 'user_second',
          'weight' => '-10',
        ),
        'superfish-1' => array(
          'module' => 'superfish',
          'delta' => 1,
          'region' => 'menu',
          'weight' => '-10',
        ),
        'views-recent_blog_posts-block' => array(
          'module' => 'views',
          'delta' => 'recent_blog_posts-block',
          'region' => 'footer_first',
          'weight' => '-10',
        ),
        'block-1' => array(
          'module' => 'block',
          'delta' => 1,
          'region' => 'footer_second',
          'weight' => '-25',
        ),
        'menu-menu-about-simply-smarter-rx' => array(
          'module' => 'menu',
          'delta' => 'menu-about-simply-smarter-rx',
          'region' => 'footer_second',
          'weight' => '-24',
        ),
        'menu-menu-report-a-price' => array(
          'module' => 'menu',
          'delta' => 'menu-report-a-price',
          'region' => 'footer_second',
          'weight' => '-23',
        ),
        'menu-menu-find-urgent-care' => array(
          'module' => 'menu',
          'delta' => 'menu-find-urgent-care',
          'region' => 'footer_second',
          'weight' => '-22',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'footer_second',
          'weight' => '-21',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => 3,
          'region' => 'footer_third',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All Pages');
  t('All Pages Context');
  $export['all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'doctors';
  $context->description = 'The doctors section';
  $context->tag = 'Doctors';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'doctors' => 'doctors',
        'doctors/*' => 'doctors/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-doctors-page' => array(
          'module' => 'views',
          'delta' => '-exp-doctors-page',
          'region' => 'header_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Doctors');
  t('The doctors section');
  $export['doctors'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = 'All context for the home page only';
  $context->tag = 'Home Page';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'ssrxbrag-ssrx_brag' => array(
          'module' => 'ssrxbrag',
          'delta' => 'ssrx_brag',
          'region' => 'content',
          'weight' => '-26',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('All context for the home page only');
  t('Home Page');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pharmacies';
  $context->description = 'the phamacy section';
  $context->tag = 'pharmacies';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'pharmacies' => 'pharmacies',
        'pharmacies/*' => 'pharmacies/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-pharmacies-page' => array(
          'module' => 'views',
          'delta' => '-exp-pharmacies-page',
          'region' => 'header_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('pharmacies');
  t('the phamacy section');
  $export['pharmacies'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'pharmacy_home';
  $context->description = 'Add blocks to the /pharmacies home page';
  $context->tag = 'pharmacies';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'pharmacies' => 'pharmacies',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-pharmacies-block_1' => array(
          'module' => 'views',
          'delta' => 'pharmacies-block_1',
          'region' => 'preface_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add blocks to the /pharmacies home page');
  t('pharmacies');
  $export['pharmacy_home'] = $context;

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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_page_no_facets';
  $context->description = 'Search page, non-faceted version';
  $context->tag = 'Prescriptions';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'prescription_search:page' => 'prescription_search:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-prescription_search-page' => array(
          'module' => 'views',
          'delta' => '-exp-prescription_search-page',
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
  t('Search page, non-faceted version');
  $export['search_page_no_facets'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'search_prescription_prices';
  $context->description = 'Search page, auto suggest and location filters only';
  $context->tag = 'Prescriptions';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
        '~doctors' => '~doctors',
        '~doctors/*' => '~doctors/*',
        '~pharmacies' => '~pharmacies',
        '~pharmacies/*' => '~pharmacies/*',
        '~urgent' => '~urgent',
        '~urgent/*' => '~urgent/*',
        '~user' => '~user',
        '~user/*' => '~user/*',
      ),
    ),
    'views' => array(
      'values' => array(
        'prescription_price_search:page' => 'prescription_price_search:page',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-dbe358e271dff7e8cc31e9b06b91858b' => array(
          'module' => 'views',
          'delta' => 'dbe358e271dff7e8cc31e9b06b91858b',
          'region' => 'header_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Prescriptions');
  t('Search page, auto suggest and location filters only');
  $export['search_prescription_prices'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'urgent';
  $context->description = 'Urgent care context';
  $context->tag = 'urgent';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'urgent' => 'urgent',
        'urgent/*' => 'urgent/*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views--exp-urgent_care-page' => array(
          'module' => 'views',
          'delta' => '-exp-urgent_care-page',
          'region' => 'header_first',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Urgent care context');
  t('urgent');
  $export['urgent'] = $context;

  return $export;
}
