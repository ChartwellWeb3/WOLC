<?php

/*
 * Implements hook_html_head_alter
 */
function wms_stark_head_alter(&$head_elements) {

  $head_elements['wms_stark'] = array(
    '#type' => 'html_tag',
    '#tag' => 'meta',
    '#attributes' => array('http-equiv' => 'X-UA-Compatible', 'content' => 'WMS-STARK'),
  );
}