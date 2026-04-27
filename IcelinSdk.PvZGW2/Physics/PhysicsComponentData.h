#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Entity/ComponentData.h>
#include <IcelinSdk.PvZGW2/Physics/InternalCollisionDisablingBehavior.h>

namespace fb
{

/* TypeInfo (Array): 00000001428519C8
   RuntimeId:        14C0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0CF2
   VfTable:          000000014227F1C8
   Address (Base):   00000001430D5D70
*/
#pragma pack(push, 16)
class PhysicsComponentData : public ComponentData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_REFARRAY(class PhysicsBodyData) PhysicsBodies; /* 0x0070 */
  FB_REFARRAY(class PhysicsConstraintData) PhysicsConstraints; /* 0x0078 */
  FB_STDARRAY(struct PhysicsPartData) Parts; /* 0x0080 */
  InternalCollisionDisablingBehavior InternalCollisionDisabling; /* 0x0088 */
  FB_BOOLEAN MovableParts; /* 0x008C */
  char pad_008D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0090 */
#pragma pack(pop)

static_assert(sizeof(PhysicsComponentData) == 144);

}
