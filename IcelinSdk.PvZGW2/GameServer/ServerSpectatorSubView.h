#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerSpectatorSubViewBase.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CFC
   TypeInfo Kind:    ClassInfo
   ClassId:          0118
   VfTable:          0000000000000000
   Address (Base):   0000000143121BF0
*/
class ServerSpectatorSubView : public ServerSpectatorSubViewBase
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ServerSpectatorSubView) == 72);

}
