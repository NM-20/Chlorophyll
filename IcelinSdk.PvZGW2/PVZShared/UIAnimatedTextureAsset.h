#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A290
   RuntimeId:        2561
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07CD
   VfTable:          000000014235B448
   Address (Base):   00000001430D9A10
*/
#pragma pack(push, 8)
class UIAnimatedTextureAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FrameRate; /* 0x0018 */
  char pad_001C[0x0004];
  FB_HANDLE(class TextureAsset) TextureAtlas; /* 0x0020 */
  FB_STDARRAY(struct UITextureAtlasInfo) TextureInfos; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIAnimatedTextureAsset) == 48);

}
