/*
 * This file is part of cparser.
 * Copyright (C) 2007-2009 Matthias Braun <matze@braunis.de>
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
#ifndef DIAGNOSTIC_H
#define DIAGNOSTIC_H

#include <stdbool.h>
#include "token_t.h"
#include "warning.h"

/* define a NORETURN attribute */
#ifndef NORETURN
# if defined(__GNUC__)
#  if __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 70)
#   define NORETURN void __attribute__ ((noreturn))
#  endif /* __GNUC__ >= 3 || (__GNUC__ == 2 && __GNUC_MINOR__ >= 70) */
# endif /* defined(__GNUC__) */

# if defined(_MSC_VER)
#  define NORETURN void __declspec(noreturn)
# endif /* defined(_MSC_VER) */

/* If not set above, use "void" for DOES_NOT_RETURN. */
# ifndef NORETURN
# define NORETURN void
# endif /* ifndef NORETURN */
#endif /* ifndef NORETURN */

/**
 * Issue a diagnostic message.
 * Format types:
 *  %E   expression_t const*
 *  %K   token_t const*
 *  %k   token_kind_t
 *  %#k  va_list*, char const*
 *  %N   entity_t const*
 *  %#N  entity_t const*
 *  %P   source_position_t const*
 *  %Q   unsigned (qualifier)
 *  %S   string_t const*
 *  %T   type_t const*
 *  %#T  type_t const*, symbol_t const*
 *  %Y   symbol_t const*
 */
void diagnosticf(const char *fmt, ...);
void errorf(const source_position_t *pos, const char *fmt, ...);
void warningf(warning_t, const source_position_t *pos, const char *fmt, ...);
NORETURN internal_errorf(const source_position_t *pos, const char *fmt, ...);

extern unsigned diagnostic_count;
extern unsigned error_count;
extern unsigned warning_count;
extern bool     show_column;             /**< Show column in diagnostic messages */
extern bool     diagnostics_show_option; /**< Show the switch, which controls a warning. */

#endif
