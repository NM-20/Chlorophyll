#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849500
   RuntimeId:        0D90
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A6F
   VfTable:          00000001422600A8
   Address (Base):   00000001430EE680
*/
#pragma pack(push, 8)
class TacticalObjectiveEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING MissionSid; /* 0x0018 */
  FB_CSTRING BriefingSidTeam1; /* 0x0020 */
  FB_CSTRING BriefingSidTeam2; /* 0x0028 */
  FB_FLOAT32 Team1Timer; /* 0x0030 */
  FB_FLOAT32 Team2Timer; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TacticalObjectiveEntityData) == 56);

}
