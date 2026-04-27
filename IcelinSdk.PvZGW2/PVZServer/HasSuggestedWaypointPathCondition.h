#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F1F8
   RuntimeId:        1D63
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          102F
   VfTable:          000000014231DDD8
   Address (Base):   000000014310B250
*/
#pragma pack(push, 8)
class HasSuggestedWaypointPathCondition : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(HasSuggestedWaypointPathCondition) == 16);

}
