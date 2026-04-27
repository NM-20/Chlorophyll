#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/LevelDescriptionComponent.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIMapNavigationData.h>
#include <IcelinSdk.PvZGW2/PVZShared/UILevelStatData.h>
#include <IcelinSdk.PvZGW2/Core/PlatformScalableFloat.h>

namespace fb
{

/* TypeInfo (Array): 0000000142861C08
   RuntimeId:        1FD3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DF6
   VfTable:          00000001423441B8
   Address (Base):   00000001430D0440
*/
#pragma pack(push, 8)
class UILevelDescriptionComponent : public LevelDescriptionComponent
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING LoadingMusicPath; /* 0x0010 */
  FB_CSTRING LevelImagePath; /* 0x0018 */
  UIMapNavigationData MapNavigationData; /* 0x0020 */
  UILevelStatData LevelCompledStatData; /* 0x0038 */
  UILevelStatData LevelScoreStatData; /* 0x0058 */
  FB_INT32 SortIndex; /* 0x0078 */
  char pad_007C[0x0004];
  FB_HANDLE(class UILevelLoadData) LevelLoadData; /* 0x0080 */
  FB_CSTRING MPLoadingAssetPath; /* 0x0088 */
  PlatformScalableFloat LoadScreenTeardownDelay; /* 0x0090 */
  char pad_00B4[0x0004];
  FB_STDARRAY(struct UILevelCoopDescription) LevelCoopDescription; /* 0x00B8 */
  FB_BOOLEAN IsPlaygroundLevel; /* 0x00C0 */
  FB_BOOLEAN LoadingMusicAutomaticStop; /* 0x00C1 */
  FB_BOOLEAN HoldOnLoadComplete; /* 0x00C2 */
  char pad_00C3[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C8 */
#pragma pack(pop)

static_assert(sizeof(UILevelDescriptionComponent) == 200);

}
