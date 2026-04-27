#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EC78
   RuntimeId:        1D0B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1027
   VfTable:          000000014231E1D8
   Address (Base):   000000014310C2D0
*/
#pragma pack(push, 8)
class InSquadRadius : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 SquadRadius; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(InSquadRadius) == 24);

}
