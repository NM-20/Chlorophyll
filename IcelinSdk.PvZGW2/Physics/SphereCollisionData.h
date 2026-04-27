#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851310
   RuntimeId:        145C
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA4C0
   Default Value:    000000014284E29C
*/
#pragma pack(push, 4)
struct SphereCollisionData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 CounterNormalBrakeForceMod; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(SphereCollisionData) == 4);

}
