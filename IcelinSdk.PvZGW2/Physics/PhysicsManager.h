#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/IglooSubsystem.h>

namespace fb
{

/* TypeInfo (Array): 0000000000000000
   RuntimeId:        153B
   TypeInfo Kind:    ClassInfo
   ClassId:          00BD
   VfTable:          0000000000000000
   Address (Base):   00000001430BE0D0
*/
#pragma pack(push, 8)
class PhysicsManager : public IglooSubsystem
{
public:
  typedef struct ClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(PhysicsManager) == 24);

}
