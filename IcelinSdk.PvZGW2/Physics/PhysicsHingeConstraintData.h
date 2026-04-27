#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsConstraintData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851CB0
   RuntimeId:        14EE
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C5E
   VfTable:          000000014227EDB8
   Address (Base):   00000001430BFD10
*/
#pragma pack(push, 16)
class PhysicsHingeConstraintData : public PhysicsConstraintData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinAngle; /* 0x0080 */
  FB_FLOAT32 MaxAngle; /* 0x0084 */
  FB_FLOAT32 AngularFriction; /* 0x0088 */
  FB_FLOAT32 AngularStiffness; /* 0x008C */
  FB_BOOLEAN HasLimits; /* 0x0090 */
  char pad_0091[0x000F];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(PhysicsHingeConstraintData) == 160);

}
