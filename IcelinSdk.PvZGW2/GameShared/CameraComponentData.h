#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/GameShared/RegularCameraViewData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/SoldierAnimatedCameraData.h>
#include <IcelinSdk.PvZGW2/GameShared/StanceCameraData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CC78
   RuntimeId:        10A6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DB7
   VfTable:          0000000142267400
   Address (Base):   00000001430D6C70
*/
#pragma pack(push, 16)
class CameraComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  RegularCameraViewData RegularView; /* 0x0070 */
  Vec3 CameraTransitionPos; /* 0x00B0 */
  FB_HANDLE(class TargetCameraData) Camera; /* 0x00C0 */
  FB_FLOAT32 FieldOfView; /* 0x00C8 */
  FB_FLOAT32 ForceFieldOfView; /* 0x00CC */
  FB_HANDLE(class AlternateCameraViewData) AlternateView; /* 0x00D0 */
  FB_FLOAT32 OverrideFreelookPitch; /* 0x00D8 */
  FB_FLOAT32 OverrideFreelookYaw; /* 0x00DC */
  FB_HANDLE(class CameraRelativeControlData) CameraRelativeControlConfig; /* 0x00E0 */
  FB_FLOAT32 FreezeHeight; /* 0x00E8 */
  SoldierAnimatedCameraData SoldierAnimatedCamera; /* 0x00EC */
  FB_FLOAT32 CameraTransitionTime; /* 0x00F4 */
  FB_UINT32 MeshParentComponentNumber; /* 0x00F8 */
  char pad_00FC[0x0004];
  StanceCameraData StanceData; /* 0x0100 */
  FB_HANDLE(class CameraComponentSoundData) CameraSoundData; /* 0x0110 */
  FB_BOOLEAN EnableCameraMesh; /* 0x0118 */
  FB_BOOLEAN OverrideFreelookEnable; /* 0x0119 */
  FB_BOOLEAN AlternateViewEnabled; /* 0x011A */
  FB_BOOLEAN IsFirstPerson; /* 0x011B */
  FB_BOOLEAN ReceiveImpulsesAsThirdPerson; /* 0x011C */
  FB_BOOLEAN UseCameraTransition; /* 0x011D */
  char pad_011E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(CameraComponentData) == 288);

}
