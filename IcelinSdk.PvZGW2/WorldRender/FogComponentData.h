#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VisualEnvironmentComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855D08
   RuntimeId:        1886
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D72
   VfTable:          00000001422BB6D0
   Address (Base):   00000001430E95E0
*/
#pragma pack(push, 16)
class FogComponentData : public VisualEnvironmentComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 Curve; /* 0x0080 */
  Vec3 FogColor; /* 0x0090 */
  Vec4 FogColorCurve; /* 0x00A0 */
  Vec4 TransparencyFadeCurve; /* 0x00B0 */
  Vec3 ForwardLightScatteringColor; /* 0x00C0 */
  Realm Realm; /* 0x00D0 */
  FB_FLOAT32 FogDistanceMultiplier; /* 0x00D4 */
  FB_FLOAT32 Start; /* 0x00D8 */
  FB_FLOAT32 End; /* 0x00DC */
  FB_FLOAT32 FogColorStart; /* 0x00E0 */
  FB_FLOAT32 FogColorEnd; /* 0x00E4 */
  FB_FLOAT32 TransparencyFadeStart; /* 0x00E8 */
  FB_FLOAT32 TransparencyFadeEnd; /* 0x00EC */
  FB_FLOAT32 TransparencyFadeClamp; /* 0x00F0 */
  FB_FLOAT32 ForwardLightScatteringPhaseG; /* 0x00F4 */
  FB_FLOAT32 ForwardLightScatteringStrength; /* 0x00F8 */
  FB_FLOAT32 ForwardLightScatteringPresence; /* 0x00FC */
  FB_FLOAT32 ForwardLightScatteringMaxBlurLength; /* 0x0100 */
  FB_FLOAT32 ForwardLightScatteringExtinction; /* 0x0104 */
  FB_FLOAT32 ForwardLightScatteringSmoothness; /* 0x0108 */
  FB_FLOAT32 HeightFogFollowCamera; /* 0x010C */
  FB_FLOAT32 HeightFogAltitude; /* 0x0110 */
  FB_FLOAT32 HeightFogDepth; /* 0x0114 */
  FB_FLOAT32 HeightFogVisibilityRange; /* 0x0118 */
  FB_BOOLEAN Enable; /* 0x011C */
  FB_BOOLEAN FogGradientEnable; /* 0x011D */
  FB_BOOLEAN FogColorEnable; /* 0x011E */
  FB_BOOLEAN ForwardLightScatteringEnabled; /* 0x011F */
  FB_BOOLEAN HeightFogEnable; /* 0x0120 */
  char pad_0121[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0130 */
#pragma pack(pop)

static_assert(sizeof(FogComponentData) == 304);

}
