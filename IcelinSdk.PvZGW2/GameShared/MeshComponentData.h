#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CAE8
   RuntimeId:        1090
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D53
   VfTable:          0000000142267540
   Address (Base):   00000001430D0B60
*/
#pragma pack(push, 16)
class MeshComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class BoneFakePhysicsData) BoneFakePhysics; /* 0x0070 */
  FB_HANDLE(class MeshAsset) Mesh; /* 0x0078 */
  FB_HANDLE(class SkeletonAsset) Skeleton; /* 0x0080 */
  char pad_0088[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(MeshComponentData) == 144);

}
