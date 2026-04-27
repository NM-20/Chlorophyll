#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428338C8
   RuntimeId:        0145
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          0000000142833CC0
   Default Value:    0000000000000000
*/
#pragma pack(push, 4)
struct Vec2
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 x; /* 0x0000 */
  FB_FLOAT32 y; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(Vec2) == 8);

}
