#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Pathfinding/TurnInPlaceTune.h>

namespace fb
{

/* TypeInfo (Array): 00000001428507D8
   RuntimeId:        13B9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0685
   VfTable:          000000014227C750
   Address (Base):   000000014310FDB0
*/
#pragma pack(push, 8)
class TurnInPlaceTuneOverride : public TurnInPlaceTune
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(TurnInPlaceTuneOverride) == 48);

}
