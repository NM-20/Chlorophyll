#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/UIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428769D8
   RuntimeId:        2DFD
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BBE
   VfTable:          0000000142392F90
   Address (Base):   00000001430BF590
*/
#pragma pack(push, 8)
class UILegacyWidgetEntityData : public UIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) InputEvents; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UILegacyWidgetEntityData) == 72);

}
