/* Copyright 2021 RoastPotatoes
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "quantum.h"

/* This is a shortcut to help you visually see your layout.
 *
 * The first section contains all of the arguments representing the physical
 * layout of the board and position of the keys.
 *
 * The second converts the arguments into a two-dimensional array which
 * represents the switch matrix.
 */
#define LAYOUT( \
    K72,      K53, K54, K64, K74,      K76, K78, K69, K59,      K56, K46, K4B, K4C,      K4F, K3F, K1E, \
    K52, K42, K43, K44, K45, K55, K57, K47, K48, K49, K4A, K5A, K58, K36, K66,           K5C, K5E, K5D, \
    K62,   K32, K33, K34, K35, K65, K67, K37, K38, K39, K3A, K6A, K68,   K26,            K5B, K4E, K4D, \
    K63,     K22, K23, K24, K25, K75, K77, K27, K28, K29, K2A, K7A, K1A, K16, \
    K61,      K73, K12, K13, K14, K15, K05, K07, K17, K18, K19, K0A, K08, K11,                K7E, \
    K50,      K7F,                     K06,                K0F,      K10,                K0E, K0B, K0C \
) { \
 { KC_NO,    KC_NO,    KC_NO,    KC_NO,    KC_NO,   K05, K06, K07, K08, KC_NO, K0A,   K0B,    K0C,      KC_NO,    K0E,     K0F }, \
 { K10,      K11,      K12,      K13,      K14,     K15, K16, K17, K18, K19,   K1A,   KC_NO,  KC_NO,    KC_NO,    K1E,     KC_NO }, \
 { KC_NO,    KC_NO,    K22,      K23,      K24,     K25, K26, K27, K28, K29,   K2A,   KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO }, \
 { KC_NO,    KC_NO,    K32,      K33,      K34,     K35, K36, K37, K38, K39,   K3A,   KC_NO,  KC_NO,    KC_NO,    KC_NO,   K3F }, \
{ KC_NO,    KC_NO,    K42,      K43,      K44,     K45, K46, K47, K48, K49,   K4A,   K4B,    K4C,      K4D,      K4E,     K4F }, \
 { K50,      KC_NO,    K52,      K53,      K54,     K55, K56, K57, K58, K59,   K5A,   K5B,    K5C,      K5D,      K5E,     KC_NO },  \
  { KC_NO,    K61,      K62,      K63,      K64,     K65, K66, K67, K68, K69,   K6A,   KC_NO,  KC_NO,    KC_NO,    KC_NO,   KC_NO },  \
  { KC_NO,    KC_NO,    K72,      K73,      K74,     K75, K76, K77, K78, KC_NO, K7A,   KC_NO,  KC_NO,    KC_NO,    K7E,     K7F }  \
}
