#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862598
   RuntimeId:        2064
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B4E
   VfTable:          0000000142343CC8
   Address (Base):   00000001430D04A0
*/
#pragma pack(push, 16)
class PVZAnimatedWaypointEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0060 */
  char pad_0064[0x0004];
  FB_HANDLE(class PVZAnimatedWaypointData) WaypointData; /* 0x0068 */
  FB_FLOAT32 Weighting; /* 0x0070 */
  FB_UINT32 Loops; /* 0x0074 */
  FB_BOOLEAN AutoActivate; /* 0x0078 */
  FB_BOOLEAN TriggerNextWaypointOnDeactivate; /* 0x0079 */
  char pad_007A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PVZAnimatedWaypointEntityData) == 128);

}
