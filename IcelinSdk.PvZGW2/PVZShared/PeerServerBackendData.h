#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Online/ServerBackendData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868D80
   RuntimeId:        242B
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0804
   VfTable:          00000001423561A8
   Address (Base):   00000001430D9AD0
*/
#pragma pack(push, 8)
class PeerServerBackendData : public ServerBackendData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PeerServerBackendData) == 24);

}
