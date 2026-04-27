#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B94
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240540
   Address:          00000001430CB188
   Default Value:    0000000142843670
*/
#pragma pack(push, 8)
struct NetworkSetPlayerViewMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(NetworkSetPlayerViewMessage) == 88);

}
