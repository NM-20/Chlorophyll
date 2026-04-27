#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Component.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F99
   TypeInfo Kind:    ClassInfo
   ClassId:          0213
   VfTable:          0000000000000000
   Address (Base):   00000001430D1980
*/
class SimpleMeleeComponent : public Component
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0020[0x0F20];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0F40 */

static_assert(sizeof(SimpleMeleeComponent) == 3904);

}
