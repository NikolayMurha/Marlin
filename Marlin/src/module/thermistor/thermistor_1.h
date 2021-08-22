/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4092 K, 4.7 kOhm pull-up, bed thermistor
constexpr temp_entry_t temptable_1[] PROGMEM = {
  { OV(  23), 300 },
  { OV(  25), 295 },
  { OV(  27), 290 },
  { OV(  28), 285 },
  { OV(  31), 280 },
  { OV(  43), 275 },
  { OV(  48), 270 },
  { OV(  51), 265 },
  { OV(  55), 260 },
  { OV(  59), 255 },
  { OV(  64), 250 },
  { OV(  69), 245 },
  { OV(  74), 240 },
  { OV(  80), 235 },
  { OV(  87), 230 },
  { OV(  95), 225 },
  { OV( 102), 220 },
  { OV( 109), 215 },
  { OV( 122), 210 },
  { OV( 131), 205 },
  { OV( 144), 200 },
  { OV( 158), 195 },
  { OV( 169), 190 },
  { OV( 186), 185 },
  { OV( 201), 180 },
  { OV( 218), 175 },
  { OV( 238), 170 },
  { OV( 260), 165 },
  { OV( 281), 160 },
  { OV( 303), 155 },
  { OV( 332), 150 },
  { OV( 355), 145 },
  { OV( 382), 140 },
  { OV( 414), 135 },
  { OV( 441), 130 },
  { OV( 472), 125 },
  { OV( 506), 120 },
  { OV( 543), 115 },
  { OV( 578), 110 },
  { OV( 610), 105 },
  { OV( 642), 100 },
  { OV( 672),  95 },
  { OV( 706),  90 },
  { OV( 736),  85 },
  { OV( 768),  80 },
  { OV( 793),  75 },
  { OV( 820),  70 },
  { OV( 840),  65 },
  { OV( 865),  60 },
  { OV( 886),  55 },
  { OV( 903),  50 }, 
  { OV( 922),  45 },
  { OV( 939),  40 },
  { OV( 954),  35 },
  { OV( 960),  30 },
  { OV( 977),  25 },
  { OV( 985),  20 },
  { OV( 993),  15 },
  { OV( 999),  10 },
  { OV(1004),   5 },
  { OV(1008),   0 },
  { OV(1012),  -5 },
  { OV(1016), -10 },
  { OV(1020), -15 }
};
