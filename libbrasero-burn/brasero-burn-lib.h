/* -*- Mode: C; indent-tabs-mode: t; c-basic-offset: 8; tab-width: 8 -*- */
/*
 * Libbrasero-burn
 * Copyright (C) Philippe Rouquier 2005-2009 <bonfire-app@wanadoo.fr>
 *
 * Libbrasero-burn is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * The Libbrasero-burn authors hereby grant permission for non-GPL compatible
 * GStreamer plugins to be used and distributed together with GStreamer
 * and Libbrasero-burn. This permission is above and beyond the permissions granted
 * by the GPL license by which Libbrasero-burn is covered. If you modify this code
 * you may extend this exception to your version of the code, but you are not
 * obligated to do so. If you do not wish to do so, delete this exception
 * statement from your version.
 * 
 * Libbrasero-burn is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Library General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to:
 * 	The Free Software Foundation, Inc.,
 * 	51 Franklin Street, Fifth Floor
 * 	Boston, MA  02110-1301, USA.
 */

#ifndef _BRASERO_BURN_LIB_
#define _BRASERO_BURN_LIB_

#include <glib.h>

#include <brasero-enums.h>
#include <brasero-error.h>
#include <brasero-track-type.h>

G_BEGIN_DECLS

/**
 * Some needed information about the library
 */

#define LIBBRASERO_BURN_VERSION_MAJOR						\
	3
#define LIBBRASERO_BURN_VERSION_MINOR						\
	12
#define LIBBRASERO_BURN_VERSION_MICRO						\
	3
#define LIBBRASERO_BURN_AGE							\
	372


/**
 * Function to start and stop the library
 */

gboolean
brasero_burn_library_start (int *argc,
                            char **argv []);

void
brasero_burn_library_stop (void);

/**
 * GOptionGroup for apps
 */

GOptionGroup *
brasero_burn_library_get_option_group (void);

/**
 * Allows to get some information about capabilities
 */

GSList *
brasero_burn_library_get_plugins_list (void);

gboolean
brasero_burn_library_can_checksum (void);

BraseroBurnResult
brasero_burn_library_input_supported (BraseroTrackType *type);

BraseroMedia
brasero_burn_library_get_media_capabilities (BraseroMedia media);

G_END_DECLS

#endif /* _BRASERO_BURN_LIB_ */

