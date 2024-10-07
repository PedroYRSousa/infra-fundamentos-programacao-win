/* Libart_LGPL - library of basic graphic primitives
 * Copyright (C) 1998 Raph Levien
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Library General Public
 * License as published by the Free Software Foundation; either
 * version 2 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Library General Public License for more details.
 *
 * You should have received a copy of the GNU Library General Public
 * License along with this library; if not, write to the
 * Free Software Foundation, Inc., 59 Temple Place - Suite 330,
 * Boston, MA 02111-1307, USA.
 */

#ifndef __ART_UTA_SVP_H__
#define __ART_UTA_SVP_H__

/* Basic data structures and constructors for microtile arrays */

#ifdef LIBART_COMPILATION
#include "art_svp.h"
#include "art_uta.h"
#else
#include <libart_lgpl/art_svp.h>
#include <libart_lgpl/art_uta.h>
#endif

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

ArtUta *
art_uta_from_svp (const ArtSVP *svp);

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __ART_UTA_SVP_H__ */

