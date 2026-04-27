#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2116
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142353AF0
   Address:          00000001430C4BC8
   Default Value:    0000000142863550
*/
#pragma pack(push, 16)
struct PVZCommanderNetworkTriggerActionMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(PVZCommanderNetworkTriggerActionMessage) == 128);

}
