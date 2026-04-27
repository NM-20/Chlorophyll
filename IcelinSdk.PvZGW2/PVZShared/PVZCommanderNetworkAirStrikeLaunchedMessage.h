#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2119
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142353A00
   Address:          00000001430C4B68
   Default Value:    0000000142863670
*/
#pragma pack(push, 16)
struct PVZCommanderNetworkAirStrikeLaunchedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0070];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(PVZCommanderNetworkAirStrikeLaunchedMessage) == 112);

}
