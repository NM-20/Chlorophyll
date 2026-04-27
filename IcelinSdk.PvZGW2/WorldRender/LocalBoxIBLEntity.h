#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/WorldRender/LocalIBLEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        18FD
   TypeInfo Kind:    EntityClassInfo
   ClassId:          05C3
   VfTable:          0000000000000000
   Address (Base):   00000001431380D0
*/
class LocalBoxIBLEntity : public LocalIBLEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00D0[0x0040];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */

static_assert(sizeof(LocalBoxIBLEntity) == 272);

}
