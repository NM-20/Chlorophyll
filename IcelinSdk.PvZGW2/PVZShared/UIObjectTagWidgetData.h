#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871AE0
   RuntimeId:        2AAF
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BDF
   VfTable:          000000014236C208
   Address (Base):   0000000143105190
*/
#pragma pack(push, 8)
class UIObjectTagWidgetData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(UIObjectTagWidgetData) == 72);

}
