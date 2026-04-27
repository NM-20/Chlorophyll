#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C428
   RuntimeId:        1036
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB0C0
   Default Value:    0000000142BF4D50
*/
#pragma pack(push, 4)
struct UIElementRectExpansion
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 X; /* 0x0000 */
  FB_FLOAT32 Y; /* 0x0004 */
  FB_FLOAT32 Width; /* 0x0008 */
  FB_FLOAT32 Height; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIElementRectExpansion) == 16);

}
