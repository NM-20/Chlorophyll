#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryTransportData.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEndPointConfig.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinSessionHeaderConfig.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetrySDKPinEventHeaderConfig.h>

namespace fb
{

/* TypeInfo (Array): 00000001428757A0
   RuntimeId:        2D22
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0813
   VfTable:          000000014238C848
   Address (Base):   00000001430D8630
*/
#pragma pack(push, 8)
class TelemetrySDKPinTransportData : public TelemetryTransportData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TelemetrySDKPinEndPointConfig EndPointConfig; /* 0x0020 */
  FB_INT32 logLevel; /* 0x0038 */
  char pad_003C[0x0004];
  TelemetrySDKPinSessionHeaderConfig SessionHeaderConfig; /* 0x0040 */
  TelemetrySDKPinEventHeaderConfig EventHeaderConfig; /* 0x0090 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00F8 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySDKPinTransportData) == 248);

}
