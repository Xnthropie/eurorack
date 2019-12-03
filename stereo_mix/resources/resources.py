#!/usr/bin/python2.5
#
# Copyright 2012 Emilie Gillet.
#
# Author: Emilie Gillet (emilie.o.gillet@gmail.com)
#
# This program is free software: you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation, either version 3 of the License, or
# (at your option) any later version.
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
# You should have received a copy of the GNU General Public License
# along with this program.  If not, see <http://www.gnu.org/licenses/>.
#
# -----------------------------------------------------------------------------
#
# Master resources file.

header = """// Copyright 2019 Jan-Henrik Bruhn.
//
//
// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.
//
// -----------------------------------------------------------------------------
//
// Resources definitions.
//
// Automatically generated with:
// make resources
"""

namespace = 'stereo_mix'
target = 'stereo_mix'
modifier = 'PROGMEM'
types = ['uint8_t', 'uint16_t']
includes = """
#include "avrlib/avrlib.h"
#include <avr/pgmspace.h>
"""

import lookup_tables

create_specialized_manager = False

resources = [
  ('dummy', 'string', 'STR_RES', 'prog_char', str, True),
  (lookup_tables.lookup_tables,
   'lookup_table', 'LUT_RES', 'prog_uint16_t', int, True),
  (lookup_tables.lookup_tables_32,
   'lookup_table_32', 'LUT_RES', 'prog_uint32_t', int, True)
]

