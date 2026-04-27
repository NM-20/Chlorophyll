#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/UserSpawnContext.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C76
   TypeInfo Kind:    ClassInfo
   ClassId:          00E2
   VfTable:          0000000000000000
   Address (Base):   0000000143121D30
*/
class ServerOriginatingLocationSpawnContext : public UserSpawnContext
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0010[0x0050];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0060 */

static_assert(sizeof(ServerOriginatingLocationSpawnContext) == 96);

}
