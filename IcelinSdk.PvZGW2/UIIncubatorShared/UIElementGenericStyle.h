#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UIElementStyle.h>

namespace fb
{

/* TypeInfo (Array): 00000001428767F8
   RuntimeId:        2DDF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          066B
   VfTable:          00000001423930B8
   Address (Base):   0000000143102E50
*/
#pragma pack(push, 8)
class UIElementGenericStyle : public UIElementStyle
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIElementFillData) FillData; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(UIElementGenericStyle) == 32);

}
