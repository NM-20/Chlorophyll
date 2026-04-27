#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/PathSpec.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        13F5
   TypeInfo Kind:    ClassInfo
   ClassId:          00D8
   VfTable:          0000000000000000
   Address (Base):   0000000143101DC0
*/
class NavPowerPathSpec : public PathSpec
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0018[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(NavPowerPathSpec) == 104);

}
