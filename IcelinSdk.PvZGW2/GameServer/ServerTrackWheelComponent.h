#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerWheelComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C73
   TypeInfo Kind:    ClassInfo
   ClassId:          01BB
   VfTable:          0000000000000000
   Address (Base):   00000001430DE640
*/
class ServerTrackWheelComponent : public ServerWheelComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0078[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0080 */

static_assert(sizeof(ServerTrackWheelComponent) == 128);

}
