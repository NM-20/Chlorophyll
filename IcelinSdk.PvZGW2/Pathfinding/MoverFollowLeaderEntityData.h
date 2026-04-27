#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Pathfinding/FollowMoverSpec.h>

namespace fb
{

/* TypeInfo (Array): 00000001428509B8
   RuntimeId:        13D7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A74
   VfTable:          000000014227C5E0
   Address (Base):   00000001430EB560
*/
#pragma pack(push, 8)
class MoverFollowLeaderEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FollowMoverSpec FollowingParameters; /* 0x0018 */
  FB_UINT32 FlockId; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(MoverFollowLeaderEntityData) == 40);

}
