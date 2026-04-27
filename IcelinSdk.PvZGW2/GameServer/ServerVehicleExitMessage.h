#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C48
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142245390
   Address:          00000001430CA208
   Default Value:    0000000142846C00
*/
#pragma pack(push, 8)
struct ServerVehicleExitMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(ServerVehicleExitMessage) == 64);

}
