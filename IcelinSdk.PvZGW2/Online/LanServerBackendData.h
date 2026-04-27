#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/ServerBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142858E18
   RuntimeId:        1A9F
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0803
   VfTable:          00000001422D5660
   Address (Base):   000000014310C8D0
*/
#pragma pack(push, 8)
class LanServerBackendData : public ServerBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(LanServerBackendData) == 24);

}
