#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffRestrictorData.h>
#include <IcelinSdk.PvZGW2/PVZShared/StateRestriction.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CE68
   RuntimeId:        2788
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E17
   VfTable:          0000000142366140
   Address (Base):   00000001430F6D90
*/
#pragma pack(push, 8)
class PVZCharacterHealthBuffRestrictorData : public BuffRestrictorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  StateRestriction ImmortalRestriction; /* 0x0010 */
  StateRestriction SpawningRestriction; /* 0x0014 */
  StateRestriction AliveRestriction; /* 0x0018 */
  StateRestriction DeadRestriction; /* 0x001C */
  StateRestriction DyingRestriction; /* 0x0020 */
  StateRestriction ManDownRestriction; /* 0x0024 */
  StateRestriction HealingOverTimeRestriction; /* 0x0028 */
  char pad_002C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterHealthBuffRestrictorData) == 48);

}
