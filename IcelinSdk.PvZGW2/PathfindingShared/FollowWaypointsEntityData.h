#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/RouteType.h>

namespace fb
{

/* TypeInfo (Array): 000000014287A0B8
   RuntimeId:        2E7A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C93
   VfTable:          00000001423E43A8
   Address (Base):   0000000143102AF0
*/
#pragma pack(push, 8)
class FollowWaypointsEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  RouteType TypeOfRoute; /* 0x0018 */
  FB_BOOLEAN UsePathFinding; /* 0x001C */
  FB_BOOLEAN StartAtGeometricallyClosestWaypoint; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(FollowWaypointsEntityData) == 32);

}
