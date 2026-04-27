#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/PVZShared/ZoomLevelActivateEventType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DBB8
   RuntimeId:        2846
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E39
   VfTable:          000000014236E940
   Address (Base):   0000000143105850
*/
#pragma pack(push, 8)
class ZoomLevelData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FieldOfView; /* 0x0010 */
  FB_FLOAT32 FieldOfViewSP; /* 0x0014 */
  FB_HANDLE(class FOVTransitionData) FieldOfViewTransition; /* 0x0018 */
  FB_FLOAT32 LookSpeedMultiplier; /* 0x0020 */
  FB_FLOAT32 SprintLookSpeedMultiplier; /* 0x0024 */
  FB_FLOAT32 MoveSpeedMultiplier; /* 0x0028 */
  FB_FLOAT32 SwayPitchMagnitude; /* 0x002C */
  FB_FLOAT32 SwayYawMagnitude; /* 0x0030 */
  FB_FLOAT32 SupportedSwayPitchMagnitude; /* 0x0034 */
  FB_FLOAT32 SupportedSwayYawMagnitude; /* 0x0038 */
  FB_FLOAT32 SuppressedSwayPitchMagnitude; /* 0x003C */
  FB_FLOAT32 SuppressedSwayYawMagnitude; /* 0x0040 */
  FB_FLOAT32 SuppressedSwayMinFactor; /* 0x0044 */
  FB_FLOAT32 TimePitchMultiplier; /* 0x0048 */
  FB_FLOAT32 TimeYawMultiplier; /* 0x004C */
  FB_FLOAT32 DispersionMultiplier; /* 0x0050 */
  FB_FLOAT32 DispersionRotation; /* 0x0054 */
  FB_FLOAT32 RecoilMultiplier; /* 0x0058 */
  FB_FLOAT32 RecoilFovMultiplier; /* 0x005C */
  FB_FLOAT32 CameraImpulseMultiplier; /* 0x0060 */
  FB_FLOAT32 StartFadeToBlackAtTime; /* 0x0064 */
  FB_FLOAT32 FadeToBlackDuration; /* 0x0068 */
  FB_FLOAT32 StartFadeFromBlackAtTime; /* 0x006C */
  FB_FLOAT32 FadeFromBlackDuration; /* 0x0070 */
  FB_FLOAT32 ScreenExposureAreaScale; /* 0x0074 */
  ZoomLevelActivateEventType OnActivateEventType; /* 0x0078 */
  FB_FLOAT32 AttractYawStrength; /* 0x007C */
  FB_FLOAT32 AttractPitchStrength; /* 0x0080 */
  FB_FLOAT32 dofMaxBlurDelta; /* 0x0084 */
  FB_FLOAT32 dofFarStartDelta; /* 0x0088 */
  FB_BOOLEAN AllowFieldOfViewScaling; /* 0x008C */
  FB_BOOLEAN FadeToBlackInZoomTransition; /* 0x008D */
  FB_BOOLEAN UseFovSpecialisation; /* 0x008E */
  FB_BOOLEAN UseWeaponMeshZoom1p; /* 0x008F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(ZoomLevelData) == 144);

}
