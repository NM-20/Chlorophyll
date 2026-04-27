#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142843E90
   RuntimeId:        0BAB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CAF28
   Default Value:    0000000142843EA8
*/
#pragma pack(push, 8)
struct UINetworkTextInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING StringId; /* 0x0000 */
  FB_FLOAT32 DisplayTime; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UINetworkTextInfo) == 16);

}
