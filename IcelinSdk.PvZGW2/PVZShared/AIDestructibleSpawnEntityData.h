#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873388
   RuntimeId:        2BAA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A3B
   VfTable:          0000000142379468
   Address (Base):   00000001430E1360
*/
#pragma pack(push, 8)
class AIDestructibleSpawnEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class AIDestructibleSpawnData) DestructibleSpawnInfo; /* 0x0018 */
  FB_BOOLEAN IsManagedByWave; /* 0x0020 */
  FB_BOOLEAN IsVaseOnly; /* 0x0021 */
  FB_BOOLEAN IsTransmitterOnly; /* 0x0022 */
  FB_BOOLEAN TakePendingSpawnIntoAccount; /* 0x0023 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(AIDestructibleSpawnEntityData) == 40);

}
