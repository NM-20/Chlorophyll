#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F338
   RuntimeId:        1D77
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1051
   VfTable:          000000014231DC78
   Address (Base):   000000014310AE90
*/
#pragma pack(push, 8)
class IsTaunting : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsTaunting) == 16);

}
