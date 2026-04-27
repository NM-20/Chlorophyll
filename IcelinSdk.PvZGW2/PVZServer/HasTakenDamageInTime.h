#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeBoolProvider.h>

namespace fb
{

/* TypeInfo (Array): 000000014285EEB8
   RuntimeId:        1D2F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          103A
   VfTable:          000000014231E0F8
   Address (Base):   000000014310BC10
*/
#pragma pack(push, 8)
class HasTakenDamageInTime : public PVZBTreeBoolProvider
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DamagePercent; /* 0x0010 */
  FB_FLOAT32 TimeSince; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(HasTakenDamageInTime) == 24);

}
