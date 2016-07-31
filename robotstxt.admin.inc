<?php

/**
 * @file
 * Administrative page callbacks for the robots.txt module.
 */

/**
 * Administration settings form.
 */
function robotstxt_admin_settings() {
  $form['robotstxt'] = array(
    '#type' => 'textarea',
    '#title' => t('Contents of robots.txt'),
    '#default_value' => config_get('robotstxt.settings', 'robotstxt'),
    '#cols' => 60,
    '#rows' => 20,
    '#wysiwyg' => FALSE,
  );

  $form['#submit'][] = 'robotstxt_admin_settings_submit';

  $form['actions']['#type'] = 'actions';
  $form['actions']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save configuration'),
  );

  return $form;
}

/**
 * Submit handler robotstxt configuration form.
 */
function robotstxt_admin_settings_submit($form, &$form_state) {
  config('robotstxt.settings')
    ->set('robotstxt', $form_state['values']['robotstxt'])
    ->save();
}
