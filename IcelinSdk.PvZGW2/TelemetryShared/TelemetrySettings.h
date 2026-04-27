#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875450
   RuntimeId:        2CFA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11E4
   VfTable:          000000014238C968
   Address (Base):   00000001430CFA80
*/
#pragma pack(push, 8)
class TelemetrySettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class TelemetryStreamFormat) StreamFormats; /* 0x0020 */
  FB_REFARRAY(class TelemetryTransportData) Transports; /* 0x0028 */
  FB_REFARRAY(class StreamData) Streams; /* 0x0030 */
  FB_CSTRING FileLocation; /* 0x0038 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySettings) == 64);

}
