#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/DataProviders/DataProviderContext.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        01DB
   TypeInfo Kind:    ClassInfo
   ClassId:          05DD
   VfTable:          0000000000000000
   Address (Base):   000000014311F7A0
*/
class AutomaticDataProviderContext : public DataProviderContext
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0028];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(AutomaticDataProviderContext) == 48);

}
