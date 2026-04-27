#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EF38
   RuntimeId:        1D37
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1063
   VfTable:          000000014231E078
   Address (Base):   000000014310BA90
*/
#pragma pack(push, 8)
class ShouldFleeChomper : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 FleeProximity; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(ShouldFleeChomper) == 24);

}
