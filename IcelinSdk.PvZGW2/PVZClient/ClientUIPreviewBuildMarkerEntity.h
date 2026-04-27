#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/Entity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1B9C
   TypeInfo Kind:    EntityClassInfo
   ClassId:          053C
   VfTable:          0000000000000000
   Address (Base):   0000000143137270
*/
class ClientUIPreviewBuildMarkerEntity : public Entity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_0020[0x00C0];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00E0 */

static_assert(sizeof(ClientUIPreviewBuildMarkerEntity) == 224);

}
