#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCommanderActionBaseData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863208
   RuntimeId:        20FE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A60
   VfTable:          0000000142353BE0
   Address (Base):   00000001430E6D00
*/
#pragma pack(push, 8)
class PVZFlyingNPCWaveActionData : public PVZCommanderActionBaseData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class PrefabBlueprint) GunshipPrefabBlueprint; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PVZFlyingNPCWaveActionData) == 56);

}
