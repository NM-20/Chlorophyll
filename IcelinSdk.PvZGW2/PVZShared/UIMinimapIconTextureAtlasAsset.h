#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A430
   RuntimeId:        2579
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07CB
   VfTable:          000000014235B378
   Address (Base):   0000000143106090
*/
#pragma pack(push, 8)
class UIMinimapIconTextureAtlasAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct UIMinimapIconTexture) Icons; /* 0x0018 */
  FB_HANDLE(class TextureAsset) TextureAtlas; /* 0x0020 */
  FB_CSTRING JsonData; /* 0x0028 */
  FB_BOOLEAN OnDemandEnable; /* 0x0030 */
  char pad_0031[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIMinimapIconTextureAtlasAsset) == 56);

}
