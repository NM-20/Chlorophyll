#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864B38
   RuntimeId:        2232
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4788
   Default Value:    0000000142864B50
*/
#pragma pack(push, 8)
struct VaseRandomData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 CountMin; /* 0x0000 */
  FB_INT32 CountMax; /* 0x0004 */
  FB_STDARRAY(struct VaseAISpawnData) AIData; /* 0x0008 */
  FB_STDARRAY(struct VaseRewardSpawnData) RewardData; /* 0x0010 */
  FB_BOOLEAN IsReward; /* 0x0018 */
  char pad_0019[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(VaseRandomData) == 32);

}
