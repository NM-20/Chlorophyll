#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/BTree/AIBehaviorTreeDataProviderContext.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EFE
   TypeInfo Kind:    ClassInfo
   ClassId:          05DF
   VfTable:          0000000000000000
   Address (Base):   000000014311E0D0
*/
class PVZBTreeDataContext : public AIBehaviorTreeDataProviderContext
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(PVZBTreeDataContext) == 64);

}
