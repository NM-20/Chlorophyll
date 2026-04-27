#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F138
   RuntimeId:        1D57
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          104A
   VfTable:          000000014231DD18
   Address (Base):   000000014310B490
*/
#pragma pack(push, 8)
class IsPathfinding : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsPathfinding) == 16);

}
