#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C45
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245380
   Address:          00000001430CA268
   Default Value:    0000000142846B30
*/
#pragma pack(push, 8)
struct ServerVehicleDamageMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(ServerVehicleDamageMessage) == 80);

}
