#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterCustomizationComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZCharacterCustomizationComponentBinding.h>

namespace fb
{

/* TypeInfo (Array): 0000000142863D88
   RuntimeId:        2175
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0D62
   VfTable:          00000001423530C0
   Address (Base):   00000001430D5470
*/
#pragma pack(push, 16)
class PVZCharacterCustomizationComponentData : public CharacterCustomizationComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PVZCharacterCustomizationComponentBinding AnimationBinding; /* 0x0080 */
  FB_BOOLEAN HideAttachments; /* 0x00A8 */
  char pad_00A9[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B0 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterCustomizationComponentData) == 176);

}
