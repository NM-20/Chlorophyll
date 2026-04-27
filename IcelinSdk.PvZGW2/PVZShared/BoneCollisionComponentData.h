#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863F98
   RuntimeId:        2195
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D44
   VfTable:          0000000142352B68
   Address (Base):   00000001430D41B0
*/
#pragma pack(push, 16)
class BoneCollisionComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class SkeletonCollisionData) SkeletonCollisionData; /* 0x0070 */
  FB_FLOAT32 DetailedCollisionSpeedLimitOverride; /* 0x0078 */
  char pad_007C[0x0004];
  FB_STDARRAY(struct BoneCollisionStateData) BoneCollisionStates; /* 0x0080 */
  FB_BOOLEAN SupportsServerBones; /* 0x0088 */
  char pad_0089[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(BoneCollisionComponentData) == 144);

}
