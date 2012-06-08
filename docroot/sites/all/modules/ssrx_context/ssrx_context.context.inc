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
          'weight' => '-10',
        ),
        'system-main' => array(
          'module' => 'system',
          'delta' => 'main',
          'region' => 'content',
          'weight' => '-10',
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
          'weight' => '-18',
        ),
        'menu-menu-search-for-meds' => array(
          'module' => 'menu',
          'delta' => 'menu-search-for-meds',
          'region' => 'footer_second',
          'weight' => '-17',
        ),
        'menu-menu-find-pharmacies' => array(
          'module' => 'menu',
          'delta' => 'menu-find-pharmacies',
          'region' => 'footer_second',
          'weight' => '-16',
        ),
        'menu-menu-about-simply-smarter-rx' => array(
          'module' => 'menu',
          'delta' => 'menu-about-simply-smarter-rx',
          'region' => 'footer_second',
          'weight' => '-15',
        ),
        'menu-menu-find-a-doctor' => array(
          'module' => 'menu',
          'delta' => 'menu-find-a-doctor',
          'region' => 'footer_second',
          'weight' => '-14',
        ),
        'menu-menu-find-urgent-care' => array(
          'module' => 'menu',
          'delta' => 'menu-find-urgent-care',
          'region' => 'footer_second',
          'weight' => '-13',
        ),
        'block-2' => array(
          'module' => 'block',
          'delta' => 2,
          'region' => 'footer_second',
          'weight' => '-12',
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

  return $export;
}
