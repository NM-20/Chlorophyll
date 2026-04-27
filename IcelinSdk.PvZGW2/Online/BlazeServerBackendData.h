#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/ServerBackendData.h>
#include <IcelinSdk.PvZGW2/Online/BlazeCreateGameParameters.h>
#include <IcelinSdk.PvZGW2/Online/OnlineEnvironmentConsoleUrl.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858E58
   RuntimeId:        1AA3
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0805
   VfTable:          00000001422D56A0
   Address (Base):   00000001430FA3F0
*/
#pragma pack(push, 8)
class BlazeServerBackendData : public ServerBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  BlazeCreateGameParameters CreateParameters; /* 0x0018 */
  OnlineEnvironmentConsoleUrl ConfigUrl; /* 0x0020 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(BlazeServerBackendData) == 40);

}
