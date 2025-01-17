--- electron/shell/browser/native_window_views.h.orig	2023-05-22 19:19:22 UTC
+++ electron/shell/browser/native_window_views.h
@@ -169,7 +169,7 @@ class NativeWindowViews : public NativeWindow,
                     LPARAM l_param,
                     LRESULT* result);
   void SetIcon(HICON small_icon, HICON app_icon);
-#elif BUILDFLAG(IS_LINUX)
+#elif BUILDFLAG(IS_LINUX) || BUILDFLAG(IS_BSD)
   void SetIcon(const gfx::ImageSkia& icon);
 #endif
 
