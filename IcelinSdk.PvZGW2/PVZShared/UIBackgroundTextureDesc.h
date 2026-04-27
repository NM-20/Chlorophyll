#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIBackgroundId.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A2D0
   RuntimeId:        2565
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3528
   Default Value:    0000000142BFEC50
*/
#pragma pack(push, 4)
struct UIBackgroundTextureDesc
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Height; /* 0x0000 */
  FB_FLOAT32 Width; /* 0x0004 */
  UIBackgroundId BackgroundId; /* 0x0008 */
  Vec2 MinUv; /* 0x000C */
  Vec2 MaxUv; /* 0x0014 */
  FB_BOOLEAN Centered; /* 0x001C */
  char pad_001D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIBackgroundTextureDesc) == 32);

}
