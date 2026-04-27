#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIIconMode.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIIconState.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A3B0
   RuntimeId:        2573
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C34E8
   Default Value:    000000014286A3C8
*/
#pragma pack(push, 8)
struct UIMinimapIconTextureState
{
  typedef struct ValueTypeInfo TypeInfo_t;

  UIIconMode Mode; /* 0x0000 */
  UIIconState State; /* 0x0004 */
  FB_FLOAT32 FrameRate; /* 0x0008 */
  char pad_000C[0x0004];
  FB_STDARRAY(struct UIMinimapIconUv) TextureInfos; /* 0x0010 */
  FB_BOOLEAN ShouldRotate; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIMinimapIconTextureState) == 32);

}
