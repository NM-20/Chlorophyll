#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ProjectileEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428697F8
   RuntimeId:        24C7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B10
   VfTable:          0000000142355A90
   Address (Base):   00000001430E4FC0
*/
#pragma pack(push, 16)
class VehicleProjectileEntityData : public ProjectileEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VehicleBlueprint) Vehicle; /* 0x0100 */
  FB_FLOAT32 EnterDelay; /* 0x0108 */
  FB_FLOAT32 AlignWithGroundRayLength; /* 0x010C */
  FB_FLOAT32 NoVehicleCollisionTime; /* 0x0110 */
  FB_BOOLEAN AutoEnter; /* 0x0114 */
  FB_BOOLEAN AlignWithGround; /* 0x0115 */
  FB_BOOLEAN CheckGroundWhenSpawned; /* 0x0116 */
  char pad_0117[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(VehicleProjectileEntityData) == 288);

}
