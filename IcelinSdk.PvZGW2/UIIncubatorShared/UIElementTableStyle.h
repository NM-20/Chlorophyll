#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementStyle.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876838
   RuntimeId:        2DE3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          066D
   VfTable:          0000000142393188
   Address (Base):   0000000143102D90
*/
#pragma pack(push, 8)
class UIElementTableStyle : public UIElementStyle
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIElementScrollbarStyle) StyleScroll; /* 0x0018 */
  FB_HANDLE(class UIElementFillData) FillHeader; /* 0x0020 */
  FB_HANDLE(class UIElementFillData) FillCell; /* 0x0028 */
  FB_HANDLE(class UIElementFontStyle) HeaderFontStyle; /* 0x0030 */
  FB_HANDLE(class UIElementFontStyle) CellFontStyle; /* 0x0038 */
  FB_HANDLE(class UIElementFillData) FillRowsBounds; /* 0x0040 */
  FB_FLOAT32 HeaderHeight; /* 0x0048 */
  FB_FLOAT32 RowHeight; /* 0x004C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UIElementTableStyle) == 80);

}
