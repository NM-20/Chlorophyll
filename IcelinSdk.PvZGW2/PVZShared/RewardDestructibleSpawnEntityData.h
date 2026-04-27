#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873468
   RuntimeId:        2BB6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A08
   VfTable:          0000000142379318
   Address (Base):   00000001430E15A0
*/
#pragma pack(push, 8)
class RewardDestructibleSpawnEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class RewardDestructibleSpawnData) DestructibleSpawnInfo; /* 0x0018 */
  FB_BOOLEAN IsManagedByWave; /* 0x0020 */
  FB_BOOLEAN IsVaseOnly; /* 0x0021 */
  FB_BOOLEAN IsTransmitterOnly; /* 0x0022 */
  char pad_0023[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(RewardDestructibleSpawnEntityData) == 40);

}
