<?php

/**
 * Implementation of hook_user_default_roles().
 */
function dlr_groups_user_default_roles() {
  $roles = array();

  // Exported role: member
  $roles['member'] = array(
    'name' => 'member',
  );

  return $roles;
}
