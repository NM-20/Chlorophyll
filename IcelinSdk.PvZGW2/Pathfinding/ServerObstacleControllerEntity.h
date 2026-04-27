#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/ObstacleControllerEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1384
   TypeInfo Kind:    EntityClassInfo
   ClassId:          03B8
   VfTable:          0000000000000000
   Address (Base):   0000000143138710
*/
class ServerObstacleControllerEntity : public ObstacleControllerEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(ServerObstacleControllerEntity) == 96);

}
