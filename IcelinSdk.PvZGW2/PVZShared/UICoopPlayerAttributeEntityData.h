#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870B60
   RuntimeId:        29ED
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09CE
   VfTable:          000000014236D270
   Address (Base):   00000001430E3A00
*/
#pragma pack(push, 8)
class UICoopPlayerAttributeEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 PlayerIndex; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UICoopPlayerAttributeEntityData) == 32);

}
