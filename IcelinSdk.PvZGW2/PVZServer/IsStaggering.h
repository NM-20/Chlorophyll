#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EEF8
   RuntimeId:        1D33
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1058
   VfTable:          000000014231E0B8
   Address (Base):   000000014310BB50
*/
#pragma pack(push, 8)
class IsStaggering : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsStaggering) == 16);

}
