#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/BlazePresenceBackendData.h>
#include <IcelinSdk.PvZGW2/PVZShared/PeerCreateGameParameters.h>

namespace fb
{

/* TypeInfo (Array): 0000000142859F58
   RuntimeId:        1B91
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06AE
   VfTable:          00000001422DBD10
   Address (Base):   00000001430FA270
*/
#pragma pack(push, 8)
class PVZBlazePresenceBackendData : public BlazePresenceBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  PeerCreateGameParameters PeerCreateParameters; /* 0x0030 */
  FB_HANDLE(class GameParametersData) PeerResetParameters; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(PVZBlazePresenceBackendData) == 72);

}
