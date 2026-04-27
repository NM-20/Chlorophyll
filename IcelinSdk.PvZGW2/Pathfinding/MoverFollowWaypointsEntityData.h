#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/RouteType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850998
   RuntimeId:        13D5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A0C
   VfTable:          000000014227C5A8
   Address (Base):   00000001430EB5C0
*/
#pragma pack(push, 8)
class MoverFollowWaypointsEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  RouteType TypeOfRoute; /* 0x0018 */
  FB_BOOLEAN StopAtWaypoints; /* 0x001C */
  FB_BOOLEAN StartAtGeometricallyClosestWaypoint; /* 0x001D */
  char pad_001E[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(MoverFollowWaypointsEntityData) == 32);

}
