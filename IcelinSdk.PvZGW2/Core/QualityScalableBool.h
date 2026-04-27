#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833648
   RuntimeId:        011F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B5360
   Default Value:    0000000142B7DE9C
*/
#pragma pack(push, 1)
struct QualityScalableBool
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_BOOLEAN Low; /* 0x0000 */
  FB_BOOLEAN Medium; /* 0x0001 */
  FB_BOOLEAN High; /* 0x0002 */
  FB_BOOLEAN Ultra; /* 0x0003 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(QualityScalableBool) == 4);

}
