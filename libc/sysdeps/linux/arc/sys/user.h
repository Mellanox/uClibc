/*
 * Copyright (C) 2013 Synopsys, Inc. (www.synopsys.com)
 *
 * Licensed under the LGPL v2.1 or later, see the file COPYING.LIB in this tarball.
 */

#ifndef _SYS_USER_H
#define _SYS_USER_H	1

/* The whole purpose of this file is for GDB and GDB only.  Don't read
   too much into it.  Don't use it for anything other than GDB unless
   you know what you are doing.  */

#define ARC_MAX_HBP_SLOTS 8

struct user {
	unsigned long int	u_dr_value [ARC_MAX_HBP_SLOTS];
	unsigned long int	u_dr_control [ARC_MAX_HBP_SLOTS];
	unsigned long int	u_dr_mask [ARC_MAX_HBP_SLOTS];
};

#endif  /* sys/user.h */
