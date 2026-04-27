#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/WaypointData.h>
#include <IcelinSdk.PvZGW2/PVZShared/WaypointBaseTaskData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428730F0
   RuntimeId:        2B88
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EF8
   VfTable:          0000000142379660
   Address (Base):   00000001430F5350
*/
#pragma pack(push, 8)
class AbstractPVZWaypointData : public WaypointData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  WaypointBaseTaskData BaseTask; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AbstractPVZWaypointData) == 40);

}
