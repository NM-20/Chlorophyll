#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B3C0
   RuntimeId:        2618
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8A60
   Default Value:    000000014286B3D8
*/
#pragma pack(push, 4)
struct RumbleFiringData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 LowRumble; /* 0x0000 */
  FB_FLOAT32 HighRumble; /* 0x0004 */
  FB_FLOAT32 RumbleDuration; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(RumbleFiringData) == 12);

}
