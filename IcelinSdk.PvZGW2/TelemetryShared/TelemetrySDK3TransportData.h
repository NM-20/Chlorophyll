#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/TelemetryShared/TelemetryTransportData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142875610
   RuntimeId:        2D16
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0812
   VfTable:          000000014238C808
   Address (Base):   00000001430F4E10
*/
#pragma pack(push, 8)
class TelemetrySDK3TransportData : public TelemetryTransportData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 ProjectId; /* 0x0020 */
  char pad_0024[0x0004];
  FB_CSTRING VersionName; /* 0x0028 */
  FB_INT32 logLevel; /* 0x0030 */
  FB_BOOLEAN IsProduction; /* 0x0034 */
  char pad_0035[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(TelemetrySDK3TransportData) == 56);

}
