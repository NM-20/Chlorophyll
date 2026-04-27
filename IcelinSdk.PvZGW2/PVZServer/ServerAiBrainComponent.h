#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/BaseAIComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F01
   TypeInfo Kind:    ClassInfo
   ClassId:          01DC
   VfTable:          0000000000000000
   Address (Base):   00000001430B5120
*/
class ServerAiBrainComponent : public BaseAIComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0060[0x1260];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x12C0 */

static_assert(sizeof(ServerAiBrainComponent) == 4800);

}
