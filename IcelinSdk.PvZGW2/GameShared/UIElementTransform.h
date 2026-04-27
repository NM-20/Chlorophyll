#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C4A8
   RuntimeId:        103E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB040
   Default Value:    0000000142BF4D60
*/
#pragma pack(push, 16)
struct UIElementTransform
{
  typedef struct ValueTypeInfo TypeInfo_t;

  Vec3 Rotation; /* 0x0000 */
  Vec3 RotationPivot; /* 0x0010 */
  FB_FLOAT32 Z; /* 0x0020 */
  char pad_0024[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIElementTransform) == 48);

}
