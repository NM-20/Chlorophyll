#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/UIIncubatorShared/UILegacyWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871910
   RuntimeId:        2A93
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BBF
   VfTable:          000000014236C490
   Address (Base):   00000001430E2380
*/
#pragma pack(push, 8)
class UIWebViewWidgetData : public UILegacyWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING URL; /* 0x0048 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UIWebViewWidgetData) == 80);

}
