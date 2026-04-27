#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EED8
   RuntimeId:        1D31
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          101D
   VfTable:          000000014231E0D8
   Address (Base):   000000014310BBB0
*/
#pragma pack(push, 8)
class StaggerDamageThreshold : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(StaggerDamageThreshold) == 16);

}
