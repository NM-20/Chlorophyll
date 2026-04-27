#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871930
   RuntimeId:        2A95
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BC5
   VfTable:          000000014236C538
   Address (Base):   00000001430E2320
*/
#pragma pack(push, 8)
class UIBasicLoadingIndicatorWidgetData : public UIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN StartVisible; /* 0x0040 */
  char pad_0041[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UIBasicLoadingIndicatorWidgetData) == 72);

}
