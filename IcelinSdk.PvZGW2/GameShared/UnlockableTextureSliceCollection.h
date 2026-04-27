#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EA28
   RuntimeId:        1237
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FD2
   VfTable:          0000000142272D20
   Address (Base):   0000000143111130
*/
#pragma pack(push, 8)
class UnlockableTextureSliceCollection : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 DefaultValue; /* 0x0010 */
  char pad_0014[0x0004];
  FB_REFARRAY(class TextureSliceUnlockPartData) PossibleValues; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UnlockableTextureSliceCollection) == 32);

}
