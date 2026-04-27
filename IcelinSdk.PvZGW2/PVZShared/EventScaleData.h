#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatEvent.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B730
   RuntimeId:        2648
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3148
   Default Value:    00000001428677A8
*/
#pragma pack(push, 4)
struct EventScaleData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  StatEvent Event; /* 0x0000 */
  FB_FLOAT32 Scale; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(EventScaleData) == 8);

}
