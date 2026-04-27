#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Timeline/TransformLayerData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PivotCharacter.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>

namespace fb
{

/* TypeInfo (Array): 000000014286D4B8
   RuntimeId:        27D9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CF0
   VfTable:          0000000142365D00
   Address (Base):   00000001430E4480
*/
#pragma pack(push, 8)
class PrimaryCharacterCameraLocationTransformLayerData : public TransformLayerData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PivotCharacter pivotCamera; /* 0x0038 */
  GameplayBones secondaryCharacterBoneToTarget; /* 0x003C */
  GameplayBones primaryCharacterBoneToTarget; /* 0x0040 */
  FB_BOOLEAN targetSecondaryCharacter; /* 0x0044 */
  FB_BOOLEAN targetPrimaryCharacter; /* 0x0045 */
  char pad_0046[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PrimaryCharacterCameraLocationTransformLayerData) == 72);

}
