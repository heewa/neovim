#ifndef NVIM_OS_ACL_H
#define NVIM_OS_ACL_H

#include "nvim/vim.h"

typedef void *vim_acl_T;

vim_acl_T os_get_acl(char_u *fname);

void os_set_acl(char_u *fname, vim_acl_T aclent);

void os_free_acl(vim_acl_T aclent);

#endif  // NVIM_OS_ACL_H
