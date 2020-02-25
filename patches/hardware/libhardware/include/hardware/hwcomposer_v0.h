diff --git a/include/hardware/hwcomposer_v0.h b/include/hardware/hwcomposer_v0.h
index 473819b..c0e8874 100644
--- a/include/hardware/hwcomposer_v0.h
+++ b/include/hardware/hwcomposer_v0.h
@@ -100,6 +100,11 @@ typedef struct hwc_layer {
             /* transformation to apply to the buffer during composition */
             uint32_t transform;
 
+#ifdef QCOM_HARDWARE
+            /* source transform of the buffer */
+            uint32_t sourceTransform;
+#endif
+ 
             /* blending to apply during composition */
             int32_t blending;
 
