#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Vec2.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861AF0
   RuntimeId:        1FC9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5268
   Default Value:    0000000142861B08
*/
#pragma pack(push, 8)
struct UILevelLoadIconData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Label; /* 0x0000 */
  FB_CSTRING IconName; /* 0x0008 */
  Vec2 Pos; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UILevelLoadIconData) == 24);

}
