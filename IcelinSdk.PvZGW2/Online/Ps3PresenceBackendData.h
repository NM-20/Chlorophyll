#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/PresenceBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858CC0
   RuntimeId:        1A8D
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06AC
   VfTable:          00000001422D5738
   Address (Base):   000000014310CA50
*/
#pragma pack(push, 8)
class Ps3PresenceBackendData : public PresenceBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING CommunicationId; /* 0x0018 */
  FB_CSTRING CommunicationSignature; /* 0x0020 */
  FB_STDARRAY(struct Ps3ParentalLockAgeSettings) ParentalLockAgeSettings; /* 0x0028 */
  FB_STDARRAY(struct Ps3ServiceSettings) ServiceSettings; /* 0x0030 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(Ps3PresenceBackendData) == 56);

}
