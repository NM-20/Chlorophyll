#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B9A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240400
   Address:          00000001430CB0C8
   Default Value:    00000001428438D0
*/
#pragma pack(push, 8)
struct NetworkSynchronizeInternetSimulationStateMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x00B0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(NetworkSynchronizeInternetSimulationStateMessage) == 176);

}
