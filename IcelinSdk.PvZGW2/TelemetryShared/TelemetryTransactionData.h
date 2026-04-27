#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryRowData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875430
   RuntimeId:        2CF8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0F70
   VfTable:          000000014238C958
   Address (Base):   00000001431031B0
*/
#pragma pack(push, 8)
class TelemetryTransactionData : public TelemetryRowData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(TelemetryTransactionData) == 16);

}
