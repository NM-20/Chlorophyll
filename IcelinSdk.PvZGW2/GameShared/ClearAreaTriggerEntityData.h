#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TriggerEntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C050
   RuntimeId:        1000
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B6F
   VfTable:          0000000142267C80
   Address (Base):   00000001430D6D30
*/
#pragma pack(push, 16)
class ClearAreaTriggerEntityData : public TriggerEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TeamId TeamOfImmortalSoldiers; /* 0x0070 */
  FB_BOOLEAN RemoveSoldiers; /* 0x0074 */
  FB_BOOLEAN RemoveVehicles; /* 0x0075 */
  FB_BOOLEAN RemoveBangers; /* 0x0076 */
  FB_BOOLEAN RemoveEffects; /* 0x0077 */
  FB_BOOLEAN RemoveMeshProxies; /* 0x0078 */
  FB_BOOLEAN RemoveStaticModels; /* 0x0079 */
  FB_BOOLEAN RemoveDebrisClusters; /* 0x007A */
  FB_BOOLEAN ExcludeImmortalSoldiersInTeam; /* 0x007B */
  char pad_007C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(ClearAreaTriggerEntityData) == 128);

}
