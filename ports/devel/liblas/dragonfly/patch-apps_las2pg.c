--- apps/las2pg.c.orig	2016-08-23 16:41:33 UTC
+++ apps/las2pg.c
@@ -48,11 +48,11 @@
 #   define __LITTLE_ENDIAN LITTLE_ENDIAN
 #   define __PDP_ENDIAN    PDP_ENDIAN
 
-#elif defined(__OpenBSD__)
+#elif defined(__OpenBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
 
 #   include <sys/endian.h>
 
-#elif defined(__NetBSD__) || defined(__FreeBSD__) || defined(__DragonFly__)
+#elif defined(__NetBSD__)
 
 #   include <sys/endian.h>
 
