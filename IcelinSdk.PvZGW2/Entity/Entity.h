#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/EntityBusPeer.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        091B
   TypeInfo Kind:    ClassInfo
   ClassId:          0250
   VfTable:          0000000000000000
   Address (Base):   00000001430B4230
*/
class Entity : public EntityBusPeer
{
public:
  typedef struct ClassInfo TypeInfo_t;

  char pad_0008[0x0018];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */

static_assert(sizeof(Entity) == 32);

}
