#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/SpatialEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 00000001428492E0
   RuntimeId:        0D6E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B54
   VfTable:          0000000142260240
   Address (Base):   00000001430D7AB0
*/
#pragma pack(push, 16)
class CombatAreaTriggerEntityData : public SpatialEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 TimeToReturn; /* 0x0060 */
  TeamId Team; /* 0x0064 */
  FB_BOOLEAN IsAiAllowedOutside; /* 0x0068 */
  FB_BOOLEAN IsTeamSpecific; /* 0x0069 */
  FB_BOOLEAN Enabled; /* 0x006A */
  char pad_006B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(CombatAreaTriggerEntityData) == 112);

}
