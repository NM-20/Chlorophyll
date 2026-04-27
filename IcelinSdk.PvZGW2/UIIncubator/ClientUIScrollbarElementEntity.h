#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameClient/UIElementEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        2D75
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04A9
   VfTable:          0000000000000000
   Address (Base):   0000000143128630
*/
class ClientUIScrollbarElementEntity : public UIElementEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_00C0[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00D0 */

static_assert(sizeof(ClientUIScrollbarElementEntity) == 208);

}
