#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameCommon/PhysicsDrivenAnimationEntity.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        0D16
   TypeInfo Kind:    EntityClassInfo
   ClassId:          04BC
   VfTable:          0000000000000000
   Address (Base):   0000000143126D30
*/
class ServerPhysicsDrivenAnimationEntity : public PhysicsDrivenAnimationEntity
{
public:
  typedef struct EntityClassInfo TypeInfo_t;

  char pad_08D0[0x0030];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0900 */

static_assert(sizeof(ServerPhysicsDrivenAnimationEntity) == 2304);

}
