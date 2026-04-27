#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/SimpleMeleeComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BFE
   TypeInfo Kind:    ClassInfo
   ClassId:          0215
   VfTable:          0000000000000000
   Address (Base):   00000001430B72B0
*/
class ClientSimpleMeleeComponent : public SimpleMeleeComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0F40[0x0220];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x1160 */

static_assert(sizeof(ClientSimpleMeleeComponent) == 4448);

}
