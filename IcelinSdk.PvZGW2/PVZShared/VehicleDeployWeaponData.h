#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Physics/RigidBodyCollisionLayer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428697D8
   RuntimeId:        24C5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F08
   VfTable:          0000000142355AD8
   Address (Base):   00000001430D9BF0
*/
#pragma pack(push, 16)
class VehicleDeployWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DeployAreaRadius; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 DeployOffset; /* 0x0020 */
  FB_FLOAT32 DeployAreaGroundRayLength; /* 0x0030 */
  FB_FLOAT32 DeployAreaGroundFlatness; /* 0x0034 */
  RigidBodyCollisionLayer DeployCollisionLayer; /* 0x0038 */
  char pad_003C[0x0004];
  FB_HANDLE(class ObjectBlueprint) PreviewObject; /* 0x0040 */
  FB_BOOLEAN CanRemoteEnterVehicle; /* 0x0048 */
  FB_BOOLEAN UsePreview; /* 0x0049 */
  FB_BOOLEAN CheckClearSky; /* 0x004A */
  FB_BOOLEAN IsAllowedToPickupDeployedVehicle; /* 0x004B */
  char pad_004C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(VehicleDeployWeaponData) == 80);

}
