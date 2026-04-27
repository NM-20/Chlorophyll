#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementColor.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C638
   RuntimeId:        104E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAFE0
   Default Value:    000000014284C650
*/
#pragma pack(push, 16)
struct UIElementBitmapDistanceFieldParams
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIElementColor OutlineColor; /* 0x0000 */
  FB_FLOAT32 AlphaThreshold; /* 0x0020 */
  FB_FLOAT32 DistanceScale; /* 0x0024 */
  FB_FLOAT32 OutlineInner; /* 0x0028 */
  FB_FLOAT32 OutlineOuter; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(UIElementBitmapDistanceFieldParams) == 48);

}
