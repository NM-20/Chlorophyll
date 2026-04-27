#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/EventStreamData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428755B0
   RuntimeId:        2D10
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06C4
   VfTable:          000000014238C8A8
   Address (Base):   00000001430E1060
*/
#pragma pack(push, 8)
class VarEventStreamData : public EventStreamData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class VariableEventStreamFormat) Format; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(VarEventStreamData) == 48);

}
