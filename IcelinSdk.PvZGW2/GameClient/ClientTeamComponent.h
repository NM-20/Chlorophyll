#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/TeamComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0AF4
   TypeInfo Kind:    ClassInfo
   ClassId:          0212
   VfTable:          0000000000000000
   Address (Base):   00000001430BEBD0
*/
class ClientTeamComponent : public TeamComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */

static_assert(sizeof(ClientTeamComponent) == 40);

}
