#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E9A8
   RuntimeId:        122F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1147
   VfTable:          0000000142272D40
   Address (Base):   00000001431112B0
*/
#pragma pack(push, 8)
class TextureSliceUnlockPartData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 SliceIndex; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TextureSliceUnlockPartData) == 24);

}
