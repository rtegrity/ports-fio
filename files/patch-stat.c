--- stat.h.orig	2022-08-30 17:51:13.000000000 +0100
+++ stat.h	2023-07-03 19:36:14.761329000 +0100
@@ -295,7 +295,7 @@
 
 	uint64_t cachehit;
 	uint64_t cachemiss;
-} __attribute__((packed));
+} /* __attribute__((packed))*/;
 
 #define JOBS_ETA {							\
 	uint32_t nr_running;						\
