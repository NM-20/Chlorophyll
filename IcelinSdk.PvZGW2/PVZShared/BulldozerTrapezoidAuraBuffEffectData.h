#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/BuffEffectData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/DamageType.h>
#include <IcelinSdk.PvZGW2/Entity/MaterialDecl.h>

namespace fb
{

/* TypeInfo (Array): 000000014286C548
   RuntimeId:        26F6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          091B
   VfTable:          00000001423667E8
   Address (Base):   00000001430F6910
*/
#pragma pack(push, 16)
class BulldozerTrapezoidAuraBuffEffectData : public BuffEffectData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class WeaponUnlockAsset) WeaponUnlock; /* 0x0018 */
  Vec3 Offset; /* 0x0020 */
  FB_FLOAT32 Damage; /* 0x0030 */
  DamageType DamageType; /* 0x0034 */
  MaterialDecl Material; /* 0x0038 */
  FB_FLOAT32 Period; /* 0x003C */
  FB_FLOAT32 Length; /* 0x0040 */
  FB_FLOAT32 NearWidth; /* 0x0044 */
  FB_FLOAT32 FarWidth; /* 0x0048 */
  FB_FLOAT32 MaxYDifference; /* 0x004C */
  FB_FLOAT32 Impulse; /* 0x0050 */
  FB_FLOAT32 MinPowerThreshold; /* 0x0054 */
  FB_FLOAT32 MaxPowerThreshold; /* 0x0058 */
  FB_BOOLEAN ApplyAtStartOfPeriod; /* 0x005C */
  FB_BOOLEAN UseShootTransform; /* 0x005D */
  FB_BOOLEAN MechanicalDeviceDamageOnly; /* 0x005E */
  char pad_005F[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */
#pragma pack(pop)

static_assert(sizeof(BulldozerTrapezoidAuraBuffEffectData) == 96);

}
