#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285ED58
   RuntimeId:        1D19
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          103C
   VfTable:          000000014231E278
   Address (Base):   000000014310C030
*/
#pragma pack(push, 8)
class HasHumanTarget : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HasHumanTarget) == 16);

}
