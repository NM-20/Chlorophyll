#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428646A8
   RuntimeId:        21FF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C48E8
   Default Value:    00000001428646C0
*/
#pragma pack(push, 8)
struct SelectFloatInput
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Name; /* 0x0000 */
  FB_FLOAT32 DefaultValue; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SelectFloatInput) == 16);

}
