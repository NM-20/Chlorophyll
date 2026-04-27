#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861B88
   RuntimeId:        1FCF
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9800
   Default Value:    0000000142861BA0
*/
#pragma pack(push, 4)
struct UIMapNavigationData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 NearestZoomRange; /* 0x0000 */
  Vec2 ManualViewCenter; /* 0x0004 */
  FB_FLOAT32 ManualViewRange; /* 0x000C */
  FB_FLOAT32 PanSpeed; /* 0x0010 */
  FB_BOOLEAN UseAutoView; /* 0x0014 */
  char pad_0015[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIMapNavigationData) == 24);

}
