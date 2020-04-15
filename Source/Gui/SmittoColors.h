/*
 * Copyright (C) 2016-2019 Vladimir Kuznetsov <smithcoder@yandex.ru> https://smithcoder.ru/
 *
 * This file is part of the Smitto.
 *
 * Smitto is free software; you can redistribute it and/or modify it under the terms of the
 * GNU Lesser General Public License as published by the Free Software Foundation;
 * either version 3 of the License, or (at your option) any later version.
 *
 * Smitto is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY;
 * without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with Smitto; see the file LICENSE. If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <smitto.h>

namespace Smitto {

enum class SmittoBaseColors
{
	Unset = 0,
	lelev01,
	lelev02,
	lelev03,
	lelev04,
	lelev05,
	lelev06,
	lelev07,
	lelev08,
	lelev09,
	lelev10,
	lelev11,
	lelev12,
	Red,
	BoldRed,
	Green,
	BoldGreen,
	Yellow,
	BoldYellow,
	Blue,
	BoldBlue,
	Purple,
	BoldPurple,
	Cyan,
	BoldCyan
};

QString scolor(SmittoBaseColors color);

enum class ConsoleColors
{
	Black,
	Red,
	Green,
	Yellow,
	Blue,
	Purple,
	Cyan,
	White
};

} // Smitto::
