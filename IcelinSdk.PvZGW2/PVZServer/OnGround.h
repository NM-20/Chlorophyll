#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F118
   RuntimeId:        1D55
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1036
   VfTable:          000000014231DD38
   Address (Base):   000000014310B4F0
*/
#pragma pack(push, 8)
class OnGround : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(OnGround) == 16);

}
