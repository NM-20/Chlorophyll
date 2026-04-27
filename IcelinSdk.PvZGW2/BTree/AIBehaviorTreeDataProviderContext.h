#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/AutomaticDataProviderContext.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        017B
   TypeInfo Kind:    ClassInfo
   ClassId:          05DE
   VfTable:          0000000000000000
   Address (Base):   000000014311F7F0
*/
class AIBehaviorTreeDataProviderContext : public AutomaticDataProviderContext
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0030[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(AIBehaviorTreeDataProviderContext) == 64);

}
