#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/TriggerFilterEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D358
   RuntimeId:        27C3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C46
   VfTable:          0000000142365E88
   Address (Base):   00000001430D34F0
*/
#pragma pack(push, 8)
class ControllableTriggerFilterEntityData : public TriggerFilterEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN CheckIsAlive; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ControllableTriggerFilterEntityData) == 32);

}
