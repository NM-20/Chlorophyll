#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873A58
   RuntimeId:        2C10
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A90
   VfTable:          0000000142378EA8
   Address (Base):   00000001430E17E0
*/
#pragma pack(push, 8)
class BehaviorTriggerEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) Events; /* 0x0018 */
  FB_BOOLEAN BroadcastToAllAI; /* 0x0020 */
  FB_BOOLEAN Enabled; /* 0x0021 */
  char pad_0022[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BehaviorTriggerEntityData) == 40);

}
