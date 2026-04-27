#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementEntityData.h>
#include <IcelinSdk.PvZGW2/UIDataKeysShared/UIDataSource.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876898
   RuntimeId:        2DE9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BAA
   VfTable:          0000000142393140
   Address (Base):   00000001430E0580
*/
#pragma pack(push, 16)
class UIElementEditBoxEntityData : public UIElementEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIElementEditBoxStyle) Style; /* 0x00E0 */
  UIDataSource DataSource; /* 0x00E8 */
  FB_HANDLE(class UIElementTrigger) OnEnteredText; /* 0x0100 */
  FB_UINT32 MaxTextLength; /* 0x0108 */
  char pad_010C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(UIElementEditBoxEntityData) == 272);

}
