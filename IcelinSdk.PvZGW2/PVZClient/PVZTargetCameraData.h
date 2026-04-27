#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TargetCameraData.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859798
   RuntimeId:        1B44
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DCD
   VfTable:          00000001422DBEF0
   Address (Base):   00000001430D5950
*/
#pragma pack(push, 16)
class PVZTargetCameraData : public TargetCameraData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec2 TargetOffset; /* 0x00D0 */
  FB_FLOAT32 TargetVerticalOffset; /* 0x00D8 */
  FB_FLOAT32 TargetHorizontalOffset; /* 0x00DC */
  FB_FLOAT32 TargetRotationOffset; /* 0x00E0 */
  FB_FLOAT32 MaxViewRotationAngleDeg; /* 0x00E4 */
  FB_FLOAT32 WantedAngleDeg; /* 0x00E8 */
  FB_FLOAT32 CameraCollisionRayLength; /* 0x00EC */
  FB_FLOAT32 CameraCollisionRayLengthLookingUp; /* 0x00F0 */
  FB_FLOAT32 CameraCollisionPointOffset; /* 0x00F4 */
  FB_FLOAT32 CameraCollisionRayOffset; /* 0x00F8 */
  FB_FLOAT32 CameraCollisionRayExpandSpeed; /* 0x00FC */
  FB_FLOAT32 CameraPositionUpdateSpeed; /* 0x0100 */
  FB_FLOAT32 CameraPositionReferenceDistance; /* 0x0104 */
  FB_FLOAT32 CameraPositionMinSnapDistance; /* 0x0108 */
  FB_FLOAT32 LookDistanceScale; /* 0x010C */
  FB_FLOAT32 LookDistanceInFrontOfTarget; /* 0x0110 */
  FB_FLOAT32 OcclusionMinDistance; /* 0x0114 */
  FB_FLOAT32 BlendTimeFromPoppedCamera; /* 0x0118 */
  FB_BOOLEAN KeepTargetPitch; /* 0x011C */
  FB_BOOLEAN ShouldRollWithTarget; /* 0x011D */
  FB_BOOLEAN ShouldIgnoreCharacterCollision; /* 0x011E */
  FB_BOOLEAN IgnorePitch; /* 0x011F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(PVZTargetCameraData) == 288);

}
