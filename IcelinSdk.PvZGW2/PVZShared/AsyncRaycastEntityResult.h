#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865658
   RuntimeId:        22DB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B71B8
   Default Value:    0000000142BFEBE0
*/
#pragma pack(push, 16)
struct AsyncRaycastEntityResult
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 HitPos; /* 0x0000 */
  Vec3 Normal; /* 0x0010 */
  FB_UINT32 Material; /* 0x0020 */
  FB_FLOAT32 Lambda; /* 0x0024 */
  FB_FLOAT32 Distance; /* 0x0028 */
  FB_BOOLEAN HasHit; /* 0x002C */
  char pad_002D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(AsyncRaycastEntityResult) == 48);

}
