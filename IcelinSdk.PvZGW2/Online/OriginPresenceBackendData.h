#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858E78
   RuntimeId:        1AA5
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06B1
   VfTable:          00000001422D5690
   Address (Base):   00000001430E8980
*/
#pragma pack(push, 8)
class OriginPresenceBackendData : public PresenceBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_STDARRAY(FB_CSTRING) CommerceCategories; /* 0x0018 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(OriginPresenceBackendData) == 32);

}
