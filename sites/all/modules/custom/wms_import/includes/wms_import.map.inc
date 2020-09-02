<?php

define('WMS_FIELD_DEFAULT', 999);

/**
 * Helper function to return
 * map values
 *
 * Array details:
 * index: column number in CSV
 * title: column title in CSV
 * default: Default value to assign if empty
 * field: Drupal field for mapping
 * key (optional): additional value used during mapping process
 *
 */
function wms_import_map() {
  $map[0]  = array(
    'title'   => 'Title',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_wish_title'
  );
  $map[1]  = array(
    'title'   => 'Action Items',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_action_items'
  );
  $map[2]  = array(
    'title'   => 'Address',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_street_address'
  );
  $map[3]  = array(
    'title'   => 'Age',
    'default' => '0',
    'field'   => 'field_age'
  );
  $map[4]  = array(
    'title'   => 'Anticipated Completion',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_anticipated_completion'
  );
  $map[5]  = array(
    'title'   => 'Apt Suite',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_street_address_line_2_'
  );
  $map[6]  = array(
    'title'   => 'Birthday',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_birthdate'
  );
  $map[7]  = array(
    'title'   => 'City',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_city'
  );
  $map[8]  = array(
    'title'   => 'Community Name',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_community_name_if_applicab'
  );
  $map[9]  = array(
    'title'   => 'Conficted of Crime',
    'default' => 'no',
    'field'   => 'field_have_you_ever_been_convict'
  );
  $map[10] = array(
    'title'   => 'Conviction Details',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_conviction_comments'
  );
  $map[11] = array(
    'title'   => 'Date Granted',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_date_granted'
  );
  $map[12] = array(
    'title'   => 'Date Recvd',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_date_received'
  );
  $map[13] = array(
    'title'   => 'Email',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_email'
  );
  $map[14] = array(
    'title'   => 'Gender',
    'default' => 'none',
    'field'   => 'field_gender'
  );
  $map[15] = array(
    'title'   => 'Additional Not Granting/ DNQ Information',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_additional_not_granting_dn'
  );
  $map[16] = array(
    'title'   => 'Impairment Details',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_if_yes_please_describe_wha'
  );
  $map[17] = array(
    'title'   => 'Impairments',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_are_there_any_physical_or_'
  );
  $map[18] = array(
    'title'   => 'Interests / Comm. Service',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_what_are_some_of_your_inte'
  );
  $map[19] = array(
    'title'   => 'Interview',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_interview_'
  );
  $map[20] = array(
    'title'   => 'Is Legal',
    'default' => 'yes',
    'field'   => 'field_are_you_a_legal_resident_o'
  );
  $map[21] = array(
    'title'   => 'Nom. Address',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_nom_street_address'
  );
  $map[22] = array(
    'title'   => 'Nom. City',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_nom_city'
  );
  $map[23] = array(
    'title'   => 'Nom. Email',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_nominator_email'
  );
  $map[24] = array(
    'title'   => 'Nom. Phone',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_nominator_phone_number'
  );
  $map[25] = array(
    'title'   => 'Nom. Relation to Senior',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_relationship_to_applicant'
  );
  $map[26] = array(
    'title'   => 'Nom. St',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_nom_state'
  );
  $map[27] = array(
    'title'   => 'Nom. Zip',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_nom_zip'
  );
  $map[28] = array(
    'title'   => 'Nominator Name',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_nominator_name'
  );
  $map[29] = array(
    'title'   => 'Not Granting Letter Sent',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_not_granting_dnq_letter_se'
  );
  $map[30] = array(
    'title'   => 'Occupations',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_what_were_your_past_occupa'
  );
  $map[31] = array(
    'title'   => 'P.O.C.',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_p_o_c_'
  );
  $map[32] = array(
    'title'   => 'Phone',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_phone_number'
  );
  $map[33] = array(
    'title'   => 'Reactivation Date',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_reactivation_date'
  );
  $map[34] = array(
    'title'   => 'Scheduled',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_date_scheduled'
  );
  $map[35] = array(
    'title'   => 'First Name',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_name',
    'key'     => 'given'
  );
  $map[36] = array(
    'title'   => 'Last Name',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_name',
    'key'     => 'family'
  );
  $map[37] = array(
    'title'   => 'State',
    'default' => 'none',
    'field'   => 'field_state'
  );
  $map[38] = array(
    'title'   => 'State or Country Granted',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_state_or_country_granted'
  );
  $map[39] = array(
    'title'   => 'Status',
    'default' => 'other',
    'field'   => 'field_status'
  );
  $map[40] = array(
    'title'   => 'Veteran',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_are_you_a_military_veteran'
  );
  $map[41] = array(
    'title'   => 'Wish Category',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_wish_category'
  );
  $map[42] = array(
    'title'   => 'Wish Code',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_wish_code'
  );
  $map[43] = array(
    'title'   => 'Wish Experience',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_legacy_wish_description'
  );
  $map[44] = array(
    'title'   => 'Wish History',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_what_prompted_this_wish_'
  );
  $map[45] = array(
    'title'   => 'Wish Impact',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_describe_any_mental_emotio'
  );
  $map[46] = array(
    'title'   => 'Wish Meaning',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_what_makes_this_wish_meani'
  );
  $map[47] = array(
    'title'   => 'Wish Statement',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_wish_statement'
  );
  $map[48] = array(
    'title' => 'Zip',
    'default' => WMS_FIELD_DEFAULT,
    'field' => 'field_zip'
  );
  $map[49] = array(
    'title'   => 'Brookdale?',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_brookdale_'
  );
  $map[50] = array(
    'title'   => 'Companion for Wish',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_companion_for_wish'
  );
  $map[51] = array(
    'title'   => 'Photographer',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_photographer'
  );
  $map[52] = array(
    'title'   => 'Photographer/Videographer Details & Contact Info',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_photographer_videographer_'
  );
  $map[53] = array(
    'title'   => 'Reason for Not Granting',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_reason_for_not_granting'
  );
  $map[54] = array(
    'title'   => 'Sponsor?',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_sponor_'
  );
  $map[55] = array(
    'title'   => 'Wish Merit / Hurdles',
    'default' => WMS_FIELD_DEFAULT,
    'field'   => 'field_why_are_you_unable_to_fulf'
  );

  return $map;
}
