#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/GameComponentData.h>
#include <IcelinSdk.PvZGW2/Core/LinearTransform.h>
#include <IcelinSdk.PvZGW2/GameShared/WarpAnimationBinding.h>
#include <IcelinSdk.PvZGW2/GameShared/CannedAnimationBinding.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EF68
   RuntimeId:        1279
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D96
   VfTable:          00000001422746C8
   Address (Base):   00000001430D6010
*/
#pragma pack(push, 16)
class WarpAnimationComponentData : public GameComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  LinearTransform ConnectTransform; /* 0x0070 */
  WarpAnimationBinding WarpBinding; /* 0x00B0 */
  CannedAnimationBinding CannedAnimBinding; /* 0x013C */
  FB_INT32 AnimationEntitySpacePriority; /* 0x0218 */
  GameplayBones BoneToAlign; /* 0x021C */
  FB_BOOLEAN RequireAnimationWeight; /* 0x0220 */
  FB_BOOLEAN ForceAnimationTransform; /* 0x0221 */
  FB_BOOLEAN ExternalConnectTransform; /* 0x0222 */
  char pad_0223[0x000D];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0230 */
#pragma pack(pop)

static_assert(sizeof(WarpAnimationComponentData) == 560);

}
