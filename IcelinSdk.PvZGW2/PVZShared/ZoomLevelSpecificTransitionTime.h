#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D5C8
   RuntimeId:        27FC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C2DA8
   Default Value:    0000000142BFEDA8
*/
#pragma pack(push, 4)
struct ZoomLevelSpecificTransitionTime
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 FromZoomLevel; /* 0x0000 */
  FB_INT32 ToZoomLevel; /* 0x0004 */
  FB_FLOAT32 ZoomTransitionTime; /* 0x0008 */
  FB_FLOAT32 FovTransitionTime; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(ZoomLevelSpecificTransitionTime) == 16);

}
