#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851118
   RuntimeId:        143E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          060C
   VfTable:          000000014227F670
   Address (Base):   000000014310F4B0
*/
#pragma pack(push, 8)
class WingPhysicsData : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Lift; /* 0x0010 */
  FB_FLOAT32 FlapLift; /* 0x0014 */
  FB_HANDLE(class Curve2D) LiftCoefficient; /* 0x0018 */
  FB_FLOAT32 Drag; /* 0x0020 */
  FB_FLOAT32 FlapDrag; /* 0x0024 */
  FB_HANDLE(class Curve2D) DragCoefficient; /* 0x0028 */
  FB_FLOAT32 AngularVelocityLiftModifier; /* 0x0030 */
  FB_FLOAT32 DragRotationModifier; /* 0x0034 */
  FB_FLOAT32 BaseAngleOfAttack; /* 0x0038 */
  FB_INT32 InputForFlap; /* 0x003C */
  FB_FLOAT32 FlapTurnSpeed; /* 0x0040 */
  FB_FLOAT32 VisualFlapTurnSpeed; /* 0x0044 */
  FB_FLOAT32 VisualFlapAngleLimit; /* 0x0048 */
  char pad_004C[0x0004];
  FB_HANDLE(class Curve2D) MaxFlapAngleScaleFactor; /* 0x0050 */
  FB_FLOAT32 LandingFlapLift; /* 0x0058 */
  char pad_005C[0x0004];
  FB_HANDLE(class LandingFlapData) LandingFlapLogic; /* 0x0060 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0068 */
#pragma pack(pop)

static_assert(sizeof(WingPhysicsData) == 104);

}
