#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceServiceData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858188
   RuntimeId:        19DE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06E0
   VfTable:          00000001422D5038
   Address (Base):   000000014310CE70
*/
#pragma pack(push, 8)
class PresenceUserManagementServiceData : public PresenceServiceData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING GameBrowserConfigName; /* 0x0018 */
  FB_INT32 RemoveFrequency; /* 0x0020 */
  char pad_0024[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PresenceUserManagementServiceData) == 40);

}
