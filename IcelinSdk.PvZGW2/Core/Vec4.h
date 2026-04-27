#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428338E8
   RuntimeId:        0149
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          0000000142833CA0
   Default Value:    0000000000000000
*/
#pragma pack(push, 16)
struct Vec4
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 x; /* 0x0000 */
  FB_FLOAT32 y; /* 0x0004 */
  FB_FLOAT32 z; /* 0x0008 */
  FB_FLOAT32 w; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(Vec4) == 16);

}
