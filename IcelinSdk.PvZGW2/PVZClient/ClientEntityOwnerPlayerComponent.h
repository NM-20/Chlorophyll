#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/EntityOwnerPlayerComponent.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1BED
   TypeInfo Kind:    ClassInfo
   ClassId:          024B
   VfTable:          0000000000000000
   Address (Base):   00000001430CF0E0
*/
class ClientEntityOwnerPlayerComponent : public EntityOwnerPlayerComponent
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0020[0x0008];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */

static_assert(sizeof(ClientEntityOwnerPlayerComponent) == 40);

}
