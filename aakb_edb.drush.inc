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
    'link-event-organizers' => array(
      'description' => dt('Link existing event organizers with event database by name (by setting remote id on the term).'),
      'arguments' => array(),
      'options' => array(),
      'bootstrap' => DRUSH_BOOTSTRAP_DRUPAL_FULL,
    ),
    'list-orphaned-event-organizers' => array(
      'description' => dt('List orphaned event organizers, i.e. organizer terms with no remote id.'),
      'arguments' => array(),
      'options' => array(),
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

/**
 * Link event organizers.
 */
function drush_aakb_edb_link_event_organizers() {
  aakb_edb_link_organizers();
}

/**
 * List orphaned event organizers.
 */
function drush_aakb_edb_list_orphaned_event_organizers() {
  aakb_edb_list_orphaned_event_organizers();
}
