/*
 * This file is part of the Advance project.
 *
 * Copyright (C) 1999-2002 Andrea Mazzoleni
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 * In addition, as a special exception, Andrea Mazzoleni
 * gives permission to link the code of this program with
 * the MAME library (or with modified versions of MAME that use the
 * same license as MAME), and distribute linked combinations including
 * the two.  You must obey the GNU General Public License in all
 * respects for all of the code used other than MAME.  If you modify
 * this file, you may extend this exception to your version of the
 * file, but you are not obligated to do so.  If you do not wish to
 * do so, delete this exception statement from your version.
 */

#include "joyall.h"

/**
 * Register all the joystick drivers.
 * The drivers are registered on the basis of the following defines:
 *  - USE_JOYSTICK_ALLEGRO
 *  - USE_JOYSTICK_SVGALIB
 *  - USE_JOYSTICK_SDL
 *  - USE_JOYSTICK_NONE
 */
void joystickb_reg_driver_all(struct conf_context* context) {
#ifdef USE_JOYSTICK_ALLEGRO
	joystickb_reg_driver(context, &joystickb_allegro_driver);
#endif
#ifdef USE_JOYSTICK_SVGALIB
	joystickb_reg_driver(context, &joystickb_svgalib_driver);
#endif
#ifdef USE_JOYSTICK_SDL
	joystickb_reg_driver(context, &joystickb_sdl_driver);
#endif
#ifdef USE_JOYSTICK_NONE
	joystickb_reg_driver(context, &joystickb_none_driver);
#endif
}

