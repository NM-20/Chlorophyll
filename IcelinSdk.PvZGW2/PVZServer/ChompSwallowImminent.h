#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F038
   RuntimeId:        1D47
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          101F
   VfTable:          000000014231DF98
   Address (Base):   000000014310B790
*/
#pragma pack(push, 8)
class ChompSwallowImminent : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ChompSwallowImminent) == 16);

}
