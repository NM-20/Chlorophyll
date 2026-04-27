#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TargetCameraData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284DA18
   RuntimeId:        115B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DCA
   VfTable:          0000000142273B68
   Address (Base):   00000001430FCA90
*/
#pragma pack(push, 16)
class StaticCameraData : public TargetCameraData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct Vec3) LeftCurve; /* 0x00D0 */
  FB_STDARRAY(struct Vec3) RightCurve; /* 0x00D8 */
  FB_STDARRAY(struct Vec3) UpCurve; /* 0x00E0 */
  FB_STDARRAY(struct Vec3) DownCurve; /* 0x00E8 */
  FB_REFARRAY(class CameraLoosePartPhysicsData) LoosePartPhysics; /* 0x00F0 */
  FB_FLOAT32 LeftYawAngle; /* 0x00F8 */
  FB_FLOAT32 RightYawAngle; /* 0x00FC */
  FB_FLOAT32 UpPitchAngle; /* 0x0100 */
  FB_FLOAT32 DownPitchAngle; /* 0x0104 */
  FB_INT32 AverageFilterFrames; /* 0x0108 */
  FB_INT32 YawInputAction; /* 0x010C */
  FB_INT32 PitchInputAction; /* 0x0110 */
  FB_FLOAT32 WorldSpaceLockEfficiencyYaw; /* 0x0114 */
  FB_FLOAT32 WorldSpaceLockEfficiencyPitch; /* 0x0118 */
  FB_FLOAT32 YawSensitivityNonZoomed; /* 0x011C */
  FB_FLOAT32 YawSensitivityZoomed; /* 0x0120 */
  FB_FLOAT32 PitchSensitivityNonZoomed; /* 0x0124 */
  FB_FLOAT32 PitchSensitivityZoomed; /* 0x0128 */
  FB_BOOLEAN MergeLeftAndRightCurves; /* 0x012C */
  FB_BOOLEAN MergeUpAndDownCurves; /* 0x012D */
  FB_BOOLEAN MirrorHorizontalCurves; /* 0x012E */
  FB_BOOLEAN MirrorVerticalCurves; /* 0x012F */
  FB_BOOLEAN AccumulateInput; /* 0x0130 */
  FB_BOOLEAN ResetAccumulatedInputOnViewChange; /* 0x0131 */
  char pad_0132[0x000E];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */
#pragma pack(pop)

static_assert(sizeof(StaticCameraData) == 320);

}
