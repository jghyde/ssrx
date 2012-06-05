<?php
/**
 * @file
 * prescription_drugs.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function prescription_drugs_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  list($module, $api) = func_get_args();
  if ($module == "corresponding_node_references" && $api == "default_corresponding_node_references_presets") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "facetapi" && $api == "facetapi_defaults") {
    return array("version" => "1");
  }
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function prescription_drugs_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function prescription_drugs_node_info() {
  $items = array(
    'drug' => array(
      'name' => t('Drug'),
      'base' => 'node_content',
      'description' => t('A prescription drug, such as Xanax, Oxycodone, etc. '),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
    'drug_price' => array(
      'name' => t('Drug Price'),
      'base' => 'node_content',
      'description' => t('A specific instance of a reported price for a drug.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pharmacy' => array(
      'name' => t('Pharmacy'),
      'base' => 'node_content',
      'description' => t('A physical pharmacy location.'),
      'has_title' => '1',
      'title_label' => t('Name'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_default_search_api_index().
 */
function prescription_drugs_default_search_api_index() {
  $items = array();
  $items['prescription_drug'] = entity_import('search_api_index', '{
    "name" : "Prescription Drug",
    "machine_name" : "prescription_drug",
    "description" : null,
    "server" : "database",
    "item_type" : "node",
    "options" : {
      "index_directly" : 0,
      "cron_limit" : "50",
      "fields" : {
        "type" : { "type" : "string" },
        "field_equivalent" : { "type" : "integer", "entity_type" : "node" },
        "field_brand_or_generic_" : { "type" : "boolean" },
        "field_drug" : { "type" : "integer", "entity_type" : "node" },
        "field_pharmacy" : { "type" : "integer", "entity_type" : "node" },
        "field_dosage" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_format" : { "type" : "integer", "entity_type" : "taxonomy_term" },
        "field_quantity" : { "type" : "integer" },
        "field_price" : { "type" : "decimal" },
        "search_api_language" : { "type" : "string" }
      },
      "data_alter_callbacks" : {
        "search_api_alter_bundle_filter" : {
          "status" : 0,
          "weight" : "-10",
          "settings" : { "default" : "1", "bundles" : [] }
        },
        "search_api_alter_node_access" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_hierarchy" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_alter_add_aggregation" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_url" : { "status" : 0, "weight" : "0", "settings" : [] },
        "search_api_alter_add_viewed_entity" : { "status" : 0, "weight" : "0", "settings" : { "mode" : "full" } }
      },
      "processors" : {
        "search_api_case_ignore" : { "status" : 0, "weight" : "0", "settings" : { "fields" : [] } },
        "search_api_html_filter" : {
          "status" : 0,
          "weight" : "10",
          "settings" : {
            "fields" : [],
            "title" : 0,
            "alt" : 1,
            "tags" : "h1 = 5\\r\\nh2 = 3\\r\\nh3 = 2\\r\\nstrong = 2\\r\\nb = 2\\r\\nem = 1.5\\r\\nu = 1.5"
          }
        },
        "search_api_tokenizer" : {
          "status" : 0,
          "weight" : "20",
          "settings" : {
            "fields" : [],
            "spaces" : "[^\\\\p{L}\\\\p{N}^\\u0027]",
            "ignorable" : "[-]"
          }
        },
        "search_api_stopwords" : {
          "status" : 0,
          "weight" : "30",
          "settings" : {
            "fields" : [],
            "file" : "",
            "stopwords" : "but\\r\\ndid\\r\\nthe this that those\\r\\netc"
          }
        }
      },
      "additional fields" : { "field_pharmacy" : "field_pharmacy" }
    },
    "enabled" : "1",
    "read_only" : "0",
    "rdf_mapping" : []
  }');
  return $items;
}

/**
 * Implements hook_default_search_api_server().
 */
function prescription_drugs_default_search_api_server() {
  $items = array();
  $items['database'] = entity_import('search_api_server', '{
    "name" : "Database",
    "machine_name" : "database",
    "description" : "",
    "class" : "search_api_db_service",
    "options" : {
      "database" : "default:default",
      "min_chars" : "1",
      "indexes" : { "prescription_drug" : {
          "type" : {
            "table" : "search_api_db_prescription_drug_type",
            "type" : "string",
            "boost" : "1.0"
          },
          "field_equivalent" : {
            "table" : "search_api_db_prescription_drug_field_equivalent",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_brand_or_generic_" : {
            "table" : "search_api_db_prescription_drug_field_brand_or_generic_",
            "type" : "boolean",
            "boost" : "1.0"
          },
          "field_drug" : {
            "table" : "search_api_db_prescription_drug_field_drug",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_pharmacy" : {
            "table" : "search_api_db_prescription_drug_field_pharmacy",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_dosage" : {
            "table" : "search_api_db_prescription_drug_field_dosage",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_format" : {
            "table" : "search_api_db_prescription_drug_field_format",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_quantity" : {
            "table" : "search_api_db_prescription_drug_field_quantity",
            "type" : "integer",
            "boost" : "1.0"
          },
          "field_price" : {
            "table" : "search_api_db_prescription_drug_field_price",
            "type" : "decimal",
            "boost" : "1.0"
          },
          "search_api_language" : {
            "table" : "search_api_db_prescription_drug_search_api_language",
            "type" : "string",
            "boost" : "1.0"
          }
        }
      }
    },
    "enabled" : "1",
    "rdf_mapping" : []
  }');
  return $items;
}
