#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BA9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000142240078
   Address:          00000001430CAF48
   Default Value:    0000000142843E20
*/
#pragma pack(push, 8)
struct UINetworkHudTextMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0068];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(UINetworkHudTextMessage) == 104);

}
