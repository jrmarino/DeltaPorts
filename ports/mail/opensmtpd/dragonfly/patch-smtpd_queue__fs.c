--- usr.sbin/smtpd/queue_fs.c.orig	2019-11-05 19:08:33 UTC
+++ usr.sbin/smtpd/queue_fs.c
@@ -16,6 +16,17 @@
  * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
  */
 
+#ifdef __DragonFly__
+#include <sys/queue.h>
+/*
+ * XXX: the openbsd-compat/sys/queue.h intercepts <sys/queue.h> and our
+ * <sys/mount.h> needs "STAILQ_ENTRY(vfsconf) vfc_next;".
+ */
+#ifndef STAILQ_ENTRY
+#define STAILQ_ENTRY(type) struct { struct type *stqe_next; /* next element */ }
+#endif
+#endif
+
 #include "includes.h"
 
 #include <sys/types.h>
