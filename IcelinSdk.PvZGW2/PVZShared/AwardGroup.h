#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B690
   RuntimeId:        263E
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430B8A00
*/
enum AwardGroup
{
  AwardGroup_Undefined = 0,
  AwardGroup_StoryMission = 1,
  AwardGroup_HubMission = 2,
  AwardGroup_Achievements = 3,
  AwardGroup_Ranks = 4,
  AwardGroup_XP = 5,
  AwardGroup_Challenges = 6,
  AwardGroup_DailyChallenges = 7,
  AwardGroup_LastAwardGroup = 8,
};

}
