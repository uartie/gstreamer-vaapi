noinst_LTLIBRARIES = libgstvaapi.la

if USE_DRM
noinst_LTLIBRARIES += libgstvaapi-drm.la
endif

if USE_X11
noinst_LTLIBRARIES += libgstvaapi-x11.la
endif

if USE_GLX
noinst_LTLIBRARIES += libgstvaapi-glx.la
endif

if USE_EGL
noinst_LTLIBRARIES += libgstvaapi-egl.la
endif

if USE_WAYLAND
noinst_LTLIBRARIES += libgstvaapi-wayland.la
endif

libgstvaapi_cflags =				\
	-DGST_USE_UNSTABLE_API			\
	-I$(top_srcdir)/gst-libs		\
	-I$(top_builddir)/gst-libs		\
	$(GST_BASE_CFLAGS)			\
	$(GST_BASEVIDEO_CFLAGS)			\
	$(GST_VIDEO_CFLAGS)			\
	$(GST_CFLAGS)				\
	$(GST_CODEC_PARSERS_CFLAGS)		\
	$(LIBVA_CFLAGS)				\
	$(NULL)

libgstvaapi_libs =				\
	$(GST_BASE_LIBS)			\
	$(GST_BASEVIDEO_LIBS)			\
	$(GST_LIBS)				\
	$(GST_VIDEO_LIBS)			\
	$(GST_CODEC_PARSERS_LIBS)		\
	$(LIBVA_LIBS)				\
	$(NULL)

libgstvaapi_source_c =				\
	gstvaapibufferproxy.c			\
	gstvaapicodec_objects.c			\
	gstvaapicontext.c			\
	gstvaapicontext_overlay.c		\
	gstvaapidecoder.c			\
	gstvaapidecoder_dpb.c			\
	gstvaapidecoder_h264.c			\
	gstvaapidecoder_mpeg2.c			\
	gstvaapidecoder_mpeg4.c			\
	gstvaapidecoder_objects.c		\
	gstvaapidecoder_unit.c			\
	gstvaapidecoder_vc1.c			\
	gstvaapidisplay.c			\
	gstvaapifilter.c			\
	gstvaapiimage.c				\
	gstvaapiimagepool.c			\
	gstvaapiminiobject.c			\
	gstvaapiobject.c			\
	gstvaapiparser_frame.c			\
	gstvaapipixmap.c			\
	gstvaapiprofile.c			\
	gstvaapisubpicture.c			\
	gstvaapisurface.c			\
	gstvaapisurface_drm.c			\
	gstvaapisurfacepool.c			\
	gstvaapisurfaceproxy.c			\
	gstvaapitexture.c			\
	gstvaapitexturemap.c			\
	gstvaapiutils.c				\
	gstvaapiutils_core.c			\
	gstvaapiutils_h264.c			\
	gstvaapiutils_h265.c			\
	gstvaapiutils_h26x.c			\
	gstvaapiutils_mpeg2.c			\
	gstvaapivalue.c				\
	gstvaapivideopool.c			\
	gstvaapiwindow.c			\
	video-format.c				\
	$(NULL)

libgstvaapi_source_h =				\
	gstvaapibufferproxy.h			\
	gstvaapidecoder.h			\
	gstvaapidecoder_h264.h			\
	gstvaapidecoder_h265.h			\
	gstvaapidecoder_mpeg2.h			\
	gstvaapidecoder_mpeg4.h			\
	gstvaapidecoder_vc1.h			\
	gstvaapidisplay.h			\
	gstvaapifilter.h			\
	gstvaapiimage.h				\
	gstvaapiimagepool.h			\
	gstvaapiobject.h			\
	gstvaapipixmap.h			\
	gstvaapiprofile.h			\
	gstvaapisubpicture.h			\
	gstvaapisurface.h			\
	gstvaapisurface_drm.h			\
	gstvaapisurfacepool.h			\
	gstvaapisurfaceproxy.h			\
	gstvaapitexture.h			\
	gstvaapitexturemap.h			\
	gstvaapitypes.h				\
	gstvaapiutils_h264.h			\
	gstvaapiutils_h265.h			\
	gstvaapiutils_mpeg2.h			\
	gstvaapivalue.h				\
	gstvaapivideopool.h			\
	gstvaapiwindow.h			\
	video-format.h				\
	$(NULL)

libgstvaapi_source_priv_h =			\
	gstvaapibufferproxy_priv.h		\
	gstvaapicodec_objects.h			\
	gstvaapicompat.h			\
	gstvaapicontext.h			\
	gstvaapicontext_overlay.h		\
	gstvaapidebug.h				\
	gstvaapidecoder_dpb.h			\
	gstvaapidecoder_objects.h		\
	gstvaapidecoder_priv.h			\
	gstvaapidecoder_unit.h			\
	gstvaapidisplay_priv.h			\
	gstvaapiimage_priv.h			\
	gstvaapiminiobject.h			\
	gstvaapiobject_priv.h			\
	gstvaapiparser_frame.h			\
	gstvaapipixmap_priv.h			\
	gstvaapisurface_priv.h			\
	gstvaapisurfaceproxy_priv.h		\
	gstvaapitexture_priv.h			\
	gstvaapiutils.h				\
	gstvaapiutils_core.h			\
	gstvaapiutils_h264_priv.h		\
	gstvaapiutils_h265_priv.h		\
	gstvaapiutils_h26x_priv.h		\
	gstvaapiutils_mpeg2_priv.h		\
	gstvaapivideopool_priv.h		\
	gstvaapiwindow_priv.h			\
	gstvaapiworkarounds.h			\
	sysdeps.h				\
	$(NULL)

libgstvaapi_jpegdec_source_c = gstvaapidecoder_jpeg.c
libgstvaapi_jpegdec_source_h = gstvaapidecoder_jpeg.h
libgstvaapi_source_c += $(libgstvaapi_jpegdec_source_c)
libgstvaapi_source_h += $(libgstvaapi_jpegdec_source_h)

libgstvaapi_vp8dec_source_c = gstvaapidecoder_vp8.c
libgstvaapi_vp8dec_source_h = gstvaapidecoder_vp8.h
libgstvaapi_source_c += $(libgstvaapi_vp8dec_source_c)
libgstvaapi_source_h += $(libgstvaapi_vp8dec_source_h)

libgstvaapi_hevcdec_source_c = gstvaapidecoder_h265.c
libgstvaapi_hevcdec_source_h = gstvaapidecoder_h265.h
libgstvaapi_source_c += $(libgstvaapi_hevcdec_source_c)
libgstvaapi_source_h += $(libgstvaapi_hevcdec_source_h)

libgstvaapi_vp9dec_source_c = gstvaapidecoder_vp9.c
libgstvaapi_vp9dec_source_h = gstvaapidecoder_vp9.h
libgstvaapi_source_c += $(libgstvaapi_vp9dec_source_c)
libgstvaapi_source_h += $(libgstvaapi_vp9dec_source_h)

libgstvaapi_enc_source_c =			\
	gstvaapicodedbuffer.c			\
	gstvaapicodedbufferpool.c		\
	gstvaapicodedbufferproxy.c		\
	gstvaapiencoder.c			\
	gstvaapiencoder_h264.c			\
	gstvaapiencoder_h265.c			\
	gstvaapiencoder_jpeg.c			\
	gstvaapiencoder_mpeg2.c			\
	gstvaapiencoder_objects.c		\
	gstvaapiencoder_vp8.c			\
	$(NULL)

libgstvaapi_enc_source_h =			\
	gstvaapicodedbuffer.h			\
	gstvaapicodedbufferpool.h		\
	gstvaapicodedbufferproxy.h		\
	gstvaapiencoder.h			\
	gstvaapiencoder_h264.h			\
	gstvaapiencoder_h265.h			\
	gstvaapiencoder_jpeg.h			\
	gstvaapiencoder_mpeg2.h			\
	gstvaapiencoder_vp8.h			\
	$(NULL)

libgstvaapi_enc_source_priv_h =			\
	gstvaapicodedbuffer_priv.h		\
	gstvaapicodedbufferproxy_priv.h		\
	gstvaapiencoder_mpeg2_priv.h		\
	gstvaapiencoder_objects.h		\
	gstvaapiencoder_priv.h			\
	$(NULL)

if USE_ENCODERS
libgstvaapi_source_c += $(libgstvaapi_enc_source_c)
libgstvaapi_source_h += $(libgstvaapi_enc_source_h)
libgstvaapi_source_priv_h += $(libgstvaapi_enc_source_priv_h)
endif

libgstvaapi_vp9enc_source_c = gstvaapiencoder_vp9.c
libgstvaapi_vp9enc_source_h = gstvaapiencoder_vp9.h
if USE_VP9_ENCODER
libgstvaapi_source_c += $(libgstvaapi_vp9enc_source_c)
libgstvaapi_source_h += $(libgstvaapi_vp9enc_source_h)
endif

libgstvaapi_h264feienc_source_c =		\
	gstvaapifeiutils_h264.c			\
	gstvaapifei_objects.c			\
	gstvaapifeienc_h264.c                   \
	gstvaapifeipak_h264.c                   \
	gstvaapiencoder_h264_fei.c              \
	$(NULL)
libgstvaapi_h264feienc_source_h =		\
	gstvaapifeiutils_h264.h			\
	gstvaapifei_objects.h			\
	gstvaapifeienc_h264.h                   \
	gstvaapifeipak_h264.h                   \
	gstvaapiencoder_h264_fei.h              \
	$(NULL)
libgstvaapi_h264feienc_source_priv_h =          \
	gstvaapifei_objects_priv.h              \
	$(NULL)
if USE_H264_FEI_ENCODER
libgstvaapi_source_c += $(libgstvaapi_h264feienc_source_c)
libgstvaapi_source_h += $(libgstvaapi_h264feienc_source_h)
libgstvaapi_source_priv_h += $(libgstvaapi_h264feienc_source_priv_h)
endif

libgstvaapi_drm_source_c =			\
	gstvaapidisplay_drm.c			\
	gstvaapiwindow_drm.c			\
	$(NULL)

libgstvaapi_drm_source_h =			\
	gstvaapidisplay_drm.h			\
	gstvaapiwindow_drm.h			\
	$(NULL)

libgstvaapi_drm_source_priv_h =			\
	gstvaapicompat.h			\
	gstvaapidisplay_drm_priv.h		\
	$(NULL)

libgstvaapi_x11_source_c =			\
	gstvaapidisplay_x11.c			\
	gstvaapipixmap_x11.c			\
	gstvaapiutils_x11.c			\
	gstvaapiwindow_x11.c			\
	$(NULL)

libgstvaapi_x11_source_h =			\
	gstvaapidisplay_x11.h			\
	gstvaapipixmap_x11.h			\
	gstvaapiwindow_x11.h			\
	$(NULL)

libgstvaapi_x11_source_priv_h =			\
	gstvaapicompat.h			\
	gstvaapidisplay_x11_priv.h		\
	gstvaapiutils_x11.h			\
	gstvaapiwindow_x11_priv.h		\
	$(NULL)

libgstvaapi_glx_source_c =			\
	gstvaapidisplay_glx.c			\
	gstvaapitexture_glx.c			\
	gstvaapiutils_glx.c			\
	gstvaapiwindow_glx.c			\
	$(NULL)

libgstvaapi_glx_source_h =			\
	gstvaapidisplay_glx.h			\
	gstvaapitexture.h			\
	gstvaapitexture_glx.h			\
	gstvaapiwindow_glx.h			\
	$(NULL)

libgstvaapi_glx_source_priv_h =			\
	gstvaapicompat.h			\
	gstvaapidisplay_glx_priv.h		\
	gstvaapiutils.h				\
	gstvaapiutils_glx.h			\
	$(NULL)

libgstvaapi_egl_source_c =			\
	gstvaapidisplay_egl.c			\
	gstvaapisurface_egl.c			\
	gstvaapitexture_egl.c			\
	gstvaapiutils_egl.c			\
	gstvaapiwindow_egl.c			\
	$(NULL)

libgstvaapi_egl_source_h =			\
	gstvaapidisplay_egl.h			\
	gstvaapisurface_egl.h			\
	gstvaapitexture_egl.h			\
	gstvaapiwindow_egl.h			\
	$(NULL)

libgstvaapi_egl_source_priv_h =			\
	egl_compat.h				\
	egl_vtable.h				\
	gstvaapidisplay_egl_priv.h		\
	gstvaapiutils_egl.h			\
	ogl_compat.h				\
	$(NULL)

BUILT_SOURCES=
CLEANFILES=

# Generate the necessary files for XDG-shell
if USE_WAYLAND
xdg_shell_protocol_spec = $(WAYLAND_PROTOCOLS_DATADIR)/stable/xdg-shell/xdg-shell.xml
xdg_shell_header = xdg-shell-client-protocol.h
xdg_shell_source = xdg-shell-client-protocol.c

$(xdg_shell_header): $(xdg_shell_protocol_spec)
	$(AM_V_GEN) $(WAYLAND_SCANNER) client-header < $< > $@
$(xdg_shell_source): $(xdg_shell_protocol_spec)
	$(AM_V_GEN) $(WAYLAND_SCANNER) private-code < $< > $@

BUILT_SOURCES += $(xdg_shell_header) $(xdg_shell_source)
CLEANFILES += $(BUILT_SOURCES)
endif

libgstvaapi_wayland_source_c =			\
	gstvaapidisplay_wayland.c		\
	gstvaapiwindow_wayland.c		\
	$(xdg_shell_source)			\
	$(NULL)

libgstvaapi_wayland_source_h =			\
	gstvaapidisplay_wayland.h		\
	gstvaapiwindow_wayland.h		\
	$(NULL)

libgstvaapi_wayland_source_priv_h =		\
	gstvaapicompat.h			\
	gstvaapidisplay_wayland_priv.h		\
	$(xdg_shell_header)			\
	$(NULL)

libgstvaapi_la_SOURCES =			\
	$(libgstvaapi_source_c)			\
	$(libgstvaapi_source_priv_h)		\
	$(libgstvaapi_source_h)			\
	$(NULL)

libgstvaapi_la_CFLAGS =				\
	$(libgstvaapi_cflags)			\
	$(NULL)

libgstvaapi_la_LIBADD =				\
	$(libgstvaapi_libs)			\
	$(NULL)

libgstvaapi_la_LDFLAGS =			\
	$(GST_ALL_LDFLAGS)			\
	$(NULL)

libgstvaapi_drm_la_SOURCES =			\
	$(libgstvaapi_drm_source_c)		\
	$(libgstvaapi_drm_source_priv_h)	\
	$(libgstvaapi_drm_source_h)		\
	$(NULL)

libgstvaapi_drm_la_CFLAGS =			\
	-DGST_USE_UNSTABLE_API			\
	-I$(top_srcdir)/gst-libs		\
	$(GLIB_CFLAGS)				\
	$(GST_BASE_CFLAGS)			\
	$(GST_VIDEO_CFLAGS)			\
	$(UDEV_CFLAGS)				\
	$(DRM_CFLAGS)				\
	$(LIBVA_DRM_CFLAGS)			\
	$(NULL)

libgstvaapi_drm_la_LIBADD =			\
	$(GLIB_LIBS)				\
	$(GST_LIBS)				\
	$(UDEV_LIBS)				\
	$(DRM_LIBS)				\
	$(LIBVA_DRM_LIBS)			\
	$(NULL)

libgstvaapi_drm_la_LDFLAGS =			\
	$(GST_ALL_LDFLAGS)			\
	$(NULL)

libgstvaapi_x11_la_SOURCES =			\
	$(libgstvaapi_x11_source_c)		\
	$(libgstvaapi_x11_source_priv_h)	\
	$(libgstvaapi_x11_source_h)		\
	$(NULL)

libgstvaapi_x11_la_CFLAGS =			\
	-DGST_USE_UNSTABLE_API			\
	-I$(top_srcdir)/gst-libs		\
	$(GLIB_CFLAGS)				\
	$(GST_BASE_CFLAGS)			\
	$(GST_VIDEO_CFLAGS)			\
	$(X11_CFLAGS)				\
	$(XRANDR_CFLAGS)			\
	$(XRENDER_CFLAGS)			\
	$(LIBVA_X11_CFLAGS)			\
	$(NULL)

libgstvaapi_x11_la_LIBADD =			\
	$(GLIB_LIBS)				\
	$(GST_LIBS)				\
	$(X11_LIBS)				\
	$(XRANDR_LIBS)				\
	$(XRENDER_LIBS)				\
	$(LIBVA_X11_LIBS)			\
	$(NULL)

libgstvaapi_x11_la_LDFLAGS =			\
	$(GST_ALL_LDFLAGS)			\
	$(NULL)

libgstvaapi_glx_la_SOURCES =			\
	$(libgstvaapi_glx_source_c)		\
	$(libgstvaapi_glx_source_priv_h)	\
	$(libgstvaapi_glx_source_h)		\
	$(NULL)

libgstvaapi_glx_la_CFLAGS =			\
	-DGST_USE_UNSTABLE_API			\
	-I$(top_srcdir)/gst-libs		\
	$(GLIB_CFLAGS)				\
	$(GST_BASE_CFLAGS)			\
	$(GST_VIDEO_CFLAGS)			\
	$(GL_CFLAGS)				\
	$(LIBVA_X11_CFLAGS)			\
	$(NULL)

libgstvaapi_glx_la_LIBADD =			\
	$(GLIB_LIBS)				\
	$(GST_LIBS)				\
	$(GST_BASE_LIBS)			\
	$(GST_VIDEO_LIBS)			\
	$(X11_LIBS)				\
	$(GL_LIBS)				\
	$(LIBVA_X11_LIBS)			\
	$(DLOPEN_LIBS)				\
	$(NULL)

libgstvaapi_glx_la_LDFLAGS =			\
	$(GST_ALL_LDFLAGS)			\
	$(NULL)

libgstvaapi_egl_la_SOURCES =			\
	$(libgstvaapi_egl_source_c)		\
	$(libgstvaapi_egl_source_priv_h)	\
	$(libgstvaapi_egl_source_h)		\
	$(NULL)

libgstvaapi_egl_la_CFLAGS =			\
	-DGST_USE_UNSTABLE_API			\
	-I$(top_srcdir)/gst-libs		\
	$(GLIB_CFLAGS)				\
	$(GMODULE_CFLAGS)			\
	$(GST_BASE_CFLAGS)			\
	$(GST_VIDEO_CFLAGS)			\
	$(GST_GL_CFLAGS)			\
	$(LIBVA_CFLAGS)				\
	$(LIBVA_WAYLAND_CFLAGS)			\
	$(EGL_CFLAGS)				\
	$(NULL)

libgstvaapi_egl_la_LIBADD =			\
	$(GLIB_LIBS)				\
	$(GMODULE_LIBS)				\
	$(GST_LIBS)				\
	$(GST_BASE_LIBS)			\
	$(GST_VIDEO_LIBS)			\
	$(GST_GL_LIBS)				\
	$(EGL_LIBS)				\
	$(NULL)

libgstvaapi_egl_la_LDFLAGS =			\
	$(GST_ALL_LDFLAGS)			\
	$(NULL)

libgstvaapi_wayland_la_SOURCES = 		\
	$(libgstvaapi_wayland_source_c)		\
	$(libgstvaapi_wayland_source_priv_h)	\
	$(libgstvaapi_wayland_source_h)		\
	$(NULL)

libgstvaapi_wayland_la_CFLAGS = 		\
	-DGST_USE_UNSTABLE_API			\
	-I$(top_srcdir)/gst-libs		\
	$(GLIB_CFLAGS)				\
	$(GST_BASE_CFLAGS)			\
	$(GST_VIDEO_CFLAGS)			\
	$(WAYLAND_CFLAGS)			\
	$(LIBVA_WAYLAND_CFLAGS)			\
	$(NULL)

libgstvaapi_wayland_la_LIBADD = 		\
	$(GLIB_LIBS)				\
	$(GST_LIBS)				\
	$(GST_VIDEO_LIBS)			\
	$(WAYLAND_LIBS)				\
	$(LIBVA_WAYLAND_LIBS)			\
	$(NULL)

libgstvaapi_wayland_la_LDFLAGS = 		\
	$(GST_ALL_LDFLAGS)			\
	$(NULL)

EXTRA_DIST = \
	$(libgstvaapi_enc_source_c)		\
	$(libgstvaapi_enc_source_h)		\
	$(libgstvaapi_enc_source_priv_h)	\
	$(libgstvaapi_jpegdec_source_c)		\
	$(libgstvaapi_jpegdec_source_h)		\
	$(libgstvaapi_vp8dec_source_c)		\
	$(libgstvaapi_vp8dec_source_h)		\
	$(libgstvaapi_hevcdec_source_c)		\
	$(libgstvaapi_hevcdec_source_h)		\
	$(libgstvaapi_hevcdec_source_priv_h)	\
	$(libgstvaapi_vp9dec_source_c)		\
	$(libgstvaapi_vp9dec_source_h)		\
	$(libgstvaapi_vp9enc_source_h)		\
	$(libgstvaapi_vp9enc_source_c)		\
	$(libgstvaapi_egl_source_c)		\
	$(libgstvaapi_egl_source_h)		\
	$(libgstvaapi_egl_source_priv_h)	\
	$(libgstvaapi_h264feienc_source_h)      \
	$(libgstvaapi_h264feienc_source_c)      \
	$(libgstvaapi_h264feienc_source_priv_h) \
	$(NULL)

-include $(top_srcdir)/git.mk
