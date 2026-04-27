#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/ListRow_LabelSingle.h>
#include <IcelinSdk.PvZGW2/UI/UIInputAction.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871D20
   RuntimeId:        2AD3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          094B
   VfTable:          000000014236C188
   Address (Base):   00000001430F5470
*/
#pragma pack(push, 8)
class ListRow_Slider : public ListRow_LabelSingle
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinVal; /* 0x0030 */
  FB_FLOAT32 MaxVal; /* 0x0034 */
  FB_FLOAT32 Step; /* 0x0038 */
  FB_FLOAT32 CurrentValue; /* 0x003C */
  UIInputAction IncreaseSliderButton; /* 0x0040 */
  UIInputAction DecreaseSliderButton; /* 0x0044 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(ListRow_Slider) == 72);

}
