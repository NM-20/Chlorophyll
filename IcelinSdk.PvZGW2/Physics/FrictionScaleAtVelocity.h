#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851398
   RuntimeId:        1462
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C88E8
   Default Value:    00000001428513B0
*/
#pragma pack(push, 4)
struct FrictionScaleAtVelocity
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 FrictionScale; /* 0x0000 */
  FB_FLOAT32 Velocity; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(FrictionScaleAtVelocity) == 8);

}
