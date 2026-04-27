#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865DA8
   RuntimeId:        234D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AC4
   VfTable:          0000000142350938
   Address (Base):   00000001430E5920
*/
#pragma pack(push, 8)
class TeamSetupControlEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UnlockListData) TeamUnlockSets; /* 0x0018 */
  FB_UINT32 InitialPlantsCharacterSetId; /* 0x0020 */
  FB_UINT32 InitialZombiesCharacterSetId; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TeamSetupControlEntityData) == 40);

}
