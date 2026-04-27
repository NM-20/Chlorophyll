#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F518
   RuntimeId:        1D95
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1028
   VfTable:          000000014231DAB8
   Address (Base):   000000014310A8F0
*/
#pragma pack(push, 8)
class IsForceDetonate : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsForceDetonate) == 16);

}
