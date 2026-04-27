#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Network/EngineConnectionPeer.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B0A
   TypeInfo Kind:    ClassInfo
   ClassId:          00DB
   VfTable:          0000000000000000
   Address (Base):   0000000143121E70
*/
#pragma pack(push, 16)
class ClientConnection : public EngineConnectionPeer
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_2B10[0x3050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x5B60 */
#pragma pack(pop)

static_assert(sizeof(ClientConnection) == 23392);

}
