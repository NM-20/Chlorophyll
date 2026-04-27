#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285ED38
   RuntimeId:        1D17
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1061
   VfTable:          000000014231E298
   Address (Base):   000000014310C090
*/
#pragma pack(push, 8)
class IsBeingTargeted : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsBeingTargeted) == 16);

}
