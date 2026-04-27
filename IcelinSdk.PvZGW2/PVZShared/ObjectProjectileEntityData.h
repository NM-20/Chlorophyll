#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/GhostedProjectileEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142869688
   RuntimeId:        24B5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0B16
   VfTable:          0000000142355B18
   Address (Base):   00000001430D0080
*/
#pragma pack(push, 16)
class ObjectProjectileEntityData : public GhostedProjectileEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ObjectBlueprint) ProjectileObject; /* 0x0150 */
  FB_FLOAT32 AlignWithGroundRayLength; /* 0x0158 */
  FB_FLOAT32 NoCharacterCollisionTime; /* 0x015C */
  FB_FLOAT32 Health; /* 0x0160 */
  FB_BOOLEAN AlignWithGround; /* 0x0164 */
  FB_BOOLEAN AlignWithGroundOrientYUp; /* 0x0165 */
  FB_BOOLEAN DestroyOnPlayerRespawn; /* 0x0166 */
  FB_BOOLEAN CanPickUp; /* 0x0167 */
  char pad_0168[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0170 */
#pragma pack(pop)

static_assert(sizeof(ObjectProjectileEntityData) == 368);

}
