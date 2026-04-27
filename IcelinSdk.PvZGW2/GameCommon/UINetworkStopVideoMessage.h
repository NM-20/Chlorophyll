#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BB4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223FE98
   Address:          00000001430CAE08
   Default Value:    0000000142844230
*/
#pragma pack(push, 8)
struct UINetworkStopVideoMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UINetworkStopVideoMessage) == 80);

}
