#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AD38
   RuntimeId:        25E2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8C80
   Default Value:    0000000142BFEC90
*/
#pragma pack(push, 4)
struct MissileUnguidedData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec2 StaticPosition; /* 0x0000 */
  Vec2 TargetPositionOffset; /* 0x0008 */
  FB_BOOLEAN UseStaticPosition; /* 0x0010 */
  FB_BOOLEAN UseTargetPosition; /* 0x0011 */
  char pad_0012[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(MissileUnguidedData) == 20);

}
