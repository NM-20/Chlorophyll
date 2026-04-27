#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428658F8
   RuntimeId:        2305
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9200
   Default Value:    0000000142BFEC10
*/
#pragma pack(push, 4)
struct PVZKillWeight
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 LowIntenseWeight; /* 0x0000 */
  FB_FLOAT32 HighIntenseWeight; /* 0x0004 */
  FB_FLOAT32 CoolDownTime; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(PVZKillWeight) == 12);

}
