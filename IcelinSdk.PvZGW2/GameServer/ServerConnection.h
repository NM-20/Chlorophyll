#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Network/EngineConnectionPeer.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C88
   TypeInfo Kind:    ClassInfo
   ClassId:          00DC
   VfTable:          0000000000000000
   Address (Base):   0000000143121CE0
*/
#pragma pack(push, 16)
class ServerConnection : public EngineConnectionPeer
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_2B10[0x30E0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x5BF0 */
#pragma pack(pop)

static_assert(sizeof(ServerConnection) == 23536);

}
