#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameServer/ServerSubView.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0CFB
   TypeInfo Kind:    ClassInfo
   ClassId:          0117
   VfTable:          0000000000000000
   Address (Base):   000000014311F430
*/
class ServerSpectatorSubViewBase : public ServerSubView
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0040[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ServerSpectatorSubViewBase) == 72);

}
