#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E968
   RuntimeId:        122B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0837
   VfTable:          0000000142272D60
   Address (Base):   0000000143111370
*/
#pragma pack(push, 8)
class TextureUnlockPartData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class TextureReference) TextureReference; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TextureUnlockPartData) == 24);

}
