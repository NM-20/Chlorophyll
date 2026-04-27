#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIPopupInstanceData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871AC0
   RuntimeId:        2AAD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1152
   VfTable:          000000014236C2C0
   Address (Base):   00000001430B5F00
*/
#pragma pack(push, 8)
class UIGenericPopupInstanceData : public UIPopupInstanceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING Header; /* 0x0010 */
  FB_CSTRING Text; /* 0x0018 */
  FB_STDARRAY(struct UIPopupInstanceButtonWrapper) Buttons; /* 0x0020 */
  FB_FLOAT32 CountdownTime; /* 0x0028 */
  FB_BOOLEAN LocalizeBodyText; /* 0x002C */
  FB_BOOLEAN ShowLoadingIcon; /* 0x002D */
  FB_BOOLEAN HideDimmer; /* 0x002E */
  FB_BOOLEAN RequestExclusiveMouseInput; /* 0x002F */
  FB_BOOLEAN DisplayInTopRight; /* 0x0030 */
  FB_BOOLEAN IgnoreInput; /* 0x0031 */
  FB_BOOLEAN DismissPopupOnButtonEvent; /* 0x0032 */
  FB_BOOLEAN ForcePCOnlyButtons; /* 0x0033 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UIGenericPopupInstanceData) == 56);

}
