#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F378
   RuntimeId:        1D7B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          105D
   VfTable:          000000014231DC38
   Address (Base):   000000014310ADD0
*/
#pragma pack(push, 8)
class BuffOthers : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MaxBuffTargetDistance; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(BuffOthers) == 24);

}
