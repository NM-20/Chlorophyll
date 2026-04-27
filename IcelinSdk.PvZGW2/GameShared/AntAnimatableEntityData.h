#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Entity/SubRealm.h>
#include <IcelinSdk.PvZGW2/GameShared/AntAnimationHandlerData.h>
#include <IcelinSdk.PvZGW2/GameShared/AnimationControlModeEnum.h>
#include <IcelinSdk.PvZGW2/GameShared/JointOutputModeEnum.h>

namespace fb
{

/* TypeInfo (Array): 000000014284F710
   RuntimeId:        12E7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C17
   VfTable:          00000001422764A8
   Address (Base):   00000001430B4F80
*/
#pragma pack(push, 8)
class AntAnimatableEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  SubRealm SubRealm; /* 0x001C */
  AntAnimationHandlerData AnimationData; /* 0x0020 */
  FB_FLOAT32 SuppressAnimationCullingDistance; /* 0x0138 */
  AnimationControlModeEnum InitialAnimationControlMode; /* 0x013C */
  JointOutputModeEnum JointOutputMode; /* 0x0140 */
  char pad_0144[0x0004];
  FB_STDARRAY(FB_INT32) JointOutputPropertyIds; /* 0x0148 */
  FB_BOOLEAN ForceSpawnUp; /* 0x0150 */
  FB_BOOLEAN DisableApplyWorldTransform; /* 0x0151 */
  FB_BOOLEAN AutoActivate; /* 0x0152 */
  FB_BOOLEAN InitialForceDisableCulling; /* 0x0153 */
  FB_BOOLEAN DisableAutoDistanceCulling; /* 0x0154 */
  FB_BOOLEAN Interpolation; /* 0x0155 */
  char pad_0156[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0158 */
#pragma pack(pop)

static_assert(sizeof(AntAnimatableEntityData) == 344);

}
