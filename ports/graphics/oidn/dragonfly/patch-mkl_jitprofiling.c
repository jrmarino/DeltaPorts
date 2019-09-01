--- mkl-dnn/src/cpu/jit_utils/jitprofiling/jitprofiling.c.orig	2019-05-09 15:22:07 UTC
+++ mkl-dnn/src/cpu/jit_utils/jitprofiling/jitprofiling.c
@@ -40,7 +40,7 @@
 #if ITT_PLATFORM==ITT_PLATFORM_WIN
 #include <windows.h>
 #endif /* ITT_PLATFORM==ITT_PLATFORM_WIN */
-#if ITT_PLATFORM != ITT_PLATFORM_MAC && ITT_PLATFORM != ITT_PLATFORM_FREEBSD
+#if ITT_PLATFORM != ITT_PLATFORM_MAC && ITT_PLATFORM != ITT_PLATFORM_FREEBSD && !defined(__DragonFly__)
 #include <malloc.h>
 #endif
 #include <stdlib.h>
