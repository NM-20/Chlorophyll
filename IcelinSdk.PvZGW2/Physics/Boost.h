#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428511F8
   RuntimeId:        144C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA520
   Default Value:    0000000142851210
*/
#pragma pack(push, 4)
struct Boost
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 ForwardStrength; /* 0x0000 */
  FB_FLOAT32 ReverseStrength; /* 0x0004 */
  FB_FLOAT32 DissipationTime; /* 0x0008 */
  FB_FLOAT32 RecoveryTime; /* 0x000C */
  FB_FLOAT32 CrawlStrength; /* 0x0010 */
  FB_FLOAT32 AccelerationScale; /* 0x0014 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(Boost) == 24);

}
