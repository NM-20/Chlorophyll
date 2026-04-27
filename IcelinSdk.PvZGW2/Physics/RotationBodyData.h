#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Physics/MovingBodyData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851480
   RuntimeId:        1470
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          084D
   VfTable:          000000014227F558
   Address (Base):   00000001430BE130
*/
#pragma pack(push, 8)
class RotationBodyData : public MovingBodyData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 AngularMomentumMultiplier; /* 0x0018 */
  FB_FLOAT32 AngularMomentumThreshold; /* 0x001C */
  FB_FLOAT32 AngularMomentumDamping; /* 0x0020 */
  FB_FLOAT32 AngularMomentumDampingAcc; /* 0x0024 */
  FB_FLOAT32 AngularMomentumDampingDeacc; /* 0x0028 */
  FB_FLOAT32 AngularConstraintMin; /* 0x002C */
  FB_FLOAT32 AngularConstraintMax; /* 0x0030 */
  FB_INT32 RotationAxis; /* 0x0034 */
  FB_HANDLE(class ExtendedConstraintsData) ExtendedConstraints; /* 0x0038 */
  FB_BOOLEAN UsePostSatisfyConstraints; /* 0x0040 */
  FB_BOOLEAN UseAngularMomentumThreshold; /* 0x0041 */
  FB_BOOLEAN UseAngularMomentumDamping; /* 0x0042 */
  FB_BOOLEAN UseAngularConstraint; /* 0x0043 */
  char pad_0044[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(RotationBodyData) == 72);

}
