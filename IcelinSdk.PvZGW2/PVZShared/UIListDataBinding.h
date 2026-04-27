#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIDataBinding.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIDataSourceInfo.h>
#include <IcelinSdk.PvZGW2/PVZShared/DefaultSelectionItem.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListRowType.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListNavigationType.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListUnFocusMode.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListEmptyRowType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A5F0
   RuntimeId:        258D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E32
   VfTable:          000000014235B270
   Address (Base):   00000001430E4BA0
*/
#pragma pack(push, 8)
class UIListDataBinding : public UIDataBinding
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ListIndex; /* 0x0010 */
  char pad_0014[0x0004];
  UIDataSourceInfo ListQuery; /* 0x0018 */
  FB_STDARRAY(struct StaticListItem) StaticItems; /* 0x0030 */
  DefaultSelectionItem DefaultHighlightedRow; /* 0x0038 */
  UIListRowType RowType; /* 0x0058 */
  UIListNavigationType NavigationType; /* 0x005C */
  UIDataSourceInfo NavigationTypeSource; /* 0x0060 */
  UIListUnFocusMode UnFocusMode; /* 0x0078 */
  UIListEmptyRowType EmptyRowType; /* 0x007C */
  FB_INT32 RowSpacing; /* 0x0080 */
  char pad_0084[0x0004];
  FB_CSTRING DisabledRows; /* 0x0088 */
  UIDataSourceInfo RefreshKey; /* 0x0090 */
  FB_BOOLEAN SendIndexWithEvent; /* 0x00A8 */
  FB_BOOLEAN ClearListAtNavigationEvent; /* 0x00A9 */
  FB_BOOLEAN UseScrollBar; /* 0x00AA */
  FB_BOOLEAN ScreenRotationEnabled; /* 0x00AB */
  FB_BOOLEAN Use3DSelection; /* 0x00AC */
  FB_BOOLEAN MouseClickHighlight; /* 0x00AD */
  FB_BOOLEAN FireHighlightOnMouseOut; /* 0x00AE */
  FB_BOOLEAN DataIncludesButtonLayout; /* 0x00AF */
  FB_BOOLEAN Visible; /* 0x00B0 */
  FB_BOOLEAN SpinnerEnabled; /* 0x00B1 */
  FB_BOOLEAN HighLightOnUpdate; /* 0x00B2 */
  FB_BOOLEAN EnableScaleToText; /* 0x00B3 */
  FB_BOOLEAN DisableItemCaching; /* 0x00B4 */
  FB_BOOLEAN DisplayDisabledItems; /* 0x00B5 */
  FB_BOOLEAN AllowDisabledItemSelection; /* 0x00B6 */
  FB_BOOLEAN IsPurchaseList; /* 0x00B7 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00B8 */
#pragma pack(pop)

static_assert(sizeof(UIListDataBinding) == 184);

}
