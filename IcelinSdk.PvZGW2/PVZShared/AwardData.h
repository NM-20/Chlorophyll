#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AbstractAwardData.h>
#include <IcelinSdk.PvZGW2/PVZShared/StoryMissionTeam.h>
#include <IcelinSdk.PvZGW2/PVZShared/AwardType.h>
#include <IcelinSdk.PvZGW2/PVZShared/AwardGroup.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B7F0
   RuntimeId:        2654
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EC0
   VfTable:          000000014235AA58
   Address (Base):   00000001430CFF60
*/
#pragma pack(push, 8)
class AwardData : public AbstractAwardData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class AwardData) FilteredChildAwards; /* 0x0018 */
  FB_REFARRAY(class CriteriaData) Criteria; /* 0x0020 */
  FB_CSTRING Code; /* 0x0028 */
  StoryMissionTeam StoryMissionTeam; /* 0x0030 */
  AwardType Repeat; /* 0x0034 */
  FB_UINT32 MaxRepetitions; /* 0x0038 */
  char pad_003C[0x0004];
  FB_STDARRAY(struct CriteriaAward) Dependencies; /* 0x0040 */
  AwardGroup Group; /* 0x0048 */
  char pad_004C[0x0004];
  FB_HANDLE(class AwardData) ParentAward; /* 0x0050 */
  FB_STDARRAY(struct BucketScoreData) BucketScores; /* 0x0058 */
  FB_STDARRAY(struct BasicUnlockInfo) UnlockInfos; /* 0x0060 */
  FB_HANDLE(class CriteriaGateList) UnlockGates; /* 0x0068 */
  FB_CSTRING Title; /* 0x0070 */
  FB_CSTRING Description; /* 0x0078 */
  FB_CSTRING Objective; /* 0x0080 */
  FB_CSTRING ImageName; /* 0x0088 */
  FB_CSTRING SoundName; /* 0x0090 */
  FB_BOOLEAN ActiveOnCreation; /* 0x0098 */
  FB_BOOLEAN Visible; /* 0x0099 */
  FB_BOOLEAN QuestCompletePopUpVisible; /* 0x009A */
  FB_BOOLEAN AwardPopUpsVisible; /* 0x009B */
  char pad_009C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(AwardData) == 160);

}
