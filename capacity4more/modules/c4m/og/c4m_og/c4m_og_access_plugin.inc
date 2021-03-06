<?php
/**
 * Access plugin that provides property based access control.
 */
class c4m_og_access_plugin extends views_plugin_access {
  function summary_title() {
    return t('Custom access plugin');
  }

  /**
   * Determine if the current user has access or not.
   *
   * @param $account
   *    The user object.
   * @return bool
   *    TRUE if user has access to the view.
   */
  function access($account) {
    return c4m_og_access();
  }

  function get_access_callback() {
    return array('c4m_og_access', array());
  }
}
