#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/GameShared/DynamicAvoidanceMode.h>
#include <IcelinSdk.PvZGW2/GameShared/AntDynamicAvoidanceBinding.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A720
   RuntimeId:        0EA0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C8C
   VfTable:          00000001422654D8
   Address (Base):   00000001430D7390
*/
#pragma pack(push, 8)
class DynamicAvoidanceEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  DynamicAvoidanceMode RepelOthers; /* 0x0018 */
  DynamicAvoidanceMode ReportPredictedCollision; /* 0x001C */
  FB_FLOAT32 CollisionRadius; /* 0x0020 */
  AntDynamicAvoidanceBinding AntBinding; /* 0x0024 */
  Realm Realm; /* 0x0074 */
  FB_BOOLEAN AffectedByRepellingForce; /* 0x0078 */
  FB_BOOLEAN PredictedByOthers; /* 0x0079 */
  char pad_007A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(DynamicAvoidanceEntityData) == 128);

}
