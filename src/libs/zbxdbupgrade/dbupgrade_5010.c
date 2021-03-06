/*
** Zabbix
** Copyright (C) 2001-2020 Zabbix SIA
**
** This program is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.
**
** This program is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
** GNU General Public License for more details.
**
** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
**/

#include "common.h"
#include "db.h"
#include "dbupgrade.h"

/*
 * 5.2 development database patches
 */

#ifndef HAVE_SQLITE3

extern unsigned char	program_type;

/*static int	DBpatch_5010000(void)
{
	*** put the first upgrade patch here ***
}*/

#endif

DBPATCH_START(5010)

/* version, duplicates flag, mandatory flag */

/*DBPATCH_ADD(5010000, 0, 1)*/

DBPATCH_END()
