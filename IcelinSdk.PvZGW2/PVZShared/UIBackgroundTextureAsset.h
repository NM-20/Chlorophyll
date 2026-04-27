#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A2F0
   RuntimeId:        2567
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0788
   VfTable:          000000014235B3C0
   Address (Base):   00000001430F7810
*/
#pragma pack(push, 8)
class UIBackgroundTextureAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TextureAsset) TextureArray; /* 0x0018 */
  FB_STDARRAY(struct UIBackgroundTextureDesc) TextureDesc; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(UIBackgroundTextureAsset) == 40);

}
