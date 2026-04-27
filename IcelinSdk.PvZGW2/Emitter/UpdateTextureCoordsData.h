#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Emitter/TexCoordModifier.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839A78
   RuntimeId:        06E2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08D6
   VfTable:          00000001421FF7F8
   Address (Base):   00000001430F1E00
*/
#pragma pack(push, 8)
class UpdateTextureCoordsData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AtlasTextureAsset) BaseTexture; /* 0x0030 */
  FB_HANDLE(class AtlasTextureAsset) NormalTexture; /* 0x0038 */
  TexCoordModifier ModifierU; /* 0x0040 */
  TexCoordModifier ModifierV; /* 0x0044 */
  FB_FLOAT32 ScaleU; /* 0x0048 */
  FB_FLOAT32 ScaleV; /* 0x004C */
  FB_FLOAT32 BiasU; /* 0x0050 */
  FB_FLOAT32 BiasV; /* 0x0054 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UpdateTextureCoordsData) == 88);

}
