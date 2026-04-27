#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871768
   RuntimeId:        2A79
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C02
   VfTable:          000000014236C7F8
   Address (Base):   00000001430E2F20
*/
#pragma pack(push, 8)
class AllowControllerReplacementEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN AllowControllerReplacement; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AllowControllerReplacementEntityData) == 32);

}
