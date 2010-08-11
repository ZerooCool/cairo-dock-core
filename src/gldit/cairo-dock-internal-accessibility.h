/*
* This file is a part of the Cairo-Dock project
*
* Copyright : (C) see the 'copyright' file.
* E-mail    : see the 'copyright' file.
*
* This program is free software; you can redistribute it and/or
* modify it under the terms of the GNU General Public License
* as published by the Free Software Foundation; either version 3
* of the License, or (at your option) any later version.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
* GNU General Public License for more details.
* You should have received a copy of the GNU General Public License
* along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/


#ifndef __CAIRO_DOCK_ACCESSIBILITY__
#define  __CAIRO_DOCK_ACCESSIBILITY__

#include <glib.h>

#include "cairo-dock-struct.h"
#include "cairo-dock-config.h"

typedef struct _CairoConfigAccessibility CairoConfigAccessibility;

#ifndef _INTERNAL_MODULE_
extern CairoConfigAccessibility myAccessibility;
#endif
G_BEGIN_DECLS

struct _CairoConfigAccessibility {
	// Root dock visibility
	CairoDockVisibility iVisibility;
	gchar *cHideEffect;
	gint iCallbackMethod;
	gint iZoneWidth, iZoneHeight;
	gchar *cZoneImage;
	gdouble fZoneAlpha;
	gchar *cRaiseDockShortcut;
	gint iUnhideDockDelay;
	//Sub-Dock visibility
	gboolean bShowSubDockOnClick;
	gint iLeaveSubDockDelay;
	gint iShowSubDockDelay;
	// others
	gboolean bAutoHideOnFullScreen;
	gint iMaxAuthorizedWidth;
	gboolean bExtendedMode;
	gboolean bLockIcons;
	gboolean bLockAll;
	} ;

DEFINE_PRE_INIT (Accessibility);

G_END_DECLS
#endif