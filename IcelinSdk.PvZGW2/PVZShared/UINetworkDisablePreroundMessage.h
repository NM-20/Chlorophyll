#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B30
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236B7B8
   Address:          00000001430C13E8
   Default Value:    0000000142872860
*/
#pragma pack(push, 8)
struct UINetworkDisablePreroundMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UINetworkDisablePreroundMessage) == 72);

}
