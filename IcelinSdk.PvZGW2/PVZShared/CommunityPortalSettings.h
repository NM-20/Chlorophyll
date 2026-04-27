#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868BA0
   RuntimeId:        241D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8FA0
   Default Value:    0000000142868BD0
*/
#pragma pack(push, 8)
struct CommunityPortalSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 StartTime; /* 0x0000 */
  FB_INT32 EndTime; /* 0x0004 */
  FB_CSTRING EventTitle; /* 0x0008 */
  FB_CSTRING EventDescription; /* 0x0010 */
  FB_CSTRING EventImageUrl; /* 0x0018 */
  FB_INT32 CrazyOption0; /* 0x0020 */
  FB_INT32 CrazyOption1; /* 0x0024 */
  FB_INT32 CrazyOption2; /* 0x0028 */
  FB_INT32 CrazyOption3; /* 0x002C */
  FB_INT32 CrazyOption4; /* 0x0030 */
  FB_INT32 CrazyOption5; /* 0x0034 */
  FB_INT32 RetryTimerOnWin; /* 0x0038 */
  FB_INT32 RetryTimerOnLoss; /* 0x003C */
  FB_UINT32 UnderworldMegaChestCost; /* 0x0040 */
  FB_INT32 GnomeBombWinnerBase; /* 0x0044 */
  FB_INT32 GnomeBombLoserBase; /* 0x0048 */
  FB_INT32 GnomeBombPerBaseBonus; /* 0x004C */
  FB_INT32 BossHuntWinnerEasyBase; /* 0x0050 */
  FB_INT32 BossHuntWinnerMediumBase; /* 0x0054 */
  FB_INT32 BossHuntWinnerHardBase; /* 0x0058 */
  FB_INT32 BossHuntLoserEasyBase_Full; /* 0x005C */
  FB_INT32 BossHuntLoserrMediumBase_Full; /* 0x0060 */
  FB_INT32 BossHuntLoserHardBase_Full; /* 0x0064 */
  FB_INT32 BossHuntLoserEasyBase_Half; /* 0x0068 */
  FB_INT32 BossHuntLoserrMediumBase_Half; /* 0x006C */
  FB_INT32 BossHuntLoserHardBase_Half; /* 0x0070 */
  FB_INT32 BossHuntLoserEasyBase_Quarter; /* 0x0074 */
  FB_INT32 BossHuntLoserrMediumBase_Quarter; /* 0x0078 */
  FB_INT32 BossHuntLoserHardBase_Quarter; /* 0x007C */
  FB_INT32 RushWinnerBase_1; /* 0x0080 */
  FB_INT32 RushWinnerBase_2; /* 0x0084 */
  FB_INT32 RushWinnerBase_3; /* 0x0088 */
  FB_INT32 RushWinnerBase_4; /* 0x008C */
  FB_INT32 RushWinnerBase_5; /* 0x0090 */
  FB_INT32 RushWinnerBase_6; /* 0x0094 */
  FB_INT32 RushLoserBase_1; /* 0x0098 */
  FB_INT32 RushLoserBase_2; /* 0x009C */
  FB_INT32 RushLoserBase_3; /* 0x00A0 */
  FB_INT32 RushLoserBase_4; /* 0x00A4 */
  FB_INT32 RushLoserBase_5; /* 0x00A8 */
  FB_INT32 RushLoserBase_6; /* 0x00AC */
  FB_INT32 SuburbinationWinnerBase; /* 0x00B0 */
  FB_INT32 SuburbinationLoserBase; /* 0x00B4 */
  FB_INT32 TeamVanquishWinnerBase; /* 0x00B8 */
  FB_INT32 TeamVanquishLoserBase; /* 0x00BC */
  FB_INT32 VanquishConfirmedWinnerBase; /* 0x00C0 */
  FB_INT32 VanquishConfirmedLoserBase; /* 0x00C4 */
  FB_INT32 CvDWinnerBase; /* 0x00C8 */
  FB_INT32 CvDLoserBase; /* 0x00CC */
  FB_INT32 CvDPointsPerLoserRound; /* 0x00D0 */
  FB_BOOLEAN Widget; /* 0x00D4 */
  char pad_00D5[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D8 */
#pragma pack(pop)

static_assert(sizeof(CommunityPortalSettings) == 216);

}
