#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/SystemSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/DailyQuestsSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/KillSwitchSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/CommunityPortalSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/ConsumableLimitSettings.h>
#include <IcelinSdk.PvZGW2/PVZShared/ConsumableConversionRateSettings.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868CF0
   RuntimeId:        2423
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          11BA
   VfTable:          000000014234E880
   Address (Base):   00000001430DA790
*/
#pragma pack(push, 8)
class PVZServerGameSettings : public SystemSettings
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  DailyQuestsSettings DailyQuests; /* 0x0020 */
  char pad_002C[0x0004];
  KillSwitchSettings KillSwitches; /* 0x0030 */
  CommunityPortalSettings CommunityPortal; /* 0x0108 */
  ConsumableLimitSettings ConsumableLimits; /* 0x01E0 */
  ConsumableConversionRateSettings ConsumableConversionRates; /* 0x01E4 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01E8 */
#pragma pack(pop)

static_assert(sizeof(PVZServerGameSettings) == 488);

}
