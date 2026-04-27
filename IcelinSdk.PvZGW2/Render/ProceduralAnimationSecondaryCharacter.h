#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Render/ProceduralAnimationTypeSimple.h>
#include <IcelinSdk.PvZGW2/Render/ProceduralAnimationSecondaryCharacterSimType.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 0000000142852BE0
   RuntimeId:        15E6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          095F
   VfTable:          00000001422A17C0
   Address (Base):   00000001430EAC60
*/
#pragma pack(push, 8)
class ProceduralAnimationSecondaryCharacter : public ProceduralAnimationTypeSimple
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 BendMultiplier; /* 0x0020 */
  FB_FLOAT32 WiggleSpeedMultiplier; /* 0x0024 */
  FB_FLOAT32 WindInfluenceMultiplier; /* 0x0028 */
  ProceduralAnimationSecondaryCharacterSimType SimType; /* 0x002C */
  GameplayBones Bone; /* 0x0030 */
  FB_FLOAT32 Length; /* 0x0034 */
  FB_FLOAT32 Damping; /* 0x0038 */
  FB_FLOAT32 GravityModifier; /* 0x003C */
  FB_FLOAT32 SpringConstant; /* 0x0040 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ProceduralAnimationSecondaryCharacter) == 72);

}
