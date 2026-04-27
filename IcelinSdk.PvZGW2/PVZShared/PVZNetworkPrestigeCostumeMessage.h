#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        23D5
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014234EF58
   Address:          00000001430C3A48
   Default Value:    00000001428681C0
*/
#pragma pack(push, 8)
struct PVZNetworkPrestigeCostumeMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkPrestigeCostumeMessage) == 80);

}
