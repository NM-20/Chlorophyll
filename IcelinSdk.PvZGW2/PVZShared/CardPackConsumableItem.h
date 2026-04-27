#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BA80
   RuntimeId:        267A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07C3
   VfTable:          000000014235A960
   Address (Base):   00000001431064B0
*/
#pragma pack(push, 8)
class CardPackConsumableItem : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Key; /* 0x0018 */
  FB_UINT32 Identifier; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(CardPackConsumableItem) == 40);

}
