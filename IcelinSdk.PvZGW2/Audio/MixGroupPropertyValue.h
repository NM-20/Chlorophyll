#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428363A8
   RuntimeId:        03B9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD328
   Default Value:    0000000142BEBE20
*/
#pragma pack(push, 4)
struct MixGroupPropertyValue
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 Property; /* 0x0000 */
  FB_FLOAT32 Value; /* 0x0004 */
  FB_BOOLEAN Controlled; /* 0x0008 */
  char pad_0009[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(MixGroupPropertyValue) == 12);

}
