#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2B37
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          000000014236B8C8
   Address:          00000001430C1308
   Default Value:    00000001428729F0
*/
#pragma pack(push, 8)
struct UIVKBDInputDoneMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(UIVKBDInputDoneMessage) == 64);

}
