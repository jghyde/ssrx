<?php
/**
 * @file
 * ssrx_ads.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function ssrx_ads_default_rules_configuration() {
  $items = array();
  $items['rules_ad_unpublish_expired_ads'] = entity_import('rules_config', '{ "rules_ad_unpublish_expired_ads" : {
      "LABEL" : "Ad: Unpublish Expired Ads",
      "PLUGIN" : "reaction rule",
      "REQUIRES" : [ "views_bulk_operations", "rules" ],
      "ON" : [ "cron" ],
      "DO" : [
        { "views_bulk_operations_action_load_list" : {
            "USING" : { "view" : "ads_to_be_unpublished|default" },
            "PROVIDE" : { "entity_list" : { "entity_list" : "A list of entities" } }
          }
        },
        { "LOOP" : {
            "USING" : { "list" : [ "entity-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [ { "node_unpublish" : { "node" : [ "list-item" ] } } ]
          }
        }
      ]
    }
  }');
  return $items;
}
