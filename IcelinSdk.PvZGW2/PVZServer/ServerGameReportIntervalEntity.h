#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1F52
   TypeInfo Kind:    EntityClassInfo
   ClassId:          026C
   VfTable:          0000000000000000
   Address (Base):   000000014312BBF0
*/
class ServerGameReportIntervalEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x0020];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(ServerGameReportIntervalEntity) == 64);

}
