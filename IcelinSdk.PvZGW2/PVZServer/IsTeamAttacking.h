#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F078
   RuntimeId:        1D4B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          105E
   VfTable:          000000014231DF58
   Address (Base):   000000014310B6D0
*/
#pragma pack(push, 8)
class IsTeamAttacking : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(IsTeamAttacking) == 16);

}
