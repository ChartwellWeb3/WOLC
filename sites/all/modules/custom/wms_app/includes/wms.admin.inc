<?php

/**
 * System form for custom WMS settings
 */
function wms_app_admin_form(){
  $form = array();

  $default_pre_questions = '<p>Before we move forward with a wish, we would like to try and get to know you. Please take the time to tell us a little bit about yourself.Nominators: <strong>Please remember that all questions refer to the senior you are nominating.</strong></p>';
  $default_pre_submit = '<p>By submitting this Wish, I acknowledge that acceptance of this application by Wish of a Lifetime (WOL) does not constitute a commitment by WOL to fulfill my wish request. If WOL determines that this wish should enter the next stage of the wish process, a WOL representative will contact me for more information. I understand that this contact also does not constitute a commitment to grant my wish. Furthermore, I certify that I meet all qualifications for eligibility, and declare that all of the information given by me in this application is true to the best of my knowledge, and I agree to inform WOL in a timely manner should any information provided in this application change.</p>';
  $default_submission_success = '<p>Thank you for taking the time to submit your wish. The WOL Wish Team will review your application for qualification, and get back to you with either a decision regarding your wish or a request for more information in the next 2-4 weeks. If you would like to check on the status of your wish please email info@seniorwish.org or call 303.954.9144.</p>';
  $default_pre_questions_fr = '';
  $default_pre_submit_fr = '';
  $default_submission_success_fr = '';
  
  $form['wms_pre_question_text'] = array(
    '#type' => 'textarea',
    '#title' => t('Pre-Question Text'),
    '#default_value' => variable_get('wms_pre_question_text', $default_pre_questions),
    '#description' => t('This text will be displayed before "What were your past occupations, if any?" (field_what_were_your_past_occupa) on the Wish Application form'),
  );
  
    $form['wms_pre_question_text_fr'] = array(
    '#type' => 'textarea',
    '#title' => t('French Pre-Question Text'),
    '#default_value' => variable_get('wms_pre_question_text_fr', $default_pre_questions_fr),
    '#description' => t('This text will be displayed before "What were your past occupations, if any?" (field_what_were_your_past_occupa) on the French Wish Application form'),
  );

  $form['wms_pre_submit_text'] = array(
    '#type' => 'textarea',
    '#title' => t('Pre-Submit Text'),
    '#default_value' => variable_get('wms_pre_submit_text', $default_pre_submit),
    '#description' => t('This text will be displayed before submit button on the Wish Application form'),
  );
  
  $form['wms_pre_submit_text_fr'] = array(
    '#type' => 'textarea',
    '#title' => t('French Pre-Submit Text'),
    '#default_value' => variable_get('wms_pre_submit_text_fr', $default_pre_submit_fr),
    '#description' => t('This text will be displayed before submit button on the French Wish Application form'),
  );

  $form['wms_submission_success_text'] = array(
    '#type' => 'textarea',
    '#title' => t('Submission Success Text'),
    '#default_value' => variable_get('wms_submission_success_text', $default_submission_success),
    '#description' => t('This text will be displayed upon successful submission of the Wish Application form.'),
  );
  
    $form['wms_submission_success_text_fr'] = array(
    '#type' => 'textarea',
    '#title' => t('French Submission Success Text'),
    '#default_value' => variable_get('wms_submission_success_text_fr', $default_submission_success_fr),
    '#description' => t('This text will be displayed upon successful submission of the French Wish Application form.'),
  );

  return system_settings_form($form);
}