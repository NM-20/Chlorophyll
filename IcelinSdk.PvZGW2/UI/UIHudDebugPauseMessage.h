#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1808
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001422B82F0
   Address:          00000001430C7408
   Default Value:    00000001428551B0
*/
#pragma pack(push, 8)
struct UIHudDebugPauseMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0038];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIHudDebugPauseMessage) == 56);

}
