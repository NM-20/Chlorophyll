#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/VisualUnlockAsset.h>
#include <IcelinSdk.PvZGW2/Entity/GameplayBones.h>
#include <IcelinSdk.PvZGW2/GameShared/CustomizationLayer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868F90
   RuntimeId:        244B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0729
   VfTable:          0000000142356080
   Address (Base):   00000001430BDE90
*/
#pragma pack(push, 8)
class PVZVisualUnlockAsset : public VisualUnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  GameplayBones BoneToAttachEffect; /* 0x00E8 */
  CustomizationLayer Layer; /* 0x00EC */
  FB_STDARRAY(enum CustomizationLayer) LayersMask; /* 0x00F0 */
  FB_STDARRAY(enum VisualUnlockSetId) SetIds; /* 0x00F8 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0100 */
#pragma pack(pop)

static_assert(sizeof(PVZVisualUnlockAsset) == 256);

}
