#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/DataContainer.h>

namespace fb
{

/* TypeInfo (Array): 0000000142851E80
   RuntimeId:        1506
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0FC1
   VfTable:          000000014227EB38
   Address (Base):   00000001430DB4B0
*/
#pragma pack(push, 8)
class PhysicsDebugSettings : public DataContainer
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 TimingRecursionDepth; /* 0x0010 */
  char pad_0014[0x0004];
  FB_CSTRING VDBCaptureFileName; /* 0x0018 */
  FB_BOOLEAN DebugHingeConstraints; /* 0x0020 */
  FB_BOOLEAN UsePhysicsCpuTimers; /* 0x0021 */
  FB_BOOLEAN VDBShowsEffectsWorld; /* 0x0022 */
  FB_BOOLEAN VDBEnableHavokMonitors; /* 0x0023 */
  FB_BOOLEAN VDBEnableCaptureToFile; /* 0x0024 */
  FB_BOOLEAN VDBShowBodyIds; /* 0x0025 */
  FB_BOOLEAN VDBShowMotionIds; /* 0x0026 */
  FB_BOOLEAN VDBShowBroadphase; /* 0x0027 */
  FB_BOOLEAN VDBShowShapes; /* 0x0028 */
  FB_BOOLEAN VDBShowMassProperties; /* 0x0029 */
  FB_BOOLEAN VDBShowConstraints; /* 0x002A */
  FB_BOOLEAN VDBShowManifold; /* 0x002B */
  FB_BOOLEAN VDBShowMotionTtrail; /* 0x002C */
  FB_BOOLEAN VDBShowBoundingRadius; /* 0x002D */
  FB_BOOLEAN VDBShowDeactivation; /* 0x002E */
  FB_BOOLEAN VBDShowCell; /* 0x002F */
  FB_BOOLEAN VDBShowTriangleWelding; /* 0x0030 */
  FB_BOOLEAN VDBEnableWorldSnapshow; /* 0x0031 */
  FB_BOOLEAN VDBShowDestruction; /* 0x0032 */
  FB_BOOLEAN VDBShowCloth; /* 0x0033 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(PhysicsDebugSettings) == 56);

}
