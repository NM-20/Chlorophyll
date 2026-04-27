#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/FollowerTune.h>

namespace fb
{

/* TypeInfo (Array): 00000001428508F8
   RuntimeId:        13CB
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          064D
   VfTable:          000000014227C6B0
   Address (Base):   000000014310FA50
*/
#pragma pack(push, 8)
class FollowerTuneOverride : public FollowerTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(FollowerTuneOverride) == 48);

}
