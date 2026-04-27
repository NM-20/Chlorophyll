#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryTransportData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875630
   RuntimeId:        2D18
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0815
   VfTable:          000000014238C838
   Address (Base):   0000000143103150
*/
#pragma pack(push, 8)
class TelemetryTTYTransportData : public TelemetryTransportData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 MaxBuffer; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(TelemetryTTYTransportData) == 40);

}
