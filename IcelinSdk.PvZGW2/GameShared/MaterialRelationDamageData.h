#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/PhysicsPropertyRelationPropertyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142849B48
   RuntimeId:        0DEE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          115A
   VfTable:          000000014225F8F0
   Address (Base):   00000001430B6020
*/
#pragma pack(push, 8)
class MaterialRelationDamageData : public PhysicsPropertyRelationPropertyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 CollisionDamageMultiplier; /* 0x0010 */
  FB_FLOAT32 CollisionDamageThreshold; /* 0x0014 */
  FB_FLOAT32 CharacterCollisionSpeedScaleMinThreshold; /* 0x0018 */
  FB_FLOAT32 CharacterCollisionSpeedScaleMin; /* 0x001C */
  FB_FLOAT32 CharacterCollisionSpeedScaleMaxThreshold; /* 0x0020 */
  FB_FLOAT32 CharacterCollisionSpeedScaleMax; /* 0x0024 */
  FB_FLOAT32 DamageProtectionMultiplier; /* 0x0028 */
  FB_FLOAT32 DamagePenetrationMultiplier; /* 0x002C */
  FB_FLOAT32 DamageProtectionThreshold; /* 0x0030 */
  FB_FLOAT32 ExplosionCoverDamageModifier; /* 0x0034 */
  FB_BOOLEAN InflictsDemolitionDamage; /* 0x0038 */
  FB_BOOLEAN AllowClientDestruction; /* 0x0039 */
  FB_BOOLEAN CriticalDamage; /* 0x003A */
  FB_BOOLEAN BlockedDamage; /* 0x003B */
  char pad_003C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(MaterialRelationDamageData) == 64);

}
