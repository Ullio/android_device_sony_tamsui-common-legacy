diff --git a/core/java/android/app/admin/DeviceAdminInfo.java b/core/java/android/app/admin/DeviceAdminInfo.java
index 3ea4c7f2d0..ad923d3104 100644
--- a/core/java/android/app/admin/DeviceAdminInfo.java
+++ b/core/java/android/app/admin/DeviceAdminInfo.java
@@ -414,8 +414,7 @@ public final class DeviceAdminInfo implements Parcelable {
      * {@link #USES_POLICY_RESET_PASSWORD}, {@link #USES_POLICY_FORCE_LOCK},
      * {@link #USES_POLICY_WIPE_DATA},
      * {@link #USES_POLICY_EXPIRE_PASSWORD}, {@link #USES_ENCRYPTED_STORAGE},
-     * {@link #USES_POLICY_DISABLE_CAMERA}, {@link #USES_POLICY_ENFORCE_SELINUX},
-     * {@link #USES_POLICY_ENFORCE_MMAC}.
+     * {@link #USES_POLICY_DISABLE_CAMERA}.
      */
     public boolean usesPolicy(int policyIdent) {
         return (mUsesPolicies & (1<<policyIdent)) != 0;
