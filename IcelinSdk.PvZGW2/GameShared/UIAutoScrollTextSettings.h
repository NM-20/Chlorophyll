#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C6A8
   RuntimeId:        1052
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAFC0
   Default Value:    000000014284C6C0
*/
#pragma pack(push, 4)
struct UIAutoScrollTextSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 NoScrollWaitTime; /* 0x0000 */
  FB_FLOAT32 FullyScrolledWaitTime; /* 0x0004 */
  FB_FLOAT32 MaxScrollTime; /* 0x0008 */
  FB_FLOAT32 PixelsPerSecond; /* 0x000C */
  FB_FLOAT32 ScrollbackMultiplier; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0014 */
#pragma pack(pop)

static_assert(sizeof(UIAutoScrollTextSettings) == 20);

}
