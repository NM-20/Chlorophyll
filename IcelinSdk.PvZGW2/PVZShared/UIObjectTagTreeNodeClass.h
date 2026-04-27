#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/TreeNodeBase.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIObjectTagType.h>
#include <IcelinSdk.PvZGW2/GameShared/TeamId.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIObjectTagVisibility.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIHealthbarVisibility.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A7E0
   RuntimeId:        25A3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0EB7
   VfTable:          000000014235B140
   Address (Base):   0000000143106BD0
*/
#pragma pack(push, 8)
class UIObjectTagTreeNodeClass : public TreeNodeBase
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 TagId; /* 0x0018 */
  UIObjectTagType TagType; /* 0x001C */
  FB_FLOAT32 MaxVisibilityRange; /* 0x0020 */
  FB_FLOAT32 MaxHealthbarVisibilityRange; /* 0x0024 */
  FB_FLOAT32 BeginMinVisibilityRange; /* 0x0028 */
  FB_FLOAT32 EndMinVisibilityRange; /* 0x002C */
  FB_FLOAT32 BeginFadeRange; /* 0x0030 */
  FB_FLOAT32 EndFadeRange; /* 0x0034 */
  FB_FLOAT32 EndFadeAlpha; /* 0x0038 */
  FB_FLOAT32 MaxInCrosshairVisibilityRange; /* 0x003C */
  FB_CSTRING FriendlyLabel; /* 0x0040 */
  FB_CSTRING EnemyLabel; /* 0x0048 */
  FB_CSTRING OwnedLabel; /* 0x0050 */
  FB_CSTRING FriendlyIconId; /* 0x0058 */
  FB_CSTRING EnemyIconId; /* 0x0060 */
  TeamId TeamId; /* 0x0068 */
  char pad_006C[0x0004];
  FB_STDARRAY(FB_UINT32) CustomizationFilters; /* 0x0070 */
  UIObjectTagVisibility ObjectTagVisibility; /* 0x0078 */
  UIHealthbarVisibility HealthbarVisibility; /* 0x007C */
  FB_REFARRAY(class UIObjectTagTreeNodeClass) Nodes; /* 0x0080 */
  FB_BOOLEAN ShowDownArrow; /* 0x0088 */
  FB_BOOLEAN UseImageSize; /* 0x0089 */
  FB_BOOLEAN SnapToEdge; /* 0x008A */
  FB_BOOLEAN ShowIconWhenSnapped; /* 0x008B */
  FB_BOOLEAN ShowLabelWhenSnapped; /* 0x008C */
  FB_BOOLEAN IsChampion; /* 0x008D */
  FB_BOOLEAN UseWoodBacker; /* 0x008E */
  FB_BOOLEAN UseEnchantedBacker; /* 0x008F */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(UIObjectTagTreeNodeClass) == 144);

}
