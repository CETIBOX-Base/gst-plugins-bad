/*
 * GStreamer
 * Copyright (C) 2012 Matthew Waters <ystreet00@gmail.com>
 * Copyright (C) 2015 Freescale Semiconductor <b55597@freescale.com>
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
 * Free Software Foundation, Inc., 51 Franklin St, Fifth Floor,
 * Boston, MA 02110-1301, USA.
 */

#ifndef __GST_GL_WINDOW_VIV_FB_EGL_H__
#define __GST_GL_WINDOW_VIV_FB_EGL_H__

#include <gst/gl/gl.h>
#include <gst/gl/egl/gstegl.h>

G_BEGIN_DECLS

#define GST_GL_TYPE_WINDOW_VIV_FB_EGL         (gst_gl_window_viv_fb_egl_get_type())
#define GST_GL_WINDOW_VIV_FB_EGL(o)           (G_TYPE_CHECK_INSTANCE_CAST((o), GST_GL_TYPE_WINDOW_VIV_FB_EGL, GstGLWindowVivFBEGL))
#define GST_GL_WINDOW_VIV_FB_EGL_CLASS(k)     (G_TYPE_CHECK_CLASS((k), GST_GL_TYPE_WINDOW_VIV_FB_EGL, GstGLWindowVivFBEGLClass))
#define GST_GL_IS_WINDOW_VIV_FB_EGL(o)        (G_TYPE_CHECK_INSTANCE_TYPE((o), GST_GL_TYPE_WINDOW_VIV_FB_EGL))
#define GST_GL_IS_WINDOW_VIV_FB_EGL_CLASS(k)  (G_TYPE_CHECK_CLASS_TYPE((k), GST_GL_TYPE_WINDOW_VIV_FB_EGL))
#define GST_GL_WINDOW_VIV_FB_EGL_GET_CLASS(o) (G_TYPE_INSTANCE_GET_CLASS((o), GST_GL_TYPE_WINDOW_VIV_FB_EGL, GstGLWindowVivFBEGL_Class))

typedef struct _GstGLWindowVivFBEGL        GstGLWindowVivFBEGL;
typedef struct _GstGLWindowVivFBEGLClass   GstGLWindowVivFBEGLClass;

struct _GstGLWindowVivFBEGL {
  /*< private >*/
  GstGLWindow parent;

  /* <private> */
  EGLNativeWindowType win_id;
  gboolean external_window;
  gint window_width, window_height;

  GstVideoRectangle render_rectangle;
};

struct _GstGLWindowVivFBEGLClass {
  /*< private >*/
  GstGLWindowClass parent_class;

  /*< private >*/
  gpointer _reserved[GST_PADDING];
};

GType gst_gl_window_viv_fb_egl_get_type     (void);

GstGLWindowVivFBEGL * gst_gl_window_viv_fb_egl_new  (GstGLDisplay * display);

G_END_DECLS

#endif /* __GST_GL_WINDOW_VIV_FB_EGL_H__ */
