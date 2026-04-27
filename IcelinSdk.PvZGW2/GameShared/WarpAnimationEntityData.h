#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityData.h>
#include <IcelinSdk.PvZGW2/Core/Realm.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/GameShared/WarpAnimationBinding.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EF88
   RuntimeId:        127B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0AB6
   VfTable:          0000000142274708
   Address (Base):   00000001430BE190
*/
#pragma pack(push, 16)
class WarpAnimationEntityData : public EntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  Realm Realm; /* 0x0018 */
  char pad_001C[0x0004];
  LinearTransform ConnectTransform; /* 0x0020 */
  WarpAnimationBinding WarpBinding; /* 0x0060 */
  FB_INT32 AnimationEntitySpacePriority; /* 0x00EC */
  GameplayBones BoneToAlign; /* 0x00F0 */
  FB_BOOLEAN RequireAnimationWeight; /* 0x00F4 */
  FB_BOOLEAN ForceAnimationTransform; /* 0x00F5 */
  FB_BOOLEAN ExternalConnectTransform; /* 0x00F6 */
  char pad_00F7[0x0009];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(WarpAnimationEntityData) == 256);

}
