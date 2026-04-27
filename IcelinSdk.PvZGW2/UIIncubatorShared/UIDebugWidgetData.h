#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142876B58
   RuntimeId:        2E15
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BE1
   VfTable:          0000000142392E40
   Address (Base):   00000001430E05E0
*/
#pragma pack(push, 8)
class UIDebugWidgetData : public UIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class UIWidgetBlueprint) Template; /* 0x0040 */
  FB_STDARRAY(struct Vec2) Positions; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UIDebugWidgetData) == 80);

}
