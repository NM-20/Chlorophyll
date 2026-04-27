#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E948
   RuntimeId:        1229
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07B4
   VfTable:          0000000142272D90
   Address (Base):   00000001431113D0
*/
#pragma pack(push, 8)
class TextureReference : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TextureAsset) Texture; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TextureReference) == 32);

}
