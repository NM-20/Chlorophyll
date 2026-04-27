#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/UIListRowData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871D80
   RuntimeId:        2AD9
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BCE
   VfTable:          000000014236C0A8
   Address (Base):   00000001430D8B10
*/
#pragma pack(push, 8)
class UIListRowToggleWidgetData : public UIListRowData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_INT32 InitialToggleIndex; /* 0x0050 */
  FB_BOOLEAN AcceptToggleInputs; /* 0x0054 */
  char pad_0055[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0058 */
#pragma pack(pop)

static_assert(sizeof(UIListRowToggleWidgetData) == 88);

}
