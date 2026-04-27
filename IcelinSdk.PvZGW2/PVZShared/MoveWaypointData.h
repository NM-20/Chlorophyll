#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AbstractPVZWaypointData.h>
#include <IcelinSdk.PvZGW2/PVZShared/MoveTaskData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873198
   RuntimeId:        2B8C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EF9
   VfTable:          00000001423795F8
   Address (Base):   00000001430F4FF0
*/
#pragma pack(push, 16)
class MoveWaypointData : public AbstractPVZWaypointData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  char pad_0028[0x0008];
  MoveTaskData MoveTask; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(MoveWaypointData) == 96);

}
