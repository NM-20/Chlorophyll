#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffRestrictorData.h>
#include <IcelinSdk.PvZGW2/PVZShared/StateRestriction.h>

namespace fb
{

/* TypeInfo (Array): 000000014286CE08
   RuntimeId:        2782
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E1E
   VfTable:          0000000142366250
   Address (Base):   00000001430F6EB0
*/
#pragma pack(push, 8)
class CharacterSecondaryBuffRestrictorData : public BuffRestrictorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  StateRestriction Restriction; /* 0x0010 */
  char pad_0014[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(CharacterSecondaryBuffRestrictorData) == 24);

}
