#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B4F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422DBEE0
   Address:          00000001430C64C8
   Default Value:    0000000142859960
*/
#pragma pack(push, 8)
struct ClientPVZCharacterExitedRemoteVehicleMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(ClientPVZCharacterExitedRemoteVehicleMessage) == 48);

}
