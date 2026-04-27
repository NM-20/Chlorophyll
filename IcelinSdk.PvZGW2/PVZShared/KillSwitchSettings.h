#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868AA0
   RuntimeId:        241B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B8FC0
   Default Value:    0000000142868AC0
*/
#pragma pack(push, 8)
struct KillSwitchSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING MenchiesChallengeLicense; /* 0x0000 */
  FB_CSTRING BlackMarketGnomeLicense; /* 0x0008 */
  FB_CSTRING PlantTimeTrialsLicense; /* 0x0010 */
  FB_CSTRING ZombieTimeTrialsLicense; /* 0x0018 */
  FB_CSTRING PlantGnomeTargetsMinigameLicense; /* 0x0020 */
  FB_CSTRING ZombieGnomeTargetsMinigameLicense; /* 0x0028 */
  FB_CSTRING GnomeTargetsLeaderboardLicense; /* 0x0030 */
  FB_CSTRING Halloween2016License; /* 0x0038 */
  FB_CSTRING Halloween2017License; /* 0x0040 */
  FB_CSTRING Festivus2016License; /* 0x0048 */
  FB_CSTRING Festivus2017License; /* 0x0050 */
  FB_CSTRING Springening2017License; /* 0x0058 */
  FB_CSTRING LuckOZombie2017License; /* 0x0060 */
  FB_CSTRING FestivalWeek1; /* 0x0068 */
  FB_CSTRING FestivalWeek2; /* 0x0070 */
  FB_CSTRING FestivalWeek3; /* 0x0078 */
  FB_CSTRING FestivalWeek4; /* 0x0080 */
  FB_CSTRING FestivalWeek5; /* 0x0088 */
  FB_CSTRING FestivalWeek6; /* 0x0090 */
  FB_CSTRING FestivalWeek7; /* 0x0098 */
  FB_CSTRING FestivalWeek8; /* 0x00A0 */
  FB_CSTRING UnderageLicense; /* 0x00A8 */
  FB_CSTRING GdprStopProcessLicense; /* 0x00B0 */
  FB_CSTRING MarketingOptOutLicense; /* 0x00B8 */
  FB_CSTRING UpsellDisable; /* 0x00C0 */
  FB_CSTRING LoyaltyDisable; /* 0x00C8 */
  FB_CSTRING AccessDisable; /* 0x00D0 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D8 */
#pragma pack(pop)

static_assert(sizeof(KillSwitchSettings) == 216);

}
