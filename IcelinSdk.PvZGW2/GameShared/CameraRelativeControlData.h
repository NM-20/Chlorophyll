#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/GameShared/CameraRelativeControlEnum.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CD98
   RuntimeId:        10B4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1279
   VfTable:          00000001422672F8
   Address (Base):   0000000143112450
*/
#pragma pack(push, 8)
class CameraRelativeControlData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  CameraRelativeControlEnum CameraRelativeControl; /* 0x0010 */
  FB_INT32 CameraRelativeControl_Forward; /* 0x0014 */
  FB_INT32 CameraRelativeControl_Back; /* 0x0018 */
  FB_INT32 CameraRelativeControl_Strafe; /* 0x001C */
  FB_INT32 ForcedMovingBodyWorldSpaceLock; /* 0x0020 */
  char pad_0024[0x0004];
  FB_STDARRAY(struct CameraRelativeControlPerSpeedData) SpeedRelativeData; /* 0x0028 */
  FB_INT32 ThrottleOutput; /* 0x0030 */
  FB_INT32 BrakeOutput; /* 0x0034 */
  FB_INT32 YawOutput; /* 0x0038 */
  FB_INT32 PitchOutput; /* 0x003C */
  FB_FLOAT32 ForceAlignYawTargetThreshold; /* 0x0040 */
  FB_FLOAT32 ForceAlignPitchTargetThreshold; /* 0x0044 */
  FB_BOOLEAN CombineWithNonRelativeControls; /* 0x0048 */
  FB_BOOLEAN UseCameraComponentTransform; /* 0x0049 */
  FB_BOOLEAN VehicleRelativeForward; /* 0x004A */
  FB_BOOLEAN VehicleRelativeStrafe; /* 0x004B */
  FB_BOOLEAN InvertedYawInReverse; /* 0x004C */
  FB_BOOLEAN ForceAlignYawWithCamera; /* 0x004D */
  FB_BOOLEAN ForceAlignPitchWithCamera; /* 0x004E */
  char pad_004F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(CameraRelativeControlData) == 80);

}
