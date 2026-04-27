#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864B18
   RuntimeId:        2230
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BBC
   VfTable:          00000001423520D8
   Address (Base):   00000001430E6100
*/
#pragma pack(push, 8)
class HealerFilterEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId TargetTeam; /* 0x0018 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(HealerFilterEntityData) == 32);

}
