#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Component.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F9B
   TypeInfo Kind:    ClassInfo
   ClassId:          024A
   VfTable:          0000000000000000
   Address (Base):   00000001431015A0
*/
class EntityOwnerPlayerComponent : public Component
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(EntityOwnerPlayerComponent) == 32);

}
