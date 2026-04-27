#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BAC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422400C8
   Address:          00000001430CAF08
   Default Value:    0000000142843EF0
*/
#pragma pack(push, 8)
struct UINetworkPlayerTextMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UINetworkPlayerTextMessage) == 88);

}
