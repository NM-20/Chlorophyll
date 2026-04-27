#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZRouteType.h>

namespace fb
{

/* TypeInfo (Array): 000000014285FEC8
   RuntimeId:        1E2F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A05
   VfTable:          000000014231D348
   Address (Base):   00000001430E8620
*/
#pragma pack(push, 8)
class SuggestFollowWaypointPathEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZRouteType TypeOfRoute; /* 0x0018 */
  FB_BOOLEAN StartAtGeometricallyClosestWaypoint; /* 0x001C */
  FB_BOOLEAN DoOnce; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SuggestFollowWaypointPathEntityData) == 32);

}
