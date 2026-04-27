#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851370
   RuntimeId:        1460
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C8908
   Default Value:    0000000142851388
*/
#pragma pack(push, 4)
struct SensitivityAtVelocity
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 SteeringSensitivity; /* 0x0000 */
  FB_FLOAT32 Velocity; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(SensitivityAtVelocity) == 8);

}
