#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/RigidBodyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850D60
   RuntimeId:        140A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09B7
   VfTable:          000000014227F848
   Address (Base):   000000014310F810
*/
#pragma pack(push, 16)
class BreakablePhysicsBodyData : public RigidBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0120 */
#pragma pack(pop)

static_assert(sizeof(BreakablePhysicsBodyData) == 288);

}
