#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0636
   TypeInfo Kind:    EntityClassInfo
   ClassId:          05AC
   VfTable:          0000000000000000
   Address (Base):   0000000143141810
*/
class VoiceOverConversationGroupEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0010];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */

static_assert(sizeof(VoiceOverConversationGroupEntity) == 48);

}
