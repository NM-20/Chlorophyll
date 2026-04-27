#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>
#include <IcelinSdk.PvZGW2/GameShared/ModelAnimationTransformType.h>
#include <IcelinSdk.PvZGW2/GameShared/ModelAnimationUpdateOrder.h>

namespace fb
{

/* TypeInfo (Array): 000000014284B648
   RuntimeId:        0F69
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0A1D
   VfTable:          00000001422688C0
   Address (Base):   00000001430D0AA0
*/
#pragma pack(push, 16)
class ModelAnimationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform AnimationEntitySpace; /* 0x0020 */
  FB_CSTRING DefaultAnimation; /* 0x0060 */
  FB_INT32 AnimationIndex; /* 0x0068 */
  char pad_006C[0x0004];
  FB_HANDLE(class AntAnimationSetAsset) AnimationSet; /* 0x0070 */
  FB_FLOAT32 ExternalTime; /* 0x0078 */
  FB_FLOAT32 PlaybackSpeed; /* 0x007C */
  FB_INT32 InstanceSeed; /* 0x0080 */
  GameplayBones BoneToPlace; /* 0x0084 */
  ModelAnimationTransformType ModelAnimationTransformType; /* 0x0088 */
  ModelAnimationUpdateOrder JointWorldTransformUpdateOrder; /* 0x008C */
  FB_STDARRAY(FB_INT32) JointOutputFieldHashes; /* 0x0090 */
  FB_BOOLEAN AutoStart; /* 0x0098 */
  FB_BOOLEAN Looping; /* 0x0099 */
  FB_BOOLEAN ResetAfterStop; /* 0x009A */
  FB_BOOLEAN PlayFirstFrame; /* 0x009B */
  FB_BOOLEAN AnimationEntitySpaceActive; /* 0x009C */
  FB_BOOLEAN DisableCulling; /* 0x009D */
  FB_BOOLEAN EnableJointWorldTransformOutput; /* 0x009E */
  FB_BOOLEAN ShowDebugTransforms; /* 0x009F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(ModelAnimationEntityData) == 160);

}
