#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839BF8
   RuntimeId:        06FA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08BC
   VfTable:          00000001421FF678
   Address (Base):   00000001430F19E0
*/
#pragma pack(push, 8)
class UpdateRibbonTextureData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 TextureParticleCount; /* 0x0030 */
  FB_BOOLEAN MirrorTexture; /* 0x0034 */
  FB_BOOLEAN BeamLikeCoords; /* 0x0035 */
  char pad_0036[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateRibbonTextureData) == 56);

}
