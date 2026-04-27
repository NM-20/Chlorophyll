#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameDataContainerAsset.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D8E0
   RuntimeId:        2826
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          080E
   VfTable:          000000014236F4B8
   Address (Base):   0000000143105910
*/
#pragma pack(push, 16)
class ProjectileValue : public GameDataContainerAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform Offset; /* 0x0020 */
  FB_HANDLE(class ProjectileKey) Key; /* 0x0060 */
  FB_HANDLE(class ProjectileBlueprint) Projectile; /* 0x0068 */
  FB_FLOAT32 SpawnSpeed; /* 0x0070 */
  char pad_0074[0x000C];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(ProjectileValue) == 128);

}
