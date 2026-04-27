#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/PhysicsConstraintData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851CF0
   RuntimeId:        14F2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0C60
   VfTable:          000000014227ECD8
   Address (Base):   00000001430BFCB0
*/
#pragma pack(push, 16)
class PhysicsRagdollConstraintData : public PhysicsConstraintData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 TwistMinAngularLimit; /* 0x0080 */
  FB_FLOAT32 TwistMaxAngularLimit; /* 0x0084 */
  FB_FLOAT32 PlaneMinAngularLimit; /* 0x0088 */
  FB_FLOAT32 PlaneMaxAngularLimit; /* 0x008C */
  FB_FLOAT32 ConeAngularLimit; /* 0x0090 */
  FB_FLOAT32 AngularFriction; /* 0x0094 */
  FB_FLOAT32 AngularStiffness; /* 0x0098 */
  FB_BOOLEAN HasLimits; /* 0x009C */
  char pad_009D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(PhysicsRagdollConstraintData) == 160);

}
