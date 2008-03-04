/*
 * This file is part of cparser.
 * Copyright (C) 2007-2008 Matthias Braun <matze@braunis.de>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */
#ifndef SYMBOL_T_H
#define SYMBOL_T_H

#include <stdbool.h>
#include "ast.h"
#include "token_t.h"

struct pp_definition {
	source_position_t  source_position;
	bool               expanding;
	token_t            replacement_list[];
};

struct symbol_t {
	const char     *string;
	unsigned short  ID;
	unsigned short  pp_ID;
	declaration_t  *declaration;
	pp_definition  *pp_define;
};

#endif