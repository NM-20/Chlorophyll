#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C0A8
   RuntimeId:        26C2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2F68
   Default Value:    000000014286C0C0
*/
#pragma pack(push, 8)
struct DefaultBuffStateModifierData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_HANDLE(class BuffStateModifierData) BuffStateModifier; /* 0x0000 */
  FB_FLOAT32 Value; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(DefaultBuffStateModifierData) == 16);

}
