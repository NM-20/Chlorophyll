#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868830
   RuntimeId:        23F9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9060
   Default Value:    0000000142868848
*/
#pragma pack(push, 4)
struct BlazeClientBlackMarketManagerSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 MinimumForceOverdueNotificationDelaySeconds; /* 0x0000 */
  FB_INT32 MaximumForceOverdueNotificationDelaySeconds; /* 0x0004 */
  FB_UINT32 MaximumNotificationHandlingAttempts; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(BlazeClientBlackMarketManagerSettings) == 12);

}
