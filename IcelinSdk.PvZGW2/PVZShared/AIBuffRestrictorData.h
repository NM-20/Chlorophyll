#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffRestrictorData.h>
#include <IcelinSdk.PvZGW2/PVZShared/StateRestriction.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CDA8
   RuntimeId:        277C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E18
   VfTable:          0000000142366280
   Address (Base):   00000001430F6FD0
*/
#pragma pack(push, 8)
class AIBuffRestrictorData : public BuffRestrictorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  StateRestriction Restriction; /* 0x0010 */
  char pad_0014[0x0004];
  FB_REFARRAY(class CustomizeCharacterData) ExcludedAI; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AIBuffRestrictorData) == 32);

}
