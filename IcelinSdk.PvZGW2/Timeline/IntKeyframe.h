#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428547A8
   RuntimeId:        1767
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C78A8
   Default Value:    0000000142BF6E78
*/
#pragma pack(push, 4)
struct IntKeyframe
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0000 */
  FB_INT32 Value; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(IntKeyframe) == 8);

}
