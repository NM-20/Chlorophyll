#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerEntryComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0C5D
   TypeInfo Kind:    ClassInfo
   ClassId:          01FC
   VfTable:          0000000000000000
   Address (Base):   00000001430DE780
*/
class ServerCharacterEntryComponent : public ServerEntryComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */

static_assert(sizeof(ServerCharacterEntryComponent) == 224);

}
