#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>
#include <IcelinSdk.PvZGW2/UI/UIInputAction.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871DE0
   RuntimeId:        2ADF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BC8
   VfTable:          000000014236BE50
   Address (Base):   00000001430E1F60
*/
#pragma pack(push, 8)
class UIListWidgetData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIWidgetBlueprint) DynamicRow_Template; /* 0x0048 */
  FB_INT32 DynamicRowCount; /* 0x0050 */
  char pad_0054[0x0004];
  FB_REFARRAY(class ListRow) Rows; /* 0x0058 */
  UIInputAction IncreaseIndexButton; /* 0x0060 */
  UIInputAction DecreaseIndexButton; /* 0x0064 */
  UIInputAction SelectButton; /* 0x0068 */
  FB_INT32 InitialIndex; /* 0x006C */
  FB_UINT32 NumItemsToDisplay; /* 0x0070 */
  FB_INT32 DataIndex; /* 0x0074 */
  FB_BOOLEAN HasFocus; /* 0x0078 */
  FB_BOOLEAN CanUseMouseWheelPastEnd; /* 0x0079 */
  FB_BOOLEAN ShouldWrap; /* 0x007A */
  FB_BOOLEAN ReverseDrawOrder; /* 0x007B */
  FB_BOOLEAN SetInitialIndexOnValueChanged; /* 0x007C */
  char pad_007D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */
#pragma pack(pop)

static_assert(sizeof(UIListWidgetData) == 128);

}
