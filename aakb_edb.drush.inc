<?php
/**
 * @file
 * This file implements support for drush into the module.
 *
 * Adds support to generate the colors css file after a theme update.
 */

/**
 * Implements hook_drush_command().
 */
function aakb_edb_drush_command() {
  return array(
    'sync-event-organizer' => array(
      'description' => dt('Synchronize event organizers from event database.'),
      'arguments' => array(),
      'options' => array(),
      'aliases' => array('sync-eo'),
      'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    ),
  );
}

/**
 * Synchronize event organizers.
 */
function drush_aakb_edb_sync_event_organizer() {
  aakb_edb_sync_organizer();
}
