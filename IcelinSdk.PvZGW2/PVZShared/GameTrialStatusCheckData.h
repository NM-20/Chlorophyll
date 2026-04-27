#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871598
   RuntimeId:        2A61
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B94
   VfTable:          000000014236C8B0
   Address (Base):   00000001430E3700
*/
#pragma pack(push, 8)
class GameTrialStatusCheckData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(GameTrialStatusCheckData) == 24);

}
