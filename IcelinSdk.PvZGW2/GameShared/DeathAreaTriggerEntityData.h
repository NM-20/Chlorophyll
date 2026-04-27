#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TriggerEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849240
   RuntimeId:        0D64
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B6E
   VfTable:          00000001422603A0
   Address (Base):   00000001430EE320
*/
#pragma pack(push, 16)
class DeathAreaTriggerEntityData : public TriggerEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Damage; /* 0x0070 */
  FB_FLOAT32 TimeToReturn; /* 0x0074 */
  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(DeathAreaTriggerEntityData) == 128);

}
