#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B4A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422DBE90
   Address:          00000001430C6568
   Default Value:    0000000142859820
*/
#pragma pack(push, 8)
struct ClientSoldierOnLandMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientSoldierOnLandMessage) == 48);

}
