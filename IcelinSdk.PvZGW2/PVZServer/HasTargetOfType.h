#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/AITypeFilterWrapper.h>

namespace fb
{

/* TypeInfo (Array): 000000014285ED18
   RuntimeId:        1D15
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1054
   VfTable:          000000014231E138
   Address (Base):   000000014310C0F0
*/
#pragma pack(push, 8)
class HasTargetOfType : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AITypeFilterWrapper TypeFilter; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(HasTargetOfType) == 24);

}
