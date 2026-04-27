#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/AutoObstacleTune.h>

namespace fb
{

/* TypeInfo (Array): 00000001428508B8
   RuntimeId:        13C7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06FB
   VfTable:          000000014227C6D0
   Address (Base):   000000014310FB10
*/
#pragma pack(push, 8)
class AutoObstacleTuneOverride : public AutoObstacleTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AutoObstacleTuneOverride) == 40);

}
