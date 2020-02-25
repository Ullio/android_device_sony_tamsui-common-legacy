diff --git a/include/camera/CameraParameters.h b/include/camera/CameraParameters.h
index 4b0d008fb..d0203d739 100644
--- a/include/camera/CameraParameters.h
+++ b/include/camera/CameraParameters.h
@@ -127,6 +127,10 @@ public:
     void getTouchIndexAf(int *x, int *y) const;
 #endif
 
+#ifdef QCOM_SONY_HARDWARE
+    void getFocusAreaCenter(int *x, int *y) const;
+#endif
+
     void getMeteringAreaCenter(int * x, int *y) const;
 
     void dump() const;
@@ -829,6 +833,13 @@ public:
     static const char SCENE_MODE_BACKLIGHT[];
     static const char SCENE_MODE_FLOWERS[];
     static const char SCENE_MODE_AR[];
+#ifdef QCOM_SONY_HARDWARE
+#ifdef QCOM_SONY_NEW_CAMERA
+    static const char SCENE_MODE_DOCUMENT[];
+#else
+    static const char EX_SCENE_MODE_DOCUMENT[];
+#endif
+#endif
 #endif
     // Applications are looking for a barcode. Camera driver will be optimized
     // for barcode reading.
@@ -1030,6 +1041,15 @@ public:
     static const char HDR_ENABLE[];
     static const char HDR_DISABLE[];
 
+#ifdef QCOM_SONY_HARDWARE
+    static const char KEY_EX_SUPPORTED_METERING_MODES[];
+    static const char KEY_SEMC_METRY_MODE[];
+    static const char SEMC_METRY_CENTER[];
+    static const char SEMC_METRY_FRAME[];
+    static const char SEMC_METRY_SPOT[];
+#endif
+
+
 #if defined(QCOM_HARDWARE) && defined(SAMSUNG_CAMERA_LEGACY)
     static const char FOCUS_MODE_FACEDETECT[];
     static const char FOCUS_MODE_TOUCHAF[];
