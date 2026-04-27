#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284E200
   RuntimeId:        11CD
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BABA0
   Default Value:    0000000142BF4F90
*/
#pragma pack(push, 16)
struct PitchModifier
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Offset; /* 0x0000 */
  FB_FLOAT32 PitchVal; /* 0x0010 */
  FB_FLOAT32 PitchAngle; /* 0x0014 */
  char pad_0018[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PitchModifier) == 32);

}
