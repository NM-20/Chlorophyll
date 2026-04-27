#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/CustomObstacleData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873050
   RuntimeId:        2B7E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1172
   VfTable:          0000000142379530
   Address (Base):   0000000143104B90
*/
#pragma pack(push, 8)
class PVZCustomObstacleData : public CustomObstacleData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZCustomObstacleData) == 16);

}
