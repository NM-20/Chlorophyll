#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIComponentData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIStickerBookTeam.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIStickerBookNotShownAssets.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870408
   RuntimeId:        297F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0751
   VfTable:          000000014236D9F0
   Address (Base):   00000001430CFD20
*/
#pragma pack(push, 8)
class PVZUIStickerBookCompData : public UIComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(struct PVZUIDisplayStat) GlobalStats; /* 0x0030 */
  PVZUIStickerBookTeam ZombieTeam; /* 0x0038 */
  PVZUIStickerBookTeam PlantTeam; /* 0x0050 */
  FB_STDARRAY(struct PVZUIStickerBookClass) ZombieClasses; /* 0x0068 */
  FB_STDARRAY(struct PVZUIStickerBookClass) PlantClasses; /* 0x0070 */
  PVZUIStickerBookNotShownAssets NotShownAssets; /* 0x0078 */
  FB_REFARRAY(class TextureAsset) AdditionalTextures; /* 0x0088 */
  FB_INT32 NumAccessoriesPerPage; /* 0x0090 */
  char pad_0094[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */
#pragma pack(pop)

static_assert(sizeof(PVZUIStickerBookCompData) == 152);

}
