#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871320
   RuntimeId:        2A47
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C17E8
   Default Value:    0000000142871338
*/
#pragma pack(push, 8)
struct PVZUIPlayerName
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT64 PlayerId; /* 0x0000 */
  FB_CSTRING PlayerName; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(PVZUIPlayerName) == 16);

}
