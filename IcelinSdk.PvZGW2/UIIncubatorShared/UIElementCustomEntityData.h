#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementEntityData.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementText.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876978
   RuntimeId:        2DF7
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BAF
   VfTable:          0000000142393038
   Address (Base):   00000001430E0460
*/
#pragma pack(push, 16)
class UIElementCustomEntityData : public UIElementEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIElementGenericStyle) Style; /* 0x00E0 */
  UIElementText Text; /* 0x00E8 */
  FB_HANDLE(class UIElementFontStyle) FontStyle; /* 0x0108 */
  FB_HANDLE(class UIElementFontEffect) FontEffect; /* 0x0110 */
  FB_CSTRING TextureId; /* 0x0118 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(UIElementCustomEntityData) == 288);

}
