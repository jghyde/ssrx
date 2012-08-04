<?php
/**
 * @file
 * ssrx_user.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ssrx_user_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_bio|user|user|form';
  $field_group->group_name = 'group_bio';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Win 1,000 Points Right Now! Click Here',
    'weight' => '2',
    'children' => array(
      0 => 'field_first_name',
      1 => 'field_last_name',
      2 => 'field_profile_address',
      3 => 'field_profile_birthday',
      4 => 'field_profile_pharmacy',
      5 => 'field_mobile_phone_number',
      6 => 'field_insurance_company',
      7 => 'field_gender',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Win 1,000 Points Right Now! Click Here',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => '',
        'description' => 'Enter these extra fields and you\'ll earn 1,000 points. That\'s 1,000 extra chances to win in our weekly sweepstakes!',
      ),
      'formatter' => 'collapsed',
    ),
  );
  $export['group_bio|user|user|form'] = $field_group;

  return $export;
}
