#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TriggerEventEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BFF0
   RuntimeId:        0FFA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B6B
   VfTable:          0000000142267D28
   Address (Base):   00000001430ED300
*/
#pragma pack(push, 16)
class DelayTriggerEntityData : public TriggerEventEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN AutoTriggerEvent; /* 0x0070 */
  char pad_0071[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(DelayTriggerEntityData) == 128);

}
