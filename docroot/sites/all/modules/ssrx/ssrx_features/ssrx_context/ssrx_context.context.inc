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

  return $export;
}
