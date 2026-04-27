#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/ShaderCustomizationUnlockPartCollection.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EAB8
   RuntimeId:        123F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F0C
   VfTable:          0000000142272CB8
   Address (Base):   0000000143111070
*/
#pragma pack(push, 8)
class ShaderTextureUnlockPartCollection : public ShaderCustomizationUnlockPartCollection
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TextureReference) DefaultTextureReference; /* 0x0028 */
  FB_REFARRAY(class TextureUnlockPartData) UnlockParts; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ShaderTextureUnlockPartCollection) == 56);

}
