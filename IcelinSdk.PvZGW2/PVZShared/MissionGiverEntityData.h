#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 0000000142865D68
   RuntimeId:        2349
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09E3
   VfTable:          0000000142350BA8
   Address (Base):   00000001430D4DB0
*/
#pragma pack(push, 8)
class MissionGiverEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING MissionGiver; /* 0x0018 */
  TeamId TeamId; /* 0x0020 */
  char pad_0024[0x0004];
  FB_CSTRING MissionCode; /* 0x0028 */
  FB_BOOLEAN AutoSelectMissionOnSuccess; /* 0x0030 */
  FB_BOOLEAN ForceFailMissionOnChangeTeam; /* 0x0031 */
  char pad_0032[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(MissionGiverEntityData) == 56);

}
