#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TriggerEntityData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BF90
   RuntimeId:        0FF4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B75
   VfTable:          0000000142267D98
   Address (Base):   00000001430ED3C0
*/
#pragma pack(push, 16)
class CombatActionTriggerEntityData : public TriggerEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TimeToTriggerOnNoAction; /* 0x0070 */
  char pad_0074[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(CombatActionTriggerEntityData) == 128);

}
