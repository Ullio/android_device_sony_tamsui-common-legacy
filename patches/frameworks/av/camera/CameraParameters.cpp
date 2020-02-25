diff --git a/camera/CameraParameters.cpp b/camera/CameraParameters.cpp
index fd3029d6e..6e4f1c53f 100644
--- a/camera/CameraParameters.cpp
+++ b/camera/CameraParameters.cpp
@@ -100,13 +100,16 @@ const char CameraParameters::KEY_SUPPORTED_SCENE_MODES[] = "scene-mode-values";
 #ifdef QCOM_HARDWARE
 const char CameraParameters::KEY_SCENE_DETECT[] = "scene-detect";
 const char CameraParameters::KEY_SUPPORTED_SCENE_DETECT[] = "scene-detect-values";
-#endif QCOM_HARDWARE
+#endif
 const char CameraParameters::KEY_FLASH_MODE[] = "flash-mode";
 const char CameraParameters::KEY_SUPPORTED_FLASH_MODES[] = "flash-mode-values";
 const char CameraParameters::KEY_FOCUS_MODE[] = "focus-mode";
 const char CameraParameters::KEY_SUPPORTED_FOCUS_MODES[] = "focus-mode-values";
 const char CameraParameters::KEY_MAX_NUM_FOCUS_AREAS[] = "max-num-focus-areas";
 const char CameraParameters::KEY_FOCUS_AREAS[] = "focus-areas";
+#ifdef SONY_CAMERA
+const char CameraParameters::KEY_FOCUS_AREA_CENTER[] = "focus-area-center";
+#endif
 const char CameraParameters::KEY_FOCAL_LENGTH[] = "focal-length";
 const char CameraParameters::KEY_HORIZONTAL_VIEW_ANGLE[] = "horizontal-view-angle";
 const char CameraParameters::KEY_VERTICAL_VIEW_ANGLE[] = "vertical-view-angle";
@@ -167,6 +170,9 @@ const char CameraParameters::KEY_VIDEO_STABILIZATION_SUPPORTED[] = "video-stabil
 const char CameraParameters::KEY_ZSL[] = "zsl";
 const char CameraParameters::KEY_SUPPORTED_ZSL_MODES[] = "zsl-values";
 const char CameraParameters::KEY_CAMERA_MODE[] = "camera-mode";
+#ifdef QCOM_SONY_HARDWARE
+const char CameraParameters::KEY_EX_SUPPORTED_METERING_MODES[] = "semc-metering-mode-values";
+#endif
 const char CameraParameters::KEY_POWER_MODE[] = "power-mode";
 const char CameraParameters::KEY_POWER_MODE_SUPPORTED[] = "power-mode-supported";
 #endif
@@ -341,6 +347,14 @@ const char CameraParameters::SCENE_MODE_BARCODE[] = "barcode";
 const char CameraParameters::SCENE_MODE_HDR[] = "hdr";
 #ifdef QCOM_HARDWARE
 const char CameraParameters::SCENE_MODE_AR[] = "AR";
+#ifdef QCOM_SONY_HARDWARE
+#ifdef QCOM_SONY_NEW_CAMERA
+const char CameraParameters::SCENE_MODE_DOCUMENT[] = "document";
+#else
+const char CameraParameters::EX_SCENE_MODE_DOCUMENT[] = "document";
+#endif
+#endif
+
 
 // Values for auto scene detection settings.
 const char CameraParameters::SCENE_DETECT_OFF[] = "off";
@@ -406,6 +420,12 @@ const char CameraParameters::AUTO_EXPOSURE_FRAME_AVG[] = "frame-average";
 const char CameraParameters::AUTO_EXPOSURE_CENTER_WEIGHTED[] = "center-weighted";
 const char CameraParameters::AUTO_EXPOSURE_SPOT_METERING[] = "spot-metering";
 
+#ifdef QCOM_SONY_HARDWARE
+const char CameraParameters::KEY_SEMC_METRY_MODE[] = "semc-metering-mode";
+const char CameraParameters::SEMC_METRY_CENTER[] = "center-weighted";
+const char CameraParameters::SEMC_METRY_FRAME[] = "frame-adverage";
+const char CameraParameters::SEMC_METRY_SPOT[] = "spot";
+#endif
 const char CameraParameters::KEY_GPS_LATITUDE_REF[] = "gps-latitude-ref";
 const char CameraParameters::KEY_GPS_LONGITUDE_REF[] = "gps-longitude-ref";
 const char CameraParameters::KEY_GPS_ALTITUDE_REF[] = "gps-altitude-ref";
@@ -932,6 +952,13 @@ void CameraParameters::setTouchIndexAf(int x, int y)
     set(KEY_TOUCH_INDEX_AF, str);
 }
 
+#ifdef QCOM_SONY_HARDWARE
+void CameraParameters::getFocusAreaCenter(int *x, int *y) const
+{
+    // dummy
+}
+#endif
+
 void CameraParameters::getMeteringAreaCenter(int *x, int *y) const
 {
     //Default invalid values
