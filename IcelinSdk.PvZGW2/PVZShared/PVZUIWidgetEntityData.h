#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428717A8
   RuntimeId:        2A7D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BC6
   VfTable:          000000014236C6B8
   Address (Base):   00000001430B63E0
*/
#pragma pack(push, 8)
class PVZUIWidgetEntityData : public UIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN UseCanvasAsMask; /* 0x0040 */
  char pad_0041[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZUIWidgetEntityData) == 72);

}
