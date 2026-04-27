#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsBodyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851BD0
   RuntimeId:        14E0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          09B9
   VfTable:          000000014227EED0
   Address (Base):   000000014310EE50
*/
#pragma pack(push, 8)
class RagdollPhysicsBodyData : public PhysicsBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(RagdollPhysicsBodyData) == 48);

}
