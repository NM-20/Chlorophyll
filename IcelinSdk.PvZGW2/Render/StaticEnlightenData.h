#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 00000001428528A0
   RuntimeId:        15B2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06A0
   VfTable:          00000001422977C0
   Address (Base):   000000014310E910
*/
#pragma pack(push, 8)
class StaticEnlightenData : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TextureAsset) StaticIrradianceTexture; /* 0x0018 */
  FB_RESOURCEREF DatabaseResource; /* 0x0020 */
  FB_HANDLE(class TextureAsset) StaticDirectionTexture; /* 0x0028 */
  FB_HANDLE(class TextureAsset) StaticDirectionTextureG; /* 0x0030 */
  FB_HANDLE(class TextureAsset) StaticDirectionTextureB; /* 0x0038 */
  FB_BOOLEAN StaticGen4Enable; /* 0x0040 */
  FB_BOOLEAN DirectionTextureCompressionEnable; /* 0x0041 */
  char pad_0042[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(StaticEnlightenData) == 72);

}
