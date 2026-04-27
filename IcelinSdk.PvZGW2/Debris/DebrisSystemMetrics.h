#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838F00
   RuntimeId:        064C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCDE8
   Default Value:    0000000142838F18
*/
#pragma pack(push, 4)
struct DebrisSystemMetrics
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 HavokParticleCount; /* 0x0000 */
  FB_INT32 HavokParticlePartCount; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(DebrisSystemMetrics) == 8);

}
