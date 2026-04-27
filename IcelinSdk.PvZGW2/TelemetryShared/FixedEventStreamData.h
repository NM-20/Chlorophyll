#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/EventStreamData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875590
   RuntimeId:        2D0E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06C3
   VfTable:          000000014238C8B8
   Address (Base):   00000001430E10C0
*/
#pragma pack(push, 8)
class FixedEventStreamData : public EventStreamData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_HANDLE(class FixedEventStreamFormat) Format; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(FixedEventStreamData) == 48);

}
