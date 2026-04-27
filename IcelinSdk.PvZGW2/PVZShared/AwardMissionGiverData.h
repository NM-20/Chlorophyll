#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/AwardData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286B880
   RuntimeId:        265C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EC2
   VfTable:          000000014235AA38
   Address (Base):   00000001430BDE30
*/
#pragma pack(push, 8)
class AwardMissionGiverData : public AwardData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING MissionGiver; /* 0x00A0 */
  FB_CSTRING PassiveTitle; /* 0x00A8 */
  FB_CSTRING PassiveDescription; /* 0x00B0 */
  FB_CSTRING PassiveObjective; /* 0x00B8 */
  FB_CSTRING MissionTitleId; /* 0x00C0 */
  FB_INT32 MissionPriority; /* 0x00C8 */
  char pad_00CC[0x0004];
  FB_CSTRING LevelToLoad; /* 0x00D0 */
  FB_CSTRING InclusionOptions; /* 0x00D8 */
  FB_STDARRAY(struct DialogueTreeData) GreetingDialogue; /* 0x00E0 */
  FB_STDARRAY(struct DialogueTreeData) MissionStartDialogue; /* 0x00E8 */
  FB_STDARRAY(struct DialogueTreeData) MissionCompleteDialogue; /* 0x00F0 */
  FB_BOOLEAN AutoStart; /* 0x00F8 */
  FB_BOOLEAN ShowStartMissionCard; /* 0x00F9 */
  FB_BOOLEAN ShowSuccessMissionCard; /* 0x00FA */
  FB_BOOLEAN ShowInPauseMenu; /* 0x00FB */
  FB_BOOLEAN IsExclusive; /* 0x00FC */
  FB_BOOLEAN SideMissionIsReplayable; /* 0x00FD */
  char pad_00FE[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(AwardMissionGiverData) == 256);

}
