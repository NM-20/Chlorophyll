#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1C48
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0426
   VfTable:          0000000000000000
   Address (Base):   00000001431330D0
*/
class ClientUIVOIPOverlayEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0048];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */

static_assert(sizeof(ClientUIVOIPOverlayEntity) == 104);

}
