<?php

/**
 * A custom action to contact a user with a mail.
 *
 * @return array
 */
function c4m_user_contact_action_info() {
  return array('c4m_user_contact_action' => array(
    'type' => 'user',
    'label' => t('Contact user'),
    'configurable' => TRUE,
    'triggers' => array('any'),
  ));
}

/**
 * Form for the custom 'contact user' action.
 *
 * @param $context
 * @return mixed
 */
function c4m_user_contact_action_form($context) {
  $form['subject'] = array(
    '#type' => 'textfield',
    '#title' => t('Subject'),
    '#default_value' => isset($context['subject']) ? $context['subject'] : '',
    '#maxlength' => '254',
    '#description' => t('The subject of the message.'),
  );
  $form['message'] = array(
    '#type' => 'textarea',
    '#title' => t('Message'),
    '#default_value' => isset($context['message']) ? $context['message'] : '',
    '#cols' => '80',
    '#rows' => '20',
    '#description' => t('The message that should be sent. You may include placeholders like [node:title], [user:name], and [comment:body] to represent data that will be different each time message is sent. Not all placeholders will be available in all contexts.'),
  );
  return $form;
}

/**
 * Validation of the custom 'contact user' form.
 *
 * @param $form
 * @param $form_state
 */
function c4m_user_contact_action_validate($form, $form_state) {
  if (!$form_state['values']['subject'] ) {
    form_set_error('subject', t('You have not chosen any subject.'));
  }
  if (!$form_state['values']['message'] ) {
    form_set_error('subject', t('You have not entered any message.'));
  }
}

/**
 * Submission of the custom 'contact user' form.
 *
 * @param $form
 * @param $form_state
 * @return array
 */
function c4m_user_contact_action_submit($form, $form_state) {
  return array(
    'subject' => $form_state['values']['subject'],
    'message' => $form_state['values']['message'],
  );
}

/**
 * The actual 'contact user' action, which is mailing of a message.
 *
 * @param $user
 * @param $context
 */
function c4m_user_contact_action(&$user, $context) {
  $to = $user->mail;
  $from = variable_get('site_mail', ini_get('sendmail_from'));
  $language = user_preferred_language($user);

  $params = array(
    'subject'   => $context['subject'],
    'body'      => $context['message'],
    'langcode'  => $language->language,
  );

  $message = drupal_mail('c4m_user', 'c4m_user_contact', $to, $language, $params, $from);
  if ($message['result']) {
    watchdog('c4m_user', 'Successfully sent email to %recipient', array('%recipient' => c4m_user_name($user)));
  }
}
