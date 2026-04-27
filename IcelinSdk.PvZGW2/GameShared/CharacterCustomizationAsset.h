#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/DataContainerPolicyAsset.h>
#include <IcelinSdk.PvZGW2/GameShared/UIHudIcon.h>

namespace fb
{

/* TypeInfo (Array): 000000014284EB78
   RuntimeId:        124B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0767
   VfTable:          0000000142272C68
   Address (Base):   00000001430CE7B0
*/
#pragma pack(push, 8)
class CharacterCustomizationAsset : public DataContainerPolicyAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  UIHudIcon UIHudIcon; /* 0x0018 */
  char pad_001C[0x0004];
  FB_CSTRING UIKitIconName; /* 0x0020 */
  FB_CSTRING LabelSid; /* 0x0028 */
  FB_CSTRING ClassDescriptionSid; /* 0x0030 */
  FB_HANDLE(class CustomizationTable) VisualTable; /* 0x0038 */
  FB_HANDLE(class CustomizationTable) SpecializationTable; /* 0x0040 */
  FB_REFARRAY(class VoiceOverLabel) VoiceOverLabels; /* 0x0048 */
  FB_HANDLE(class CharacterBlueprint) Soldier; /* 0x0050 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(CharacterCustomizationAsset) == 88);

}
