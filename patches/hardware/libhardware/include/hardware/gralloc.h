diff --git a/include/hardware/gralloc.h b/include/hardware/gralloc.h
index c0c6fe2..b758b57 100644
--- a/include/hardware/gralloc.h
+++ b/include/hardware/gralloc.h
@@ -237,7 +237,7 @@ typedef struct gralloc_module_t {
 typedef struct alloc_device_t {
     struct hw_device_t common;
 
-#ifdef QCOM_BSP
+#ifdef QCOM_HARDWARE
     /*
      * (*allocSize)() Allocates a buffer in graphic memory with the requested
      * bufferSize parameter and returns a buffer_handle_t and the stride in
