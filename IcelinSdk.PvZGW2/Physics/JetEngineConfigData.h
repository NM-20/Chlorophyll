#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/EngineConfigData.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 00000001428512F0
   RuntimeId:        145A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1006
   VfTable:          000000014227F5C0
   Address (Base):   00000001430FC070
*/
#pragma pack(push, 16)
class JetEngineConfigData : public EngineConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 DirectionVectorIndex; /* 0x0070 */
  FB_FLOAT32 ForceMagnitudeMultiplier; /* 0x0074 */
  FB_FLOAT32 AngleInputYMultiplier; /* 0x0078 */
  FB_FLOAT32 AngleInputPitchMultiplier; /* 0x007C */
  FB_FLOAT32 PitchForceModifier; /* 0x0080 */
  FB_FLOAT32 MaxVelocity; /* 0x0084 */
  FB_STDARRAY(struct SensitivityAtVelocity) SteeringSensitivity; /* 0x0088 */
  Vec2 PowerFadeOutRange; /* 0x0090 */
  FB_BOOLEAN IsTurnable; /* 0x0098 */
  FB_BOOLEAN IsWaterJetEngine; /* 0x0099 */
  FB_BOOLEAN UseForcePositionWaterTest; /* 0x009A */
  FB_BOOLEAN UseHullInWaterTest; /* 0x009B */
  char pad_009C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(JetEngineConfigData) == 160);

}
