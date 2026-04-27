#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/MetricsTelemetryOnlineSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/ServerTransactionTelemetryOnlineSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868658
   RuntimeId:        23E9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9120
   Default Value:    0000000142868670
*/
#pragma pack(push, 8)
struct TelemetryOnlineSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING DownloadSettingsLicenseOverride; /* 0x0000 */
  FB_CSTRING EnableTelemetryLicenseOverride; /* 0x0008 */
  MetricsTelemetryOnlineSettings MetricsSettings; /* 0x0010 */
  FB_CSTRING TransactionLogSettingsPrefix; /* 0x0028 */
  ServerTransactionTelemetryOnlineSettings PeerHostedServerTransactionSettings; /* 0x0030 */
  ServerTransactionTelemetryOnlineSettings DedicatedServerTransactionSettings; /* 0x0068 */
  FB_INT32 NumSecondsBetweenMemoryMetricUpdates; /* 0x00A0 */
  FB_BOOLEAN DownloadSettings; /* 0x00A4 */
  FB_BOOLEAN EnableTelemetry; /* 0x00A5 */
  FB_BOOLEAN CompressTransactions; /* 0x00A6 */
  char pad_00A7[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A8 */
#pragma pack(pop)

static_assert(sizeof(TelemetryOnlineSettings) == 168);

}
