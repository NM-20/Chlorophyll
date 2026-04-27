#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/StreamData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875570
   RuntimeId:        2D0C
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06C2
   VfTable:          000000014238C8F8
   Address (Base):   00000001430E1120
*/
#pragma pack(push, 8)
class EventStreamData : public StreamData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(EventStreamData) == 40);

}
