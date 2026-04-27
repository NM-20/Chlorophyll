#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>
#include <IcelinSdk.PvZGW2/PVZShared/AttackRange.h>

namespace fb
{

/* TypeInfo (Array): 000000014285F3B8
   RuntimeId:        1D7F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          102B
   VfTable:          000000014231DA98
   Address (Base):   000000014310AD10
*/
#pragma pack(push, 8)
class PreferedAttackRange : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AttackRange RangeType; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PreferedAttackRange) == 24);

}
