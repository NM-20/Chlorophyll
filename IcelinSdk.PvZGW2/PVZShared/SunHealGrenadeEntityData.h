#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GrenadeEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869548
   RuntimeId:        24A1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B1B
   VfTable:          0000000142355D60
   Address (Base):   00000001430D3AF0
*/
#pragma pack(push, 16)
class SunHealGrenadeEntityData : public GrenadeEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 HealAmount; /* 0x0180 */
  FB_FLOAT32 HealRange; /* 0x0184 */
  FB_INT32 NumSunDrops; /* 0x0188 */
  FB_FLOAT32 InitialSunDropSpeed; /* 0x018C */
  FB_HANDLE(class ProjectileBlueprint) SunDropProjectile; /* 0x0190 */
  FB_HANDLE(class ProjectileEntityData) ProjectileData; /* 0x0198 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01A0 */
#pragma pack(pop)

static_assert(sizeof(SunHealGrenadeEntityData) == 416);

}
