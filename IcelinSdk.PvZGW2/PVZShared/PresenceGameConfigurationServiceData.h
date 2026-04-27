#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>
#include <IcelinSdk.PvZGW2/Online/OnlineEnvironmentConsoleUrl.h>

namespace fb
{

/* TypeInfo (Array): 000000014286BB20
   RuntimeId:        2684
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06D0
   VfTable:          000000014235A9E0
   Address (Base):   00000001430F7690
*/
#pragma pack(push, 8)
class PresenceGameConfigurationServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  OnlineEnvironmentConsoleUrl ConfigUrl; /* 0x0018 */
  FB_STDARRAY(struct GameConfigurationContentMapping) ContentMappings; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PresenceGameConfigurationServiceData) == 40);

}
