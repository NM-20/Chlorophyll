#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142833788
   RuntimeId:        0133
   TypeInfo Kind:    EnumTypeInfo
   Address:          00000001430BC5A0
*/
enum TelemetryReleaseType
{
  TELEMETRY_RELEASE_PRODUCTION = 0,
  TELEMETRY_RELEASE_DEMO = 1,
  TELEMETRY_RELEASE_ALPHA = 2,
  TELEMETRY_RELEASE_BETA = 3,
  TELEMETRY_RELEASE_PRESS = 4,
  TELEMETRY_RELEASE_OTHER = 5,
};

}
