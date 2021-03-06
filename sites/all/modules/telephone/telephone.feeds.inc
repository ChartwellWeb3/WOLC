<?php
/**
 * @file
 * Implements Feeds support for telephone fields.
 */
/**
 * Implements hook_feeds_processor_targets_alter().
 *
 * @see FeedsNodeProcessor::getMappingTargets().
 */
function telephone_feeds_processor_targets_alter(&$targets, $entity_type, $bundle_name) {
    foreach (field_info_instances($entity_type, $bundle_name) as $name => $instance) {

        $info = field_info_field($name);
        if ($info['type'] == 'telephone') {

            $targets[$name] = array(
                'name' => check_plain($instance['label']),
                'callback' => 'telephone_feeds_set_target',
                'description' => t('The @label field of the node.', array('@label' => $instance['label'])),
              );
          }
  }
}
/**
 * Callback for mapping. Here is where the actual mapping happens.
 *
 * When the callback is invoked, $target contains the name of the field the
 * user has decided to map to and $value contains the value of the feed item
 * element the user has picked as a source.
 */
function telephone_feeds_set_target($source, $entity, $target, $value) {
    if (empty($value)) {
        return;
  }
  // Handle non-multiple value fields.
  if (!is_array($value)) {
        $value = array($value);
      }
  // Iterate over all values.
  $i = 0;
  $info = field_info_field($target);
  $field_name =  $target;
  foreach ($value as $v) {
        if (empty($v)) {
            continue;
    }
    if (!is_array($v) && !is_object($v)) {
            $field[LANGUAGE_NONE][$i]['value'] = $v;
          }
    if ($info['cardinality'] == 1) {
            break;
    }
    $i++;
  }
  $entity->{$field_name} = $field;
}
