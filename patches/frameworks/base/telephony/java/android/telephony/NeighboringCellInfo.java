diff --git a/telephony/java/android/telephony/NeighboringCellInfo.java b/telephony/java/android/telephony/NeighboringCellInfo.java
index 5371573095..353ba68e95 100644
--- a/telephony/java/android/telephony/NeighboringCellInfo.java
+++ b/telephony/java/android/telephony/NeighboringCellInfo.java
@@ -109,8 +109,7 @@ public class NeighboringCellInfo implements Parcelable
      * {@link TelephonyManager#NETWORK_TYPE_HSDPA TelephonyManager.NETWORK_TYPE_HSDPA},
      * {@link TelephonyManager#NETWORK_TYPE_HSUPA TelephonyManager.NETWORK_TYPE_HSUPA},
      * {@link TelephonyManager#NETWORK_TYPE_HSPA TelephonyManager.NETWORK_TYPE_HSPA},
-     * {@link TelephonyManager#NETWORK_TYPE_HSPAP TelephonyManager.NETWORK_TYPE_HSPAP},
-     * and {@link TelephonyManager#NETWORK_TYPE_DCHSPAP TelephonyManager.NETWORK_TYPE_DCHSPAP}.
+     * and {@link TelephonyManager#NETWORK_TYPE_HSPAP TelephonyManager.NETWORK_TYPE_HSPAP}.
      */
     public NeighboringCellInfo(int rssi, String location, int radioType) {
         // set default value
@@ -223,8 +222,7 @@ public class NeighboringCellInfo implements Parcelable
      * {@link TelephonyManager#NETWORK_TYPE_HSDPA TelephonyManager.NETWORK_TYPE_HSDPA},
      * {@link TelephonyManager#NETWORK_TYPE_HSUPA TelephonyManager.NETWORK_TYPE_HSUPA},
      * {@link TelephonyManager#NETWORK_TYPE_HSPA TelephonyManager.NETWORK_TYPE_HSPA},
-     * {@link TelephonyManager#NETWORK_TYPE_HSPAP TelephonyManager.NETWORK_TYPE_HSPAP},
-     * or {@link TelephonyManager#NETWORK_TYPE_DCHSPAP TelephonyManager.NETWORK_TYPE_DCHSPAP}
+     * or {@link TelephonyManager#NETWORK_TYPE_HSPAP TelephonyManager.NETWORK_TYPE_HSPAP} 
      * means that Neighboring Cell information is stored for UMTS network, in
      * which {@link NeighboringCellInfo#getPsc NeighboringCellInfo.getPsc}
      * should be called to access location.
