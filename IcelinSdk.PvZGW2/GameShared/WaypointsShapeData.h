#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/VectorShapeData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F028
   RuntimeId:        1285
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0972
   VfTable:          0000000142274610
   Address (Base):   00000001430BEE90
*/
#pragma pack(push, 8)
class WaypointsShapeData : public VectorShapeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class WaypointData) Waypoints; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(WaypointsShapeData) == 48);

}
