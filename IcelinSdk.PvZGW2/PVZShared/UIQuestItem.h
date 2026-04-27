#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870D40
   RuntimeId:        2A07
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C18E8
   Default Value:    0000000142870D70
*/
#pragma pack(push, 8)
struct UIQuestItem
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT64 DateTime; /* 0x0000 */
  FB_CSTRING Title; /* 0x0008 */
  FB_CSTRING Description; /* 0x0010 */
  FB_CSTRING Objective; /* 0x0018 */
  FB_FLOAT32 Progress; /* 0x0020 */
  FB_UINT32 CounterGoal; /* 0x0024 */
  FB_UINT32 CounterCompleted; /* 0x0028 */
  FB_UINT32 StarReward; /* 0x002C */
  FB_UINT32 CoinReward; /* 0x0030 */
  FB_FLOAT32 XPModifier; /* 0x0034 */
  FB_CSTRING TextureID; /* 0x0038 */
  FB_CSTRING TextureIDHighlight; /* 0x0040 */
  FB_UINT32 QuestID; /* 0x0048 */
  char pad_004C[0x0004];
  FB_CSTRING QuestCode; /* 0x0050 */
  FB_BOOLEAN IsEpic; /* 0x0058 */
  FB_BOOLEAN IsPlantStory; /* 0x0059 */
  FB_BOOLEAN IsZombieStory; /* 0x005A */
  FB_BOOLEAN IsRunning; /* 0x005B */
  FB_BOOLEAN IsPlayable; /* 0x005C */
  FB_BOOLEAN IsAchieved; /* 0x005D */
  FB_BOOLEAN DisplayProgress; /* 0x005E */
  char pad_005F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(UIQuestItem) == 96);

}
