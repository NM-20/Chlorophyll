#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZAnimatedTargetingBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862558
   RuntimeId:        2060
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C3F
   VfTable:          0000000142343D20
   Address (Base):   00000001430D5890
*/
#pragma pack(push, 16)
class PVZAnimatedTargetingEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 SourcePosition; /* 0x0020 */
  Vec3 Forward; /* 0x0030 */
  PVZAnimatedTargetingBinding Binding; /* 0x0040 */
  FB_HANDLE(class ExplosionEntityData) Explosion; /* 0x0090 */
  FB_FLOAT32 ProjectileSpeed; /* 0x0098 */
  char pad_009C[0x0004];
  FB_HANDLE(class ObjectBlueprint) ProjectileObject; /* 0x00A0 */
  char pad_00A8[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(PVZAnimatedTargetingEntityData) == 176);

}
