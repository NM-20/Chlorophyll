#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/IglooEntityCreator.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        153A
   TypeInfo Kind:    ClassInfo
   ClassId:          00C1
   VfTable:          0000000000000000
   Address (Base):   0000000143121830
*/
class PhysicsEntityCreator : public IglooEntityCreator
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0040 */

static_assert(sizeof(PhysicsEntityCreator) == 64);

}
