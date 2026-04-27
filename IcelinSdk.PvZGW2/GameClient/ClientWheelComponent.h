#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/ClientBoneComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0B18
   TypeInfo Kind:    ClassInfo
   ClassId:          0168
   VfTable:          0000000000000000
   Address (Base):   00000001430D2920
*/
class ClientWheelComponent : public ClientBoneComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0038[0x0098];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(ClientWheelComponent) == 208);

}
