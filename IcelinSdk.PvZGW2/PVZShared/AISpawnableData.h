#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ConsumableSpawnerData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428657B8
   RuntimeId:        22F1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11EE
   VfTable:          00000001423510E0
   Address (Base):   00000001430F8590
*/
#pragma pack(push, 8)
class AISpawnableData : public ConsumableSpawnerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AISpawnData) AISpawn; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(AISpawnableData) == 32);

}
