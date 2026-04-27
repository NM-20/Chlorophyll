#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientGameComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        09D3
   TypeInfo Kind:    ClassInfo
   ClassId:          0182
   VfTable:          0000000000000000
   Address (Base):   00000001430DF6D0
*/
class DofComponent : public ClientGameComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0138];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0170 */

static_assert(sizeof(DofComponent) == 368);

}
