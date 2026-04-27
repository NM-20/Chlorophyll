#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/CharacterCustomizationAsset.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864288
   RuntimeId:        21C3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0768
   VfTable:          0000000142352858
   Address (Base):   00000001430D3F70
*/
#pragma pack(push, 8)
class PVZCharacterCustomizationAsset : public CharacterCustomizationAsset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class CustomizationTable) WeaponTable; /* 0x0058 */
  FB_HANDLE(class WeaponVisualTable) WeaponVisualTable; /* 0x0060 */
  FB_HANDLE(class GestureTable) GestureTable; /* 0x0068 */
  FB_CSTRING ClassTutorialSid; /* 0x0070 */
  FB_HANDLE(class MovieTextureAsset) ClassTutorialVideo; /* 0x0078 */
  FB_BOOLEAN IsSelectable; /* 0x0080 */
  FB_BOOLEAN IsRandomlySelectable; /* 0x0081 */
  char pad_0082[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0088 */
#pragma pack(pop)

static_assert(sizeof(PVZCharacterCustomizationAsset) == 136);

}
