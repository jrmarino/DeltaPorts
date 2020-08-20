--- src/phonenumbers/base/thread_checker.h.intermediate	2020-09-19 19:58:44.000000000 +0000
+++ src/phonenumbers/base/thread_checker.h
@@ -22,7 +22,7 @@
 // Note that I18N_PHONENUMBERS_NO_THREAD_SAFETY must be defined only to let the
 // user of the library know that it can't be used in a thread-safe manner when
 // it is not depending on Boost.
-#if !defined(__linux__) && !defined(__APPLE__) && !defined(I18N_PHONENUMBERS_HAVE_POSIX_THREAD) && !defined(__FreeBSD__) \
+#if !defined(__linux__) && !defined(__APPLE__) && !defined(I18N_PHONENUMBERS_HAVE_POSIX_THREAD) && !defined(__FreeBSD__) && !defined(__DragonFly__) \
     !defined(I18N_PHONENUMBERS_NO_THREAD_SAFETY) && \
 	!((__cplusplus >= 201103L) && defined(I18N_PHONENUMBERS_USE_STDMUTEX)) && \
 	!defined(WIN32)
