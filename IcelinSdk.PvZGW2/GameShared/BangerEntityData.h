#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/DynamicGamePhysicsEntityData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D648
   RuntimeId:        112D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B22
   VfTable:          0000000142273EA8
   Address (Base):   00000001430BFE30
*/
#pragma pack(push, 16)
class BangerEntityData : public DynamicGamePhysicsEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Vec3 InitialAngularVelocity; /* 0x0090 */
  FB_HANDLE(class MeshAsset) Mesh; /* 0x00A0 */
  FB_UINT32 BoneCount; /* 0x00A8 */
  char pad_00AC[0x0004];
  FB_STDARRAY(struct LinearTransform) BasePoseTransforms; /* 0x00B0 */
  FB_HANDLE(class ExplosionEntityData) Explosion; /* 0x00B8 */
  FB_FLOAT32 TimeToLive; /* 0x00C0 */
  FB_FLOAT32 InitialSpeed; /* 0x00C4 */
  FB_HANDLE(class EffectBlueprint) TrailEffect; /* 0x00C8 */
  FB_UINT32 DestructiblePartCount; /* 0x00D0 */
  FB_BOOLEAN AutoDestroyAllowed; /* 0x00D4 */
  FB_BOOLEAN UseVariableNetworkFrequency; /* 0x00D5 */
  char pad_00D6[0x000A];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */
#pragma pack(pop)

static_assert(sizeof(BangerEntityData) == 224);

}
