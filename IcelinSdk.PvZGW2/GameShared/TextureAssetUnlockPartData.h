#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E988
   RuntimeId:        122D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FB1
   VfTable:          0000000142272D70
   Address (Base):   0000000143111310
*/
#pragma pack(push, 8)
class TextureAssetUnlockPartData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TextureAsset) Texture; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TextureAssetUnlockPartData) == 24);

}
