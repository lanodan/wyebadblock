/* -*- Mode: C; tab-width: 2; indent-tabs-mode: nil; c-basic-offset: 2 -*- */
/*
 *  Copyright © 2011 Igalia S.L.
 *
 *  This file is part of Epiphany.
 *
 *  Epiphany is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  Epiphany is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with Epiphany.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include <gio/gio.h>

G_BEGIN_DECLS

#define EPHY_TYPE_URI_TESTER (ephy_uri_tester_get_type ())

G_DECLARE_FINAL_TYPE (EphyUriTester, ephy_uri_tester, EPHY, URI_TESTER, GObject)

EphyUriTester *ephy_uri_tester_new         (const char       *adblock_data_dir);
void           ephy_uri_tester_load        (EphyUriTester    *tester);
char          *ephy_uri_tester_rewrite_uri (EphyUriTester    *tester,
                                            const char       *request_uri,
                                            const char       *page_uri);


G_END_DECLS
