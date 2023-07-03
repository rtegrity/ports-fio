--- backend.c.orig	2022-08-30 17:51:13.000000000 +0100
+++ backend.c	2023-07-03 19:50:29.715234000 +0100
@@ -1347,7 +1347,7 @@
 
 	if (td->o.odirect || td->o.mem_align || td->o.oatomic ||
 	    td_ioengine_flagged(td, FIO_RAWIO))
-		p = PTR_ALIGN(td->orig_buffer, page_mask) + td->o.mem_align;
+		p = PTR_ALIGN(td->orig_buffer, (size_t)page_mask) + td->o.mem_align;
 	else
 		p = td->orig_buffer;
 
