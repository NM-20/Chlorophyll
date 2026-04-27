#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C42
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422453B0
   Address:          00000001430CA2C8
   Default Value:    0000000142843F48
*/
#pragma pack(push, 8)
struct ServerVehicleSpawnDoneMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(ServerVehicleSpawnDoneMessage) == 56);

}
