#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A6E0
   RuntimeId:        0E9C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB3E0
   Default Value:    0000000142BF4CB0
*/
#pragma pack(push, 4)
struct AntDynamicAvoidanceBinding
{
  typedef struct ValueTypeInfo TypeInfo_t;

  AntRef TimeUntilCollision; /* 0x0000 */
  AntRef DistanceUntilCollision; /* 0x0014 */
  AntRef NormalizedVelocity; /* 0x0028 */
  AntRef Speed; /* 0x003C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(AntDynamicAvoidanceBinding) == 80);

}
