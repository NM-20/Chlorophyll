#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/IglooEntityFactory.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        1539
   TypeInfo Kind:    ClassInfo
   ClassId:          00C3
   VfTable:          0000000000000000
   Address (Base):   00000001430B4E70
*/
#pragma pack(push, 8)
class PhysicsEntityFactory : public IglooEntityFactory
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(PhysicsEntityFactory) == 40);

}
