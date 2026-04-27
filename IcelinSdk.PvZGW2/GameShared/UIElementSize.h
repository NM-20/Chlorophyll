#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C468
   RuntimeId:        103A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB080
   Default Value:    000000014284C2F8
*/
#pragma pack(push, 4)
struct UIElementSize
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 X; /* 0x0000 */
  FB_FLOAT32 Y; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(UIElementSize) == 8);

}
