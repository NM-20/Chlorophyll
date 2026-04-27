#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23A9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234FB18
   Address:          00000001430C3F68
   Default Value:    00000001428672A0
*/
#pragma pack(push, 8)
struct PVZNetworkClientLanguageMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkClientLanguageMessage) == 80);

}
