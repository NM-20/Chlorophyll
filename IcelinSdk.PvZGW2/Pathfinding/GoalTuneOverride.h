#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/GoalTune.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850878
   RuntimeId:        13C3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          07EC
   VfTable:          000000014227C6C0
   Address (Base):   000000014310FBD0
*/
#pragma pack(push, 8)
class GoalTuneOverride : public GoalTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(GoalTuneOverride) == 32);

}
