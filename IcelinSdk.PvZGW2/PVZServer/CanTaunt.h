#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F318
   RuntimeId:        1D75
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1045
   VfTable:          000000014231DC98
   Address (Base):   000000014310AEF0
*/
#pragma pack(push, 8)
class CanTaunt : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(CanTaunt) == 16);

}
