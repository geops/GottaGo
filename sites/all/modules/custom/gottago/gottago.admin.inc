<?php

/**
 * @file
 *  Admin callbacks.
 */

/**
 * Form constructor for the GottaGo API settings form.
 */
function gottago_admin() {
  $form['gottago_stationboard_url'] = array(
    '#type' => 'textfield',
    '#title' => t('Stationboard API URL'),
    '#description' => t('The API URL of the stationboard, like: http://transport.opendata.ch/api.php/v1/stationboard'),
    '#default_value' => variable_get('gottago_stationboard_url', 'http://transport.opendata.ch/api.php/v1/stationboard'),
  );
  $form['gottago_go_status_timeframe'] = array(
    '#type' => 'textfield',
    '#title' => t('Go status timeframe'),
    '#description' => t('The number of seconds used for the Go status.'),
    '#default_value' => variable_get('gottago_go_status_timeframe', 60),
  );
  $form['gottago_no_go_status_timeframe'] = array(
    '#type' => 'textfield',
    '#title' => t('No Go status timeframe'),
    '#description' => t('The number of seconds used for the No Go status.'),
    '#default_value' => variable_get('gottago_no_go_status_timeframe', 30),
  );
  $form['gottago_refresh_timeframe'] = array(
    '#type' => 'textfield',
    '#title' => t('Next refresh timeframe'),
    '#description' => t('The number of seconds used for the Next refresh timeframe (the number of seconds before the second next go).'),
    '#default_value' => variable_get('gottago_refresh_timeframe', 60),
  );
  return system_settings_form($form);
}