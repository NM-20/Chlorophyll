#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835C38
   RuntimeId:        0343
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD3E8
   Default Value:    0000000142835C50
*/
#pragma pack(push, 4)
struct RangeMapperEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 RangeStart; /* 0x0000 */
  FB_FLOAT32 RangeEnd; /* 0x0004 */
  FB_FLOAT32 OutputValue; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(RangeMapperEntry) == 12);

}
