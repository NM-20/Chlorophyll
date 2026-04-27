#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864AF8
   RuntimeId:        222E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A1A
   VfTable:          0000000142352110
   Address (Base):   00000001430D4810
*/
#pragma pack(push, 8)
class AreaPlayerCountEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(enum TeamId) HumanPlayerTeams; /* 0x0018 */
  FB_STDARRAY(enum TeamId) AiPlayerTeams; /* 0x0020 */
  FB_STDARRAY(enum TeamId) PersistentAiPlayerTeams; /* 0x0028 */
  FB_STDARRAY(enum TeamId) IgnoreImmortalCharactersOnTeam; /* 0x0030 */
  FB_BOOLEAN Enabled; /* 0x0038 */
  FB_BOOLEAN InvertAreaTest; /* 0x0039 */
  char pad_003A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(AreaPlayerCountEntityData) == 64);

}
