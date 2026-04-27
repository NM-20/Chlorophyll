#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1804
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422B8330
   Address:          00000001430C7488
   Default Value:    00000001428550C0
*/
#pragma pack(push, 8)
struct UIMessageEntityMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UIMessageEntityMessage) == 64);

}
