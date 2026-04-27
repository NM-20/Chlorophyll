#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EFC
   TypeInfo Kind:    ClassInfo
   ClassId:          0207
   VfTable:          0000000000000000
   Address (Base):   00000001430DD650
*/
class ServerBuffZoneComponent : public ServerGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x03B8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x03E8 */

static_assert(sizeof(ServerBuffZoneComponent) == 1000);

}
