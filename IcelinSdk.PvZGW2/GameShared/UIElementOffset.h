#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C448
   RuntimeId:        1038
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB0A0
   Default Value:    0000000142BF4968
*/
#pragma pack(push, 4)
struct UIElementOffset
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 X; /* 0x0000 */
  FB_FLOAT32 Y; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(UIElementOffset) == 8);

}
