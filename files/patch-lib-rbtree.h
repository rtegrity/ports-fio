--- lib/rbtree.h.orig	2022-08-30 17:51:13.000000000 +0100
+++ lib/rbtree.h	2023-07-03 19:46:45.479948000 +0100
@@ -122,7 +122,7 @@
 
 static inline void rb_set_parent(struct fio_rb_node *rb, struct fio_rb_node *p)
 {
-	rb->rb_parent_color = (rb->rb_parent_color & 3) | (uintptr_t)p;
+	rb->rb_parent_color = (size_t)(rb->rb_parent_color & 3) | (uintptr_t)p;
 }
 static inline void rb_set_color(struct fio_rb_node *rb, int color)
 {
