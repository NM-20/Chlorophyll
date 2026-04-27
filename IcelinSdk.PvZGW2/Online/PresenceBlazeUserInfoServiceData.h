#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858068
   RuntimeId:        19CC
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06DD
   VfTable:          00000001422D5108
   Address (Base):   000000014310CF30
*/
#pragma pack(push, 8)
class PresenceBlazeUserInfoServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING GameBrowserConfigName; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(PresenceBlazeUserInfoServiceData) == 32);

}
