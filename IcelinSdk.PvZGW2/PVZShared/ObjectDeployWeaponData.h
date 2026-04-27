#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/WeaponData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Physics/RigidBodyCollisionLayer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869798
   RuntimeId:        24C1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F01
   VfTable:          0000000142355C50
   Address (Base):   00000001430D38B0
*/
#pragma pack(push, 16)
class ObjectDeployWeaponData : public WeaponData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DeployAreaRadius; /* 0x0018 */
  char pad_001C[0x0004];
  Vec3 DeployOffset; /* 0x0020 */
  Vec3 DeploymentCollisionTestDimensions; /* 0x0030 */
  FB_FLOAT32 DeployAreaGroundRayLength; /* 0x0040 */
  FB_FLOAT32 DeployAreaGroundFlatness; /* 0x0044 */
  FB_HANDLE(class ObjectBlueprint) PreviewObject; /* 0x0048 */
  FB_FLOAT32 DeploymentCollisionTestYOffset; /* 0x0050 */
  FB_FLOAT32 DeploymentCollisionTestZOffset; /* 0x0054 */
  RigidBodyCollisionLayer DeployCollisionLayer; /* 0x0058 */
  FB_FLOAT32 DeploymentCollisionTestIgnoreRadius; /* 0x005C */
  FB_BOOLEAN IgnoreDeployCheck; /* 0x0060 */
  FB_BOOLEAN UsePreview; /* 0x0061 */
  FB_BOOLEAN UseBasicDeploymentCollisionTest; /* 0x0062 */
  FB_BOOLEAN DeploymentCollisionTestIgnoreSoldiers; /* 0x0063 */
  char pad_0064[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0070 */
#pragma pack(pop)

static_assert(sizeof(ObjectDeployWeaponData) == 112);

}
