#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EA08
   RuntimeId:        1235
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1108
   VfTable:          0000000142272CF8
   Address (Base):   0000000143111190
*/
#pragma pack(push, 8)
class UnlockableTextureCollection : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TextureAsset) DefaultValue; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UnlockableTextureCollection) == 24);

}
