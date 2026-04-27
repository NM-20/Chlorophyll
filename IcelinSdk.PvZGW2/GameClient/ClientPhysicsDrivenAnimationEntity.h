#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/PhysicsDrivenAnimationEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0A28
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04BB
   VfTable:          0000000000000000
   Address (Base):   0000000143124440
*/
class ClientPhysicsDrivenAnimationEntity : public PhysicsDrivenAnimationEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_08D0[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0900 */

static_assert(sizeof(ClientPhysicsDrivenAnimationEntity) == 2304);

}
