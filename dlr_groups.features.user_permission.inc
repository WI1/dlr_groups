<?php

/**
 * Implementation of hook_user_default_permissions().
 */
function dlr_groups_user_default_permissions() {
  $permissions = array();

  // Exported permission: administer organic groups
  $permissions['administer organic groups'] = array(
    'name' => 'administer organic groups',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: create focusgroup content
  $permissions['create focusgroup content'] = array(
    'name' => 'create focusgroup content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'domain admin',
    ),
  );

  // Exported permission: delete any focusgroup content
  $permissions['delete any focusgroup content'] = array(
    'name' => 'delete any focusgroup content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete any group content
  $permissions['delete any group content'] = array(
    'name' => 'delete any group content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: delete own focusgroup content
  $permissions['delete own focusgroup content'] = array(
    'name' => 'delete own focusgroup content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'domain admin',
      '2' => 'manager',
      '3' => 'member',
    ),
  );

  // Exported permission: edit any focusgroup content
  $permissions['edit any focusgroup content'] = array(
    'name' => 'edit any focusgroup content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit any group content
  $permissions['edit any group content'] = array(
    'name' => 'edit any group content',
    'roles' => array(
      '0' => 'administrator',
    ),
  );

  // Exported permission: edit own focusgroup content
  $permissions['edit own focusgroup content'] = array(
    'name' => 'edit own focusgroup content',
    'roles' => array(
      '0' => 'administrator',
      '1' => 'domain admin',
      '2' => 'manager',
      '3' => 'member',
    ),
  );

  // Exported permission: override group default role
  $permissions['override group default role'] = array(
    'name' => 'override group default role',
    'roles' => array(),
  );

  return $permissions;
}
