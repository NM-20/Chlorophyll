#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZServer/PVZBTreeDataContext.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1EFF
   TypeInfo Kind:    ClassInfo
   ClassId:          05E0
   VfTable:          0000000000000000
   Address (Base):   0000000143120570
*/
class ServerPVZBTreeDataContext : public PVZBTreeDataContext
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0040[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */

static_assert(sizeof(ServerPVZBTreeDataContext) == 72);

}
