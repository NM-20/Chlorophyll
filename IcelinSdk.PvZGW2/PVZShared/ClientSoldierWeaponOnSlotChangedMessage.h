#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        20DF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142353EE0
   Address:          00000001430C4D48
   Default Value:    0000000142863000
*/
#pragma pack(push, 8)
struct ClientSoldierWeaponOnSlotChangedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ClientSoldierWeaponOnSlotChangedMessage) == 64);

}
