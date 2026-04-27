#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GhostedProjectileEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/PVZShared/SoldierDetonationData.h>

namespace fb
{

/* TypeInfo (Array): 000000014286DAD8
   RuntimeId:        2838
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B17
   VfTable:          000000014236F008
   Address (Base):   00000001430D30D0
*/
#pragma pack(push, 16)
class ExplosionPackEntityData : public GhostedProjectileEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 WorldIconOffset; /* 0x0150 */
  SoldierDetonationData SoldierDetonationData; /* 0x0160 */
  char pad_0174[0x0004];
  FB_REFARRAY(class ExplosionPackTrigger) ExplosionPackTriggers; /* 0x0178 */
  FB_FLOAT32 GravityScale; /* 0x0180 */
  FB_FLOAT32 TimeToLiveOnPlayerDeath; /* 0x0184 */
  FB_FLOAT32 Health; /* 0x0188 */
  FB_FLOAT32 SpottedTime; /* 0x018C */
  FB_FLOAT32 DefuseRadius; /* 0x0190 */
  char pad_0194[0x0004];
  FB_CSTRING IconName; /* 0x0198 */
  FB_FLOAT32 ArmingTime; /* 0x01A0 */
  FB_FLOAT32 TriggeringTime; /* 0x01A4 */
  FB_BOOLEAN IsDestructible; /* 0x01A8 */
  FB_BOOLEAN AllowFriendlyDamage; /* 0x01A9 */
  FB_BOOLEAN AllowDamageGiverChange; /* 0x01AA */
  FB_BOOLEAN ReceivesExplosionDamage; /* 0x01AB */
  FB_BOOLEAN ArmWhenFired; /* 0x01AC */
  FB_BOOLEAN DestroyOnPlayerRespawn; /* 0x01AD */
  char pad_01AE[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01B0 */
#pragma pack(pop)

static_assert(sizeof(ExplosionPackEntityData) == 432);

}
