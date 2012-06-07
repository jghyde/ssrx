<?php
/**
 * @file
 * ssrx_settings.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function ssrx_settings_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_identifier';
  $strongarm->value = 'EUDZ-26878';
  $export['acquia_identifier'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_key';
  $strongarm->value = '5d720ca9f56e1da509952c28b9794305';
  $export['acquia_key'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_boot_last';
  $strongarm->value = 1339104589;
  $export['acquia_spi_boot_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_cron_last';
  $strongarm->value = 1339097370;
  $export['acquia_spi_cron_last'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_spi_module_rebuild';
  $strongarm->value = 1339097370;
  $export['acquia_spi_module_rebuild'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_subscription_data';
  $strongarm->value = array(
    'timestamp' => 1339097370,
    'active' => '1',
    'href' => 'https://network.acquia.com/network/node/1895220',
    'expiration_date' => array(
      'value' => '2013-05-18T00:00:00',
    ),
    'product' => array(
      'value' => '1746214',
      'view' => 'Acquia Network Professional Single Server Site Monthly',
    ),
    'derived_key_salt' => 'eee09a575c794cb4a0ed0a99b2c9aff4',
    'update_service' => '1',
    'search_service_enabled' => 1,
    'update' => array(
      'status' => '5',
      'latest_version' => '7.14.14 (Drupal 7.14 core)',
      'releases' => array(
        '7.14.14 (Drupal 7.14 core)' => array(
          'version' => '7.14.14 (Drupal 7.14 core)',
          'date' => '1336086309',
          'download_link' => 'http://network.acquia.com/files/downloads/acquia-drupal-7.14.14.5808-update.tar.gz',
          'release_link' => 'http://network.acquia.com/downloads',
        ),
      ),
      'recommended' => '7.14.14 (Drupal 7.14 core)',
    ),
    'heartbeat_data' => array(
      'supported' => TRUE,
      'search_service_enabled' => 1,
    ),
  );
  $export['acquia_subscription_data'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'acquia_welcome';
  $strongarm->value = '1';
  $export['acquia_welcome'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'additional_settings__active_tab_blog';
  $strongarm->value = 'edit-submission';
  $export['additional_settings__active_tab_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'seven';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_button_text_login';
  $strongarm->value = 'Login via Facebook';
  $export['fb_button_text_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_button_text_login_block';
  $strongarm->value = 'Connect via Facebook';
  $export['fb_button_text_login_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_button_text_register';
  $strongarm->value = 'Connect via Facebook';
  $export['fb_button_text_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_connect_block_login_ssrx';
  $strongarm->value = array(
    'anon_not_connected' => array(
      'title' => '',
      'body' => array(
        'value' => '<fb:login-button scope="!perms" v="2">Connect</fb:login-button>',
        'format' => 'php_code',
      ),
    ),
    'user_not_connected' => array(
      'title' => '',
      'body' => array(
        'value' => '<fb:login-button scope="!perms" v="2">Connect</fb:login-button>',
        'format' => 'php_code',
      ),
    ),
    'connected' => array(
      'title' => '',
      'body' => array(
        'value' => '<fb:profile-pic uid=!fbu></fb:profile-pic><!--<fb:login-button autologoutlink=true></fb:login-button>-->',
        'format' => 'php_code',
      ),
    ),
  );
  $export['fb_connect_block_login_ssrx'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_connect_primary_label';
  $strongarm->value = 'ssrx';
  $export['fb_connect_primary_label'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_format_username';
  $strongarm->value = 'when_not_theming';
  $export['fb_format_username'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_graph_object_types_blog';
  $strongarm->value = array(
    0 => 'fb_graph_none',
    1 => 'blog',
  );
  $export['fb_graph_object_types_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_language_en';
  $strongarm->value = 'en_US';
  $export['fb_language_en'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_language_override';
  $strongarm->value = 'override';
  $export['fb_language_override'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_reload_append_hash';
  $strongarm->value = 0;
  $export['fb_reload_append_hash'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_secure_urls';
  $strongarm->value = '0';
  $export['fb_secure_urls'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_user_alter_contact';
  $strongarm->value = 1;
  $export['fb_user_alter_contact'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_user_alter_login';
  $strongarm->value = 1;
  $export['fb_user_alter_login'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_user_alter_login_block';
  $strongarm->value = 1;
  $export['fb_user_alter_login_block'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_user_alter_register';
  $strongarm->value = 1;
  $export['fb_user_alter_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_user_check_session';
  $strongarm->value = 1;
  $export['fb_user_check_session'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_user_username_style';
  $strongarm->value = '1';
  $export['fb_user_username_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_use_cookie';
  $strongarm->value = 1;
  $export['fb_use_cookie'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fb_use_session';
  $strongarm->value = 1;
  $export['fb_use_session'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_arrow_1';
  $strongarm->value = 1;
  $export['superfish_arrow_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_bgf_1';
  $strongarm->value = 0;
  $export['superfish_bgf_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_delay_1';
  $strongarm->value = '10000';
  $export['superfish_delay_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_depth_1';
  $strongarm->value = '-1';
  $export['superfish_depth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dfirstlast_1';
  $strongarm->value = 0;
  $export['superfish_dfirstlast_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_dzebra_1';
  $strongarm->value = 0;
  $export['superfish_dzebra_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_firstlast_1';
  $strongarm->value = 1;
  $export['superfish_firstlast_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hid_1';
  $strongarm->value = 1;
  $export['superfish_hid_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hlclass_1';
  $strongarm->value = '';
  $export['superfish_hlclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldescription_1';
  $strongarm->value = 0;
  $export['superfish_hldescription_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldexclude_1';
  $strongarm->value = '';
  $export['superfish_hldexclude_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_hldmenus_1';
  $strongarm->value = '';
  $export['superfish_hldmenus_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemcounter_1';
  $strongarm->value = 1;
  $export['superfish_itemcounter_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemcount_1';
  $strongarm->value = 1;
  $export['superfish_itemcount_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_itemdepth_1';
  $strongarm->value = 1;
  $export['superfish_itemdepth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_liclass_1';
  $strongarm->value = '';
  $export['superfish_liclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_maxwidth_1';
  $strongarm->value = '27';
  $export['superfish_maxwidth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mcdepth_1';
  $strongarm->value = '1';
  $export['superfish_mcdepth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mcexclude_1';
  $strongarm->value = '';
  $export['superfish_mcexclude_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_mclevels_1';
  $strongarm->value = '1';
  $export['superfish_mclevels_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_menu_1';
  $strongarm->value = 'main-menu:0';
  $export['superfish_menu_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_minwidth_1';
  $strongarm->value = '12';
  $export['superfish_minwidth_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_multicolumn_1';
  $strongarm->value = 0;
  $export['superfish_multicolumn_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_name_1';
  $strongarm->value = 'Main Menu Superfish';
  $export['superfish_name_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathclass_1';
  $strongarm->value = 'active-trail';
  $export['superfish_pathclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathcss_1';
  $strongarm->value = '';
  $export['superfish_pathcss_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_pathlevels_1';
  $strongarm->value = '1';
  $export['superfish_pathlevels_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_shadow_1';
  $strongarm->value = 1;
  $export['superfish_shadow_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_slide_1';
  $strongarm->value = 'none';
  $export['superfish_slide_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_speed_1';
  $strongarm->value = 'fast';
  $export['superfish_speed_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_spp_1';
  $strongarm->value = 0;
  $export['superfish_spp_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_style_1';
  $strongarm->value = 'default';
  $export['superfish_style_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_supersubs_1';
  $strongarm->value = 1;
  $export['superfish_supersubs_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchual_1';
  $strongarm->value = '';
  $export['superfish_touchual_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touchua_1';
  $strongarm->value = 0;
  $export['superfish_touchua_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_touch_1';
  $strongarm->value = 0;
  $export['superfish_touch_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_type_1';
  $strongarm->value = 'horizontal';
  $export['superfish_type_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_ulclass_1';
  $strongarm->value = '';
  $export['superfish_ulclass_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wraphlt_1';
  $strongarm->value = '';
  $export['superfish_wraphlt_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wraphl_1';
  $strongarm->value = '';
  $export['superfish_wraphl_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wrapmul_1';
  $strongarm->value = '';
  $export['superfish_wrapmul_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_wrapul_1';
  $strongarm->value = '';
  $export['superfish_wrapul_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'superfish_zebra_1';
  $strongarm->value = 1;
  $export['superfish_zebra_1'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'ssrx';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_ssrx_settings';
  $strongarm->value = array(
    'toggle_logo' => 1,
    'toggle_name' => 0,
    'toggle_slogan' => 0,
    'toggle_node_user_picture' => 1,
    'toggle_comment_user_picture' => 1,
    'toggle_comment_user_verification' => 1,
    'toggle_favicon' => 1,
    'toggle_main_menu' => 0,
    'toggle_secondary_menu' => 0,
    'default_logo' => 0,
    'logo_path' => 'sites/all/themes/ssrx/images/ssrx_logo.png',
    'logo_upload' => '',
    'default_favicon' => 1,
    'favicon_path' => '',
    'favicon_upload' => '',
    'alpha_grid' => 'alpha_default',
    'alpha_responsive' => 0,
    'alpha_viewport' => 1,
    'alpha_viewport_initial_scale' => '1',
    'alpha_viewport_min_scale' => '1',
    'alpha_viewport_max_scale' => '1',
    'alpha_viewport_user_scaleable' => 0,
    'alpha_primary_alpha_default' => 'normal',
    'alpha_layouts_alpha_default_narrow_responsive' => 1,
    'alpha_layouts_alpha_default_narrow_weight' => '1',
    'alpha_layouts_alpha_default_narrow_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_layouts_alpha_default_normal_responsive' => 1,
    'alpha_layouts_alpha_default_normal_weight' => '2',
    'alpha_layouts_alpha_default_normal_media' => 'all and (min-width: 980px) and (min-device-width: 980px), all and (max-device-width: 1024px) and (min-width: 1024px) and (orientation:landscape)',
    'alpha_layouts_alpha_default_wide_responsive' => 1,
    'alpha_layouts_alpha_default_wide_weight' => '3',
    'alpha_layouts_alpha_default_wide_media' => 'all and (min-width: 1220px)',
    'alpha_layouts_alpha_default_fluid_responsive' => 0,
    'alpha_layouts_alpha_default_fluid_weight' => '0',
    'alpha_layouts_alpha_default_fluid_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_primary_alpha_fluid' => 'normal',
    'alpha_layouts_alpha_fluid_normal_responsive' => 0,
    'alpha_layouts_alpha_fluid_normal_weight' => '0',
    'alpha_layouts_alpha_fluid_normal_media' => 'all and (min-width: 740px) and (min-device-width: 740px), (max-device-width: 800px) and (min-width: 740px) and (orientation:landscape)',
    'alpha_libraries' => array(
      'omega_formalize' => 'omega_formalize',
      'omega_mediaqueries' => 'omega_mediaqueries',
      'omega_equalheights' => 0,
    ),
    'alpha_css' => array(
      'alpha-reset.css' => 'alpha-reset.css',
      'alpha-mobile.css' => 'alpha-mobile.css',
      'alpha-alpha.css' => 'alpha-alpha.css',
      'omega-text.css' => 'omega-text.css',
      'omega-branding.css' => 'omega-branding.css',
      'omega-menu.css' => 'omega-menu.css',
      'omega-forms.css' => 'omega-forms.css',
      'omega-visuals.css' => 'omega-visuals.css',
      'global.css' => 'global.css',
    ),
    'alpha_exclude' => array(
      'modules/comment/comment.css' => 0,
      'modules/field/theme/field.css' => 0,
      'modules/node/node.css' => 0,
      'modules/search/search.css' => 0,
      'modules/user/user.css' => 0,
      'sites/all/modules/views/css/views.css' => 0,
      'sites/all/themes/ssrx/css/ssrx.css' => 0,
      'misc/vertical-tabs.css' => 0,
      'modules/aggregator/aggregator.css' => 0,
      'modules/block/block.css' => 0,
      'modules/dblog/dblog.css' => 0,
      'modules/file/file.css' => 0,
      'modules/filter/filter.css' => 0,
      'modules/help/help.css' => 0,
      'modules/menu/menu.css' => 0,
      'modules/openid/openid.css' => 0,
      'modules/profile/profile.css' => 0,
      'modules/statistics/statistics.css' => 0,
      'modules/syslog/syslog.css' => 0,
      'modules/system/admin.css' => 0,
      'modules/system/maintenance.css' => 0,
      'modules/system/system.css' => 0,
      'modules/system/system.admin.css' => 0,
      'modules/system/system.base.css' => 0,
      'modules/system/system.maintenance.css' => 0,
      'modules/system/system.menus.css' => 0,
      'modules/system/system.messages.css' => 0,
      'modules/system/system.theme.css' => 0,
      'modules/taxonomy/taxonomy.css' => 0,
      'modules/tracker/tracker.css' => 0,
      'modules/update/update.css' => 0,
    ),
    'alpha_debug_block_toggle' => 1,
    'alpha_debug_block_active' => 0,
    'alpha_debug_grid_toggle' => 1,
    'alpha_debug_grid_active' => 0,
    'alpha_debug_grid_roles' => array(
      1 => '1',
      2 => '2',
      3 => '3',
    ),
    'alpha_toggle_messages' => 1,
    'alpha_toggle_action_links' => 1,
    'alpha_toggle_tabs' => 1,
    'alpha_toggle_breadcrumb' => 1,
    'alpha_toggle_page_title' => 1,
    'alpha_toggle_feed_icons' => 1,
    'alpha_hidden_title' => 0,
    'alpha_hidden_site_name' => 0,
    'alpha_hidden_site_slogan' => 0,
    'alpha_region_dashboard_main_force' => 0,
    'alpha_region_dashboard_main_zone' => NULL,
    'alpha_region_dashboard_main_prefix' => '0',
    'alpha_region_dashboard_main_columns' => '1',
    'alpha_region_dashboard_main_suffix' => '0',
    'alpha_region_dashboard_main_weight' => '-50',
    'alpha_region_dashboard_main_position' => '0',
    'alpha_region_dashboard_main_css' => '',
    'alpha_region_dashboard_main_equal_height_element' => FALSE,
    'alpha_region_dashboard_main_equal_height_container' => 0,
    'alpha_region_dashboard_inactive_force' => 0,
    'alpha_region_dashboard_inactive_zone' => NULL,
    'alpha_region_dashboard_inactive_prefix' => '0',
    'alpha_region_dashboard_inactive_columns' => '1',
    'alpha_region_dashboard_inactive_suffix' => '0',
    'alpha_region_dashboard_inactive_weight' => '-50',
    'alpha_region_dashboard_inactive_position' => '0',
    'alpha_region_dashboard_inactive_css' => '',
    'alpha_region_dashboard_inactive_equal_height_element' => FALSE,
    'alpha_region_dashboard_inactive_equal_height_container' => 0,
    'alpha_region_dashboard_sidebar_force' => 0,
    'alpha_region_dashboard_sidebar_zone' => NULL,
    'alpha_region_dashboard_sidebar_prefix' => '0',
    'alpha_region_dashboard_sidebar_columns' => '1',
    'alpha_region_dashboard_sidebar_suffix' => '0',
    'alpha_region_dashboard_sidebar_weight' => '-50',
    'alpha_region_dashboard_sidebar_position' => '0',
    'alpha_region_dashboard_sidebar_css' => '',
    'alpha_region_dashboard_sidebar_equal_height_element' => FALSE,
    'alpha_region_dashboard_sidebar_equal_height_container' => 0,
    'alpha_region_user_first_force' => 0,
    'alpha_region_user_first_zone' => NULL,
    'alpha_region_user_first_prefix' => '0',
    'alpha_region_user_first_columns' => '8',
    'alpha_region_user_first_suffix' => '0',
    'alpha_region_user_first_weight' => '1',
    'alpha_region_user_first_position' => '0',
    'alpha_region_user_first_css' => '',
    'alpha_region_user_first_equal_height_element' => FALSE,
    'alpha_region_user_first_equal_height_container' => 0,
    'alpha_zone_user_wrapper' => 1,
    'alpha_zone_user_force' => 0,
    'alpha_zone_user_order' => 0,
    'alpha_zone_user_section' => 'header',
    'alpha_zone_user_weight' => '1',
    'alpha_zone_user_columns' => '12',
    'alpha_zone_user_primary' => NULL,
    'alpha_zone_user_css' => '',
    'alpha_zone_user_wrapper_css' => '',
    'alpha_zone_user_equal_height_container' => 0,
    'alpha_region_branding_force' => 1,
    'alpha_region_branding_zone' => 'user',
    'alpha_region_branding_prefix' => '0',
    'alpha_region_branding_columns' => '3',
    'alpha_region_branding_suffix' => '0',
    'alpha_region_branding_weight' => '-17',
    'alpha_region_branding_position' => '0',
    'alpha_region_branding_css' => '',
    'alpha_region_branding_equal_height_element' => 0,
    'alpha_region_branding_equal_height_container' => 0,
    'alpha_region_user_second_force' => 0,
    'alpha_region_user_second_zone' => 'user',
    'alpha_region_user_second_prefix' => '0',
    'alpha_region_user_second_columns' => '9',
    'alpha_region_user_second_suffix' => '0',
    'alpha_region_user_second_weight' => '2',
    'alpha_region_user_second_position' => '0',
    'alpha_region_user_second_css' => '',
    'alpha_region_user_second_equal_height_element' => 0,
    'alpha_region_user_second_equal_height_container' => 0,
    'alpha_zone_branding_wrapper' => 1,
    'alpha_zone_branding_force' => 0,
    'alpha_zone_branding_order' => 0,
    'alpha_zone_branding_section' => 'header',
    'alpha_zone_branding_weight' => '2',
    'alpha_zone_branding_columns' => '12',
    'alpha_zone_branding_primary' => NULL,
    'alpha_zone_branding_css' => '',
    'alpha_zone_branding_wrapper_css' => '',
    'alpha_zone_branding_equal_height_container' => 0,
    'alpha_zone_menu_wrapper' => 1,
    'alpha_zone_menu_force' => 0,
    'alpha_zone_menu_order' => 0,
    'alpha_zone_menu_section' => 'header',
    'alpha_zone_menu_weight' => '3',
    'alpha_zone_menu_columns' => '12',
    'alpha_zone_menu_primary' => NULL,
    'alpha_zone_menu_css' => '',
    'alpha_zone_menu_wrapper_css' => '',
    'alpha_zone_menu_equal_height_container' => 0,
    'alpha_region_menu_force' => 1,
    'alpha_region_menu_zone' => 'menu',
    'alpha_region_menu_prefix' => '2',
    'alpha_region_menu_columns' => '10',
    'alpha_region_menu_suffix' => '0',
    'alpha_region_menu_weight' => '1',
    'alpha_region_menu_position' => '0',
    'alpha_region_menu_css' => '',
    'alpha_region_menu_equal_height_element' => 0,
    'alpha_region_menu_equal_height_container' => 0,
    'alpha_zone_header_wrapper' => 1,
    'alpha_zone_header_force' => 0,
    'alpha_zone_header_order' => 0,
    'alpha_zone_header_section' => 'header',
    'alpha_zone_header_weight' => '4',
    'alpha_zone_header_columns' => '12',
    'alpha_zone_header_primary' => NULL,
    'alpha_zone_header_css' => '',
    'alpha_zone_header_wrapper_css' => '',
    'alpha_zone_header_equal_height_container' => 0,
    'alpha_region_header_first_force' => 0,
    'alpha_region_header_first_zone' => 'header',
    'alpha_region_header_first_prefix' => '0',
    'alpha_region_header_first_columns' => '6',
    'alpha_region_header_first_suffix' => '0',
    'alpha_region_header_first_weight' => '1',
    'alpha_region_header_first_position' => '0',
    'alpha_region_header_first_css' => '',
    'alpha_region_header_first_equal_height_element' => 0,
    'alpha_region_header_first_equal_height_container' => 0,
    'alpha_region_header_second_force' => 0,
    'alpha_region_header_second_zone' => 'header',
    'alpha_region_header_second_prefix' => '0',
    'alpha_region_header_second_columns' => '6',
    'alpha_region_header_second_suffix' => '0',
    'alpha_region_header_second_weight' => '2',
    'alpha_region_header_second_position' => '0',
    'alpha_region_header_second_css' => '',
    'alpha_region_header_second_equal_height_element' => 0,
    'alpha_region_header_second_equal_height_container' => 0,
    'alpha_zone_preface_wrapper' => 1,
    'alpha_zone_preface_force' => 0,
    'alpha_zone_preface_order' => 0,
    'alpha_zone_preface_section' => 'content',
    'alpha_zone_preface_weight' => '1',
    'alpha_zone_preface_columns' => '12',
    'alpha_zone_preface_primary' => NULL,
    'alpha_zone_preface_css' => '',
    'alpha_zone_preface_wrapper_css' => '',
    'alpha_zone_preface_equal_height_container' => 0,
    'alpha_region_preface_first_force' => 0,
    'alpha_region_preface_first_zone' => 'preface',
    'alpha_region_preface_first_prefix' => '0',
    'alpha_region_preface_first_columns' => '4',
    'alpha_region_preface_first_suffix' => '0',
    'alpha_region_preface_first_weight' => '1',
    'alpha_region_preface_first_position' => '0',
    'alpha_region_preface_first_css' => '',
    'alpha_region_preface_first_equal_height_element' => 0,
    'alpha_region_preface_first_equal_height_container' => 0,
    'alpha_region_preface_second_force' => 0,
    'alpha_region_preface_second_zone' => 'preface',
    'alpha_region_preface_second_prefix' => '0',
    'alpha_region_preface_second_columns' => '4',
    'alpha_region_preface_second_suffix' => '0',
    'alpha_region_preface_second_weight' => '2',
    'alpha_region_preface_second_position' => '0',
    'alpha_region_preface_second_css' => '',
    'alpha_region_preface_second_equal_height_element' => 0,
    'alpha_region_preface_second_equal_height_container' => 0,
    'alpha_region_preface_third_force' => 0,
    'alpha_region_preface_third_zone' => 'preface',
    'alpha_region_preface_third_prefix' => '0',
    'alpha_region_preface_third_columns' => '4',
    'alpha_region_preface_third_suffix' => '0',
    'alpha_region_preface_third_weight' => '3',
    'alpha_region_preface_third_position' => '0',
    'alpha_region_preface_third_css' => '',
    'alpha_region_preface_third_equal_height_element' => 0,
    'alpha_region_preface_third_equal_height_container' => 0,
    'alpha_zone_content_wrapper' => 1,
    'alpha_zone_content_force' => 1,
    'alpha_zone_content_order' => 0,
    'alpha_zone_content_section' => 'content',
    'alpha_zone_content_weight' => '2',
    'alpha_zone_content_columns' => '12',
    'alpha_zone_content_primary' => 'content',
    'alpha_zone_content_css' => '',
    'alpha_zone_content_wrapper_css' => '',
    'alpha_zone_content_equal_height_container' => 0,
    'alpha_region_sidebar_first_force' => 0,
    'alpha_region_sidebar_first_zone' => 'content',
    'alpha_region_sidebar_first_prefix' => '0',
    'alpha_region_sidebar_first_columns' => '3',
    'alpha_region_sidebar_first_suffix' => '0',
    'alpha_region_sidebar_first_weight' => '1',
    'alpha_region_sidebar_first_position' => '0',
    'alpha_region_sidebar_first_css' => '',
    'alpha_region_sidebar_first_equal_height_element' => 0,
    'alpha_region_sidebar_first_equal_height_container' => 0,
    'alpha_region_content_force' => 0,
    'alpha_region_content_zone' => 'content',
    'alpha_region_content_prefix' => '0',
    'alpha_region_content_columns' => '6',
    'alpha_region_content_suffix' => '0',
    'alpha_region_content_weight' => '2',
    'alpha_region_content_position' => '0',
    'alpha_region_content_css' => '',
    'alpha_region_content_equal_height_element' => 0,
    'alpha_region_content_equal_height_container' => 0,
    'alpha_region_sidebar_second_force' => 0,
    'alpha_region_sidebar_second_zone' => 'content',
    'alpha_region_sidebar_second_prefix' => '0',
    'alpha_region_sidebar_second_columns' => '3',
    'alpha_region_sidebar_second_suffix' => '0',
    'alpha_region_sidebar_second_weight' => '3',
    'alpha_region_sidebar_second_position' => '0',
    'alpha_region_sidebar_second_css' => '',
    'alpha_region_sidebar_second_equal_height_element' => 0,
    'alpha_region_sidebar_second_equal_height_container' => 0,
    'alpha_zone_postscript_wrapper' => 1,
    'alpha_zone_postscript_force' => 0,
    'alpha_zone_postscript_order' => 0,
    'alpha_zone_postscript_section' => 'content',
    'alpha_zone_postscript_weight' => '3',
    'alpha_zone_postscript_columns' => '12',
    'alpha_zone_postscript_primary' => NULL,
    'alpha_zone_postscript_css' => '',
    'alpha_zone_postscript_wrapper_css' => '',
    'alpha_zone_postscript_equal_height_container' => 0,
    'alpha_region_postscript_first_force' => 0,
    'alpha_region_postscript_first_zone' => 'postscript',
    'alpha_region_postscript_first_prefix' => '0',
    'alpha_region_postscript_first_columns' => '3',
    'alpha_region_postscript_first_suffix' => '0',
    'alpha_region_postscript_first_weight' => '1',
    'alpha_region_postscript_first_position' => '0',
    'alpha_region_postscript_first_css' => '',
    'alpha_region_postscript_first_equal_height_element' => 0,
    'alpha_region_postscript_first_equal_height_container' => 0,
    'alpha_region_postscript_second_force' => 0,
    'alpha_region_postscript_second_zone' => 'postscript',
    'alpha_region_postscript_second_prefix' => '0',
    'alpha_region_postscript_second_columns' => '3',
    'alpha_region_postscript_second_suffix' => '0',
    'alpha_region_postscript_second_weight' => '2',
    'alpha_region_postscript_second_position' => '0',
    'alpha_region_postscript_second_css' => '',
    'alpha_region_postscript_second_equal_height_element' => 0,
    'alpha_region_postscript_second_equal_height_container' => 0,
    'alpha_region_postscript_third_force' => 0,
    'alpha_region_postscript_third_zone' => 'postscript',
    'alpha_region_postscript_third_prefix' => '0',
    'alpha_region_postscript_third_columns' => '3',
    'alpha_region_postscript_third_suffix' => '0',
    'alpha_region_postscript_third_weight' => '3',
    'alpha_region_postscript_third_position' => '0',
    'alpha_region_postscript_third_css' => '',
    'alpha_region_postscript_third_equal_height_element' => 0,
    'alpha_region_postscript_third_equal_height_container' => 0,
    'alpha_region_postscript_fourth_force' => 0,
    'alpha_region_postscript_fourth_zone' => 'postscript',
    'alpha_region_postscript_fourth_prefix' => '0',
    'alpha_region_postscript_fourth_columns' => '3',
    'alpha_region_postscript_fourth_suffix' => '0',
    'alpha_region_postscript_fourth_weight' => '4',
    'alpha_region_postscript_fourth_position' => '0',
    'alpha_region_postscript_fourth_css' => '',
    'alpha_region_postscript_fourth_equal_height_element' => 0,
    'alpha_region_postscript_fourth_equal_height_container' => 0,
    'alpha_zone_footer_wrapper' => 1,
    'alpha_zone_footer_force' => 0,
    'alpha_zone_footer_order' => 0,
    'alpha_zone_footer_section' => 'footer',
    'alpha_zone_footer_weight' => '1',
    'alpha_zone_footer_columns' => '12',
    'alpha_zone_footer_primary' => NULL,
    'alpha_zone_footer_css' => '',
    'alpha_zone_footer_wrapper_css' => '',
    'alpha_zone_footer_equal_height_container' => 0,
    'alpha_region_footer_third_force' => 0,
    'alpha_region_footer_third_zone' => 'footer',
    'alpha_region_footer_third_prefix' => '0',
    'alpha_region_footer_third_columns' => '12',
    'alpha_region_footer_third_suffix' => '0',
    'alpha_region_footer_third_weight' => '3',
    'alpha_region_footer_third_position' => '0',
    'alpha_region_footer_third_css' => '',
    'alpha_region_footer_third_equal_height_element' => 0,
    'alpha_region_footer_third_equal_height_container' => 0,
    'alpha_region_footer_first_force' => 0,
    'alpha_region_footer_first_zone' => 'footer',
    'alpha_region_footer_first_prefix' => '0',
    'alpha_region_footer_first_columns' => '4',
    'alpha_region_footer_first_suffix' => '0',
    'alpha_region_footer_first_weight' => '1',
    'alpha_region_footer_first_position' => '0',
    'alpha_region_footer_first_css' => '',
    'alpha_region_footer_first_equal_height_element' => 0,
    'alpha_region_footer_first_equal_height_container' => 0,
    'alpha_region_footer_second_force' => 0,
    'alpha_region_footer_second_zone' => 'footer',
    'alpha_region_footer_second_prefix' => '0',
    'alpha_region_footer_second_columns' => '8',
    'alpha_region_footer_second_suffix' => '0',
    'alpha_region_footer_second_weight' => '2',
    'alpha_region_footer_second_position' => '0',
    'alpha_region_footer_second_css' => '',
    'alpha_region_footer_second_equal_height_element' => 0,
    'alpha_region_footer_second_equal_height_container' => 0,
  );
  $export['theme_ssrx_settings'] = $strongarm;

  return $export;
}
