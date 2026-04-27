#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AE78
   RuntimeId:        25F4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8C20
   Default Value:    0000000142BFECB8
*/
#pragma pack(push, 4)
struct RumbleLoopData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 LowRumble; /* 0x0000 */
  FB_FLOAT32 HighRumble; /* 0x0004 */
  FB_FLOAT32 Duration; /* 0x0008 */
  FB_FLOAT32 TimeBetweenRumbles; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(RumbleLoopData) == 16);

}
