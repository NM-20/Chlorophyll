#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835618
   RuntimeId:        02EA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E7B
   VfTable:          00000001421EFA40
   Address (Base):   00000001430B64A0
*/
#pragma pack(push, 8)
class AntSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ForceLodDistance; /* 0x0010 */
  FB_INT32 MaxAnimatablesPerPoseJob; /* 0x0014 */
  FB_FLOAT32 ReducedInterpolationDistance; /* 0x0018 */
  FB_FLOAT32 TrajectoryInterpolationDistance; /* 0x001C */
  FB_INT32 MaxInterpolationSlots; /* 0x0020 */
  FB_INT32 MaxSingleBoneInterpolationSlots; /* 0x0024 */
  FB_FLOAT32 CheckGiantSoldiers; /* 0x0028 */
  FB_FLOAT32 LeanSignalScale; /* 0x002C */
  FB_FLOAT32 LeanSignalClamp; /* 0x0030 */
  FB_FLOAT32 DetailedCollisionSpeedLimit; /* 0x0034 */
  FB_FLOAT32 MaxInterpolationDistance; /* 0x0038 */
  FB_INT32 MaxInterpolationTicks; /* 0x003C */
  FB_INT32 AutoCullPixelSize; /* 0x0040 */
  FB_BOOLEAN UsePA; /* 0x0044 */
  FB_BOOLEAN UseHIK; /* 0x0045 */
  FB_BOOLEAN BlockOnJobs; /* 0x0046 */
  FB_BOOLEAN InterpolatePoses; /* 0x0047 */
  FB_BOOLEAN AllowVariableTickLength; /* 0x0048 */
  FB_BOOLEAN UseWeaponFov; /* 0x0049 */
  FB_BOOLEAN ForcePoseUpdate; /* 0x004A */
  FB_BOOLEAN UseCameraFov; /* 0x004B */
  FB_BOOLEAN EnablePA; /* 0x004C */
  FB_BOOLEAN ClientEmulatesServer; /* 0x004D */
  FB_BOOLEAN UpdateEnable; /* 0x004E */
  FB_BOOLEAN EnablePackageCache; /* 0x004F */
  FB_BOOLEAN EnableDebugLogFile; /* 0x0050 */
  FB_BOOLEAN EnablePoseJobs; /* 0x0051 */
  FB_BOOLEAN DisableAILodFeature; /* 0x0052 */
  FB_BOOLEAN DisableModelAnimationCulling; /* 0x0053 */
  FB_BOOLEAN EnableJobs; /* 0x0054 */
  FB_BOOLEAN RunAsHighPriority; /* 0x0055 */
  FB_BOOLEAN UpdateLoddingEnable; /* 0x0056 */
  FB_BOOLEAN EnableFrostbiteAntPhysicsWorld; /* 0x0057 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(AntSettings) == 88);

}
