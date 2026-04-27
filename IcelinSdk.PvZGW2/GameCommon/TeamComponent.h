#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Component.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0BE0
   TypeInfo Kind:    ClassInfo
   ClassId:          0210
   VfTable:          0000000000000000
   Address (Base):   00000001430BD2E0
*/
class TeamComponent : public Component
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0020[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */

static_assert(sizeof(TeamComponent) == 40);

}
