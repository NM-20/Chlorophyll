#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/RepulsionAccelerationTune.h>

namespace fb
{

/* TypeInfo (Array): 00000001428507F8
   RuntimeId:        13BB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          065A
   VfTable:          000000014227C700
   Address (Base):   000000014310FD50
*/
#pragma pack(push, 8)
class RepulsionAccelerationTuneOverride : public RepulsionAccelerationTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RepulsionAccelerationTuneOverride) == 40);

}
