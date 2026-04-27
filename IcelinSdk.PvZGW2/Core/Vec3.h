#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833CE8
   RuntimeId:        0147
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          0000000142833D00
   Default Value:    0000000000000000
*/
#pragma pack(push, 16)
struct Vec3
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 x; /* 0x0000 */
  FB_FLOAT32 y; /* 0x0004 */
  FB_FLOAT32 z; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(Vec3) == 16);

}
