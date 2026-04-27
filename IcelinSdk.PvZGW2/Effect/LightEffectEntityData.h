#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ChildEffectEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec4.h>
#include <IcelinSdk.PvZGW2/Core/QualityScalableFloat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839270
   RuntimeId:        067F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B90
   VfTable:          00000001421FEA08
   Address (Base):   00000001430FE2F0
*/
#pragma pack(push, 16)
class LightEffectEntityData : public ChildEffectEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec4 IntensityCurve; /* 0x00A0 */
  FB_HANDLE(class LocalLightEntityData) Light; /* 0x00B0 */
  FB_FLOAT32 Lifetime; /* 0x00B8 */
  QualityScalableFloat SpawnProbability; /* 0x00BC */
  FB_FLOAT32 RandomIntensityMin; /* 0x00CC */
  FB_FLOAT32 RandomIntensityMax; /* 0x00D0 */
  FB_FLOAT32 IntensityMin; /* 0x00D4 */
  FB_FLOAT32 IntensityMax; /* 0x00D8 */
  FB_BOOLEAN Looping; /* 0x00DC */
  FB_BOOLEAN LocalPlayerOnly; /* 0x00DD */
  char pad_00DE[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(LightEffectEntityData) == 224);

}
