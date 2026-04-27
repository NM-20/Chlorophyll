#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2381
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          00000001423504A8
   Address:          00000001430C43C8
   Default Value:    0000000142866660
*/
#pragma pack(push, 8)
struct PVZNetworkUnlockAchievementsMessage
{
  typedef struct ValueTypeInfo TypeInfo_t;

  char pad_0000[0x0058];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(PVZNetworkUnlockAchievementsMessage) == 88);

}
