#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856148
   RuntimeId:        18CA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F23
   VfTable:          00000001422C4C98
   Address (Base):   000000014310D650
*/
#pragma pack(push, 16)
class FogEffectState : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Start; /* 0x0010 */
  FB_FLOAT32 End; /* 0x0014 */
  char pad_0018[0x0008];
  Vec4 Curve; /* 0x0020 */
  Vec3 FogColor; /* 0x0030 */
  Vec4 FogColorCurve; /* 0x0040 */
  Vec3 ForwardLightScatteringColor; /* 0x0050 */
  FB_FLOAT32 FogColorStart; /* 0x0060 */
  FB_FLOAT32 FogColorEnd; /* 0x0064 */
  FB_FLOAT32 TransparencyFadeStart; /* 0x0068 */
  FB_FLOAT32 TransparencyFadeEnd; /* 0x006C */
  FB_FLOAT32 TransparencyFadeClamp; /* 0x0070 */
  FB_FLOAT32 ForwardLightScatteringPhaseG; /* 0x0074 */
  FB_FLOAT32 ForwardLightScatteringStrength; /* 0x0078 */
  FB_FLOAT32 ForwardLightScatteringPresence; /* 0x007C */
  FB_FLOAT32 ForwardLightScatteringMaxBlurLength; /* 0x0080 */
  FB_FLOAT32 ForwardLightScatteringExtinction; /* 0x0084 */
  FB_FLOAT32 ForwardLightScatteringSmoothness; /* 0x0088 */
  FB_FLOAT32 HeightFogFollowCamera; /* 0x008C */
  FB_FLOAT32 HeightFogAltitude; /* 0x0090 */
  FB_FLOAT32 HeightFogDepth; /* 0x0094 */
  FB_FLOAT32 HeightFogVisibilityRange; /* 0x0098 */
  FB_BOOLEAN Enable; /* 0x009C */
  FB_BOOLEAN ForwardLightScatteringEnabled; /* 0x009D */
  FB_BOOLEAN HeightFogEnable; /* 0x009E */
  char pad_009F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(FogEffectState) == 160);

}
