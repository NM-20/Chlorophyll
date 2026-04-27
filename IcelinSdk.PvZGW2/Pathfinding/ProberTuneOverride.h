#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/ProberTune.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850858
   RuntimeId:        13C1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06A3
   VfTable:          000000014227C710
   Address (Base):   000000014310FC30
*/
#pragma pack(push, 8)
class ProberTuneOverride : public ProberTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(ProberTuneOverride) == 32);

}
