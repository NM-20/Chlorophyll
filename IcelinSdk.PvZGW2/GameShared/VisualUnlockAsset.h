#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UnlockAsset.h>
#include <IcelinSdk.PvZGW2/GameShared/BlueprintBundleReference.h>
#include <IcelinSdk.PvZGW2/Ant/AntRef.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C880
   RuntimeId:        106E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0728
   VfTable:          00000001422677F8
   Address (Base):   00000001430BF070
*/
#pragma pack(push, 8)
class VisualUnlockAsset : public UnlockAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class ObjectBlueprint) OutObjectBlueprint; /* 0x0048 */
  ::fb::BlueprintBundleReference BlueprintBundleReference; /* 0x0050 */
  ::fb::BlueprintBundleReference FirstPersonBundle; /* 0x0088 */
  AntRef FacePoserLibrary; /* 0x00C0 */
  char pad_00D4[0x0004];
  FB_REFARRAY(class VisualUnlockAsset) VisualUnlockAssets; /* 0x00D8 */
  FB_BOOLEAN RenderIn1p; /* 0x00E0 */
  FB_BOOLEAN OnDemandLoaded; /* 0x00E1 */
  FB_BOOLEAN IsCustomizationUnlock; /* 0x00E2 */
  char pad_00E3[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E8 */
#pragma pack(pop)

static_assert(sizeof(VisualUnlockAsset) == 232);

}
