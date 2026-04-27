#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1765
   TypeInfo Kind:    EntityClassInfo
   ClassId:          0314
   VfTable:          0000000000000000
   Address (Base):   0000000143126A10
*/
class TimelineEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x01C8];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x01E8 */

static_assert(sizeof(TimelineEntity) == 488);

}
