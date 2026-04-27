#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ProjectileEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AC18
   RuntimeId:        25D0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B11
   VfTable:          000000014235AEF8
   Address (Base):   00000001430E4D20
*/
#pragma pack(push, 16)
class MeshProjectileEntityData : public ProjectileEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 InitialAngularVelocity; /* 0x0100 */
  FB_HANDLE(class MeshAsset) Mesh; /* 0x0110 */
  FB_HANDLE(class EffectBlueprint) TrailEffect; /* 0x0118 */
  FB_HANDLE(class EffectBlueprint) AttachEffect; /* 0x0120 */
  FB_FLOAT32 InstantAttachableTestDistance; /* 0x0128 */
  FB_FLOAT32 InstantAttachableVisualConvergenceDelay; /* 0x012C */
  FB_FLOAT32 InstantAttachableVisualConvergenceDuration; /* 0x0130 */
  FB_BOOLEAN IsAttachable; /* 0x0134 */
  FB_BOOLEAN AllowAttachToOwnTeam; /* 0x0135 */
  char pad_0136[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0140 */
#pragma pack(pop)

static_assert(sizeof(MeshProjectileEntityData) == 320);

}
