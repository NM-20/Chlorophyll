#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428555B8
   RuntimeId:        1824
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0688
   VfTable:          00000001422BBF90
   Address (Base):   000000014310D950
*/
#pragma pack(push, 8)
class DestructionVolumeAsset : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TextureAsset) DiffuseAtlas; /* 0x0018 */
  FB_HANDLE(class TextureAsset) NormalmapAtlas; /* 0x0020 */
  FB_FLOAT32 AtlasTextureScale; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(DestructionVolumeAsset) == 48);

}
