#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZRouteType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873090
   RuntimeId:        2B82
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09E7
   VfTable:          0000000142379540
   Address (Base):   00000001430E1900
*/
#pragma pack(push, 8)
class PVZFollowWaypointsEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZRouteType TypeOfRoute; /* 0x0018 */
  FB_BOOLEAN StartAtGeometricallyClosestWaypoint; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PVZFollowWaypointsEntityData) == 32);

}
