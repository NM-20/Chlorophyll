#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/RewardSpawnData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864C18
   RuntimeId:        223E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4748
   Default Value:    0000000142BB4F08
*/
#pragma pack(push, 4)
struct VaseRewardSpawnData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  RewardSpawnData RewardSpawn; /* 0x0000 */
  FB_INT32 Probability; /* 0x0004 */
  FB_INT32 Amount; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(VaseRewardSpawnData) == 12);

}
