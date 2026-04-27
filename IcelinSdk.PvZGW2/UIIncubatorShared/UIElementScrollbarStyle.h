#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementStyle.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876818
   RuntimeId:        2DE1
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          066C
   VfTable:          0000000142393178
   Address (Base):   0000000143102DF0
*/
#pragma pack(push, 8)
class UIElementScrollbarStyle : public UIElementStyle
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIElementFillData) FillBehindHandle; /* 0x0018 */
  FB_HANDLE(class UIElementButtonStyle) StyleUp; /* 0x0020 */
  FB_HANDLE(class UIElementButtonStyle) StyleDown; /* 0x0028 */
  FB_HANDLE(class UIElementButtonStyle) StyleHandle; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIElementScrollbarStyle) == 56);

}
