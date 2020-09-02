<?php

/**
 *
 * Helper function to determine boolean value
 *
 * @param $value
 * @return int
 */
function wms_import_is_true($value) {
  $valid = array('1','YES','Y');
  if (in_array(strtoupper($value),$valid)) {
    return 1;
  } else {
    return 0;
  }
}

/**
 * Helper function to validate UTF8 String
 *
 * @param $data
 * @return bool
 */
function wms_import_validate_utf8($data){
  foreach($data as $key=>$value) {
    if (!mb_check_encoding($value, 'UTF-8')) {
      return false;
    }
  }
  return true;
}