#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/PVZUIWidgetEntityData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142871D40
   RuntimeId:        2AD5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0BCD
   VfTable:          000000014236C1D0
   Address (Base):   00000001430D3010
*/
#pragma pack(push, 8)
class UIListRowData : public PVZUIWidgetEntityData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_BOOLEAN RowEnabled; /* 0x0048 */
  FB_BOOLEAN RowHidden; /* 0x0049 */
  char pad_004A[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(UIListRowData) == 80);

}
