#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Component.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A65
   TypeInfo Kind:    ClassInfo
   ClassId:          020C
   VfTable:          0000000000000000
   Address (Base):   00000001430CE040
*/
class LocalWindForceComponent : public Component
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0020[0x0080];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */

static_assert(sizeof(LocalWindForceComponent) == 160);

}
