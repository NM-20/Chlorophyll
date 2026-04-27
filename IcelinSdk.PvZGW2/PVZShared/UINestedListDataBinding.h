#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/FlowEdShared/UIDataBinding.h>
#include <IcelinSdk.PvZGW2/PVZShared/DefaultSelectionItem.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListNavigationType.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListEmptyRowType.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIDataSourceInfo.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListRowType.h>

namespace fb
{

/* TypeInfo (Array): 000000014286A6C0
   RuntimeId:        2591
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E33
   VfTable:          000000014235B260
   Address (Base):   00000001430E4B40
*/
#pragma pack(push, 8)
class UINestedListDataBinding : public UIDataBinding
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 ListIndex; /* 0x0010 */
  char pad_0014[0x0004];
  FB_STDARRAY(struct NestedList) NestedLists; /* 0x0018 */
  DefaultSelectionItem DefaultHighlightedRow; /* 0x0020 */
  UIListNavigationType NavigationType; /* 0x0040 */
  UIListEmptyRowType EmptyRowType; /* 0x0044 */
  FB_INT32 RowSpacing; /* 0x0048 */
  FB_INT32 SelectorWidth; /* 0x004C */
  UIDataSourceInfo Visibility; /* 0x0050 */
  UIListRowType RowType; /* 0x0068 */
  char pad_006C[0x0004];
  UIDataSourceInfo RefreshKey; /* 0x0070 */
  FB_BOOLEAN SendIndexWithEvent; /* 0x0088 */
  FB_BOOLEAN ClearListAtNavigationEvent; /* 0x0089 */
  FB_BOOLEAN UseScrollBar; /* 0x008A */
  FB_BOOLEAN ScreenRotationEnabled; /* 0x008B */
  FB_BOOLEAN Use3DSelection; /* 0x008C */
  FB_BOOLEAN DataIncludesButtonLayout; /* 0x008D */
  FB_BOOLEAN InvertVisible; /* 0x008E */
  FB_BOOLEAN Visible; /* 0x008F */
  FB_BOOLEAN HighLightOnUpdate; /* 0x0090 */
  FB_BOOLEAN SendLabelWithStaticItems; /* 0x0091 */
  FB_BOOLEAN DisplayDisabledItems; /* 0x0092 */
  FB_BOOLEAN AllowDisabledItemSelection; /* 0x0093 */
  char pad_0094[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0098 */
#pragma pack(pop)

static_assert(sizeof(UINestedListDataBinding) == 152);

}
