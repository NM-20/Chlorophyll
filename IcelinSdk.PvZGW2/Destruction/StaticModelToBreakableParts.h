#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839150
   RuntimeId:        066C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCCE8
   Default Value:    0000000142B894B0
*/
#pragma pack(push, 4)
struct StaticModelToBreakableParts
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 StaticModelIndex; /* 0x0000 */
  FB_UINT32 BreakablePartStartIndex; /* 0x0004 */
  FB_UINT32 BreakablePartCount; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(StaticModelToBreakableParts) == 12);

}
