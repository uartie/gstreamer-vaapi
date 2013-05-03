/*
 *  gstvaapisurfacepool.h - Gst VA surface pool
 *
 *  Copyright (C) 2010-2011 Splitted-Desktop Systems
 *  Copyright (C) 2012 Intel Corporation
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public License
 *  as published by the Free Software Foundation; either version 2.1
 *  of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free
 *  Software Foundation, Inc., 51 Franklin Street, Fifth Floor,
 *  Boston, MA 02110-1301 USA
 */

#ifndef GST_VAAPI_SURFACE_POOL_H
#define GST_VAAPI_SURFACE_POOL_H

#include <gst/vaapi/gstvaapisurface.h>
#include <gst/vaapi/gstvaapivideopool.h>

G_BEGIN_DECLS

#define GST_VAAPI_SURFACE_POOL(obj) \
    ((GstVaapiSurfacePool *)(obj))

#define GST_VAAPI_IS_SURFACE_POOL(obj) \
    ((obj) != NULL)

typedef struct _GstVaapiSurfacePool             GstVaapiSurfacePool;

GstVaapiVideoPool *
gst_vaapi_surface_pool_new(GstVaapiDisplay *display, GstCaps *caps);

G_END_DECLS

#endif /* GST_VAAPI_SURFACE_POOL_H */
