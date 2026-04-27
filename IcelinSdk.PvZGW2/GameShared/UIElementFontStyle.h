#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>
#include <IcelinSdk.PvZGW2/GameShared/UIElementColor.h>

namespace fb
{

/* TypeInfo (Array): 000000014284C3E8
   RuntimeId:        1032
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0829
   VfTable:          0000000142267A50
   Address (Base):   0000000143112750
*/
#pragma pack(push, 16)
class UIElementFontStyle : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIElementFontDefinition) Hd; /* 0x0018 */
  UIElementColor Color; /* 0x0020 */
  FB_HANDLE(class UIElementFontDefinition) Sd; /* 0x0040 */
  char pad_0048[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UIElementFontStyle) == 80);

}
