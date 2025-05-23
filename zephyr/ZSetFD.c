/* This file is part of the Project Athena Zephyr Notification System.
 * It contains source for the ZSetFD function.
 *
 *	Created by:	Robert French
 *
 *	Copyright (c) 1987 by the Massachusetts Institute of Technology.
 *	For copying and distribution information, see the file
 *	"mit-copyright.h".
 */

#include "zephyrlib_internal.h"

Code_t
ZSetFD(int fd)
{
	(void) ZClosePort();

	__Zephyr_fd = fd;
	__Zephyr_open = 0;

	return (ZERR_NONE);
}
