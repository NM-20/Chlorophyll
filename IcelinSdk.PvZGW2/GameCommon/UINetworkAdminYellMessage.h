#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BAD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014223FFD8
   Address:          00000001430CAEE8
   Default Value:    0000000142843F80
*/
#pragma pack(push, 8)
struct UINetworkAdminYellMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UINetworkAdminYellMessage) == 88);

}
