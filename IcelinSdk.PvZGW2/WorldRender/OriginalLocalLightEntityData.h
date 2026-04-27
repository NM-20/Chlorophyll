#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/LocalLightEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/WorldRender/EnlightenColorMode.h>

namespace fb
{

/* TypeInfo (Array): 0000000142855A28
   RuntimeId:        1858
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B64
   VfTable:          00000001422BBB78
   Address (Base):   00000001430E9D00
*/
#pragma pack(push, 16)
class OriginalLocalLightEntityData : public LocalLightEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 Color; /* 0x0070 */
  Vec3 EnlightenColorScale; /* 0x0080 */
  Vec3 ParticleColorScale; /* 0x0090 */
  FB_FLOAT32 Radius; /* 0x00A0 */
  FB_FLOAT32 Intensity; /* 0x00A4 */
  FB_FLOAT32 AttenuationOffset; /* 0x00A8 */
  EnlightenColorMode EnlightenColorMode; /* 0x00AC */
  FB_BOOLEAN DirectLightEnable; /* 0x00B0 */
  FB_BOOLEAN SpecularEnable; /* 0x00B1 */
  FB_BOOLEAN EnlightenEnable; /* 0x00B2 */
  char pad_00B3[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(OriginalLocalLightEntityData) == 192);

}
