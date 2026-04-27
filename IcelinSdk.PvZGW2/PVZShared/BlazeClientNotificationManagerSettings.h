#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868860
   RuntimeId:        23FB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9040
   Default Value:    0000000142868878
*/
#pragma pack(push, 4)
struct BlazeClientNotificationManagerSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 ForceNotificationCooldownSeconds; /* 0x0000 */
  FB_INT32 MinimumForceOverdueFeatureStateNotificationDelaySeconds; /* 0x0004 */
  FB_INT32 MaximumForceOverdueFeatureStateNotificationDelaySeconds; /* 0x0008 */
  FB_INT32 ForceRepeatFeatureStateNotificationIntervalSeconds; /* 0x000C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(BlazeClientNotificationManagerSettings) == 16);

}
