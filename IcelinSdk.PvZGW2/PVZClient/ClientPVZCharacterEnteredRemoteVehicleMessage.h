#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B4E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422DBED0
   Address:          00000001430C64E8
   Default Value:    0000000142859930
*/
#pragma pack(push, 8)
struct ClientPVZCharacterEnteredRemoteVehicleMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientPVZCharacterEnteredRemoteVehicleMessage) == 48);

}
