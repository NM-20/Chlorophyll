#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/GameShared/AimingConstraintsData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863DC8
   RuntimeId:        2179
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DAA
   VfTable:          0000000142353080
   Address (Base):   00000001430D5410
*/
#pragma pack(push, 16)
class PVZCharacterFlyingComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 CameraOffset; /* 0x0070 */
  AimingConstraintsData AimingConstraints; /* 0x0080 */
  FB_HANDLE(class ExplosionEntityData) LandingImpactExplosion; /* 0x0090 */
  char pad_0098[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterFlyingComponentData) == 160);

}
