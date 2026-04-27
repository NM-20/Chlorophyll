#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428770E0
   RuntimeId:        2E5F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0468
   Default Value:    00000001428770F8
*/
#pragma pack(push, 8)
struct ZoneStreamerZoneInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(FB_INT16) Neighbours; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(ZoneStreamerZoneInfo) == 8);

}
