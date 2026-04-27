#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 00000001428643B8
   RuntimeId:        21D5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          095A
   VfTable:          0000000142352898
   Address (Base):   00000001430E5620
*/
#pragma pack(push, 8)
class CustomizationArchetypeInfo : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING ArchetypeName; /* 0x0010 */
  FB_CSTRING ArchetypeURL; /* 0x0018 */
  FB_CSTRING ArchetypeDescription; /* 0x0020 */
  FB_CSTRING ArchetypeUIKitIcon; /* 0x0028 */
  FB_HANDLE(class MovieTextureAsset) ArchetypeTutorialVideo; /* 0x0030 */
  FB_HANDLE(class PVZCharacterCustomizationAsset) CustomizationAsset; /* 0x0038 */
  FB_REFARRAY(class CustomizationCostumeInfo) Costumes; /* 0x0040 */
  FB_UINT32 SelectedCostumeIndex; /* 0x0048 */
  FB_UINT32 SelectedCostumeId; /* 0x004C */
  FB_BOOLEAN HasTutorialVideo; /* 0x0050 */
  FB_BOOLEAN ContainsTempUnlockCostume; /* 0x0051 */
  FB_BOOLEAN IsHidden; /* 0x0052 */
  char pad_0053[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(CustomizationArchetypeInfo) == 88);

}
