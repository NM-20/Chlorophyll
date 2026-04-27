#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/GameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C4B
   TypeInfo Kind:    ClassInfo
   ClassId:          01B4
   VfTable:          0000000000000000
   Address (Base):   00000001430B4650
*/
class ServerGameComponent : public GameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(ServerGameComponent) == 48);

}
