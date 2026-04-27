#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428712B0
   RuntimeId:        2A41
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1808
   Default Value:    00000001428712C8
*/
#pragma pack(push, 8)
struct PVZUIPlayerVOIPStatus
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING DisplayName; /* 0x0000 */
  FB_INT32 State; /* 0x0008 */
  TeamId Team; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZUIPlayerVOIPStatus) == 16);

}
