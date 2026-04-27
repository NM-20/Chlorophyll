#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        180B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422B82A0
   Address:          00000001430C73A8
   Default Value:    0000000142855280
*/
#pragma pack(push, 8)
struct UIInputStatusChangedMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UIInputStatusChangedMessage) == 64);

}
