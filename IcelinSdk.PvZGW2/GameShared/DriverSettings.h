#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/Asset.h>

namespace fb
{

/* TypeInfo (Array): 000000014284A678
   RuntimeId:        0E96
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          06A5
   VfTable:          0000000142266578
   Address (Base):   0000000143113C50
*/
#pragma pack(push, 8)
class DriverSettings : public Asset
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 MinRadius; /* 0x0018 */
  FB_FLOAT32 RadiusGrowthSpeed; /* 0x001C */
  FB_FLOAT32 StoppingDeceleration; /* 0x0020 */
  FB_FLOAT32 SteeringSensitivity; /* 0x0024 */
  FB_HANDLE(class RegulatedSteering) RegulatedSteering; /* 0x0028 */
  FB_FLOAT32 MaxBrakeOutput; /* 0x0030 */
  FB_FLOAT32 LookAheadTime; /* 0x0034 */
  FB_FLOAT32 AngleDiffForNoSlowdown; /* 0x0038 */
  FB_FLOAT32 AngleDiffForFullSlowdown; /* 0x003C */
  FB_FLOAT32 VelocityAtFullSlowdown; /* 0x0040 */
  FB_FLOAT32 VelDiffAtMinAcc; /* 0x0044 */
  FB_FLOAT32 VelDiffAtMaxAcc; /* 0x0048 */
  FB_FLOAT32 MinAcc; /* 0x004C */
  FB_FLOAT32 MaxAcc; /* 0x0050 */
  FB_FLOAT32 VelDiffAtMinDec; /* 0x0054 */
  FB_FLOAT32 VelDiffAtMaxDec; /* 0x0058 */
  FB_FLOAT32 MinDec; /* 0x005C */
  FB_FLOAT32 MaxDec; /* 0x0060 */
  FB_FLOAT32 AccDiffAtMinThrottleVelocityAccelerating; /* 0x0064 */
  FB_FLOAT32 AccDiffAtMaxThrottleVelocityAccelerating; /* 0x0068 */
  FB_FLOAT32 MinThrottleVelocityAccelerating; /* 0x006C */
  FB_FLOAT32 MaxThrottleVelocityAccelerating; /* 0x0070 */
  FB_FLOAT32 AccDiffAtMinThrottleVelocityDecelerating; /* 0x0074 */
  FB_FLOAT32 AccDiffAtMaxThrottleVelocityDecelerating; /* 0x0078 */
  FB_FLOAT32 MinThrottleVelocityDecelerating; /* 0x007C */
  FB_FLOAT32 MaxThrottleVelocityDecelerating; /* 0x0080 */
  FB_FLOAT32 P; /* 0x0084 */
  FB_FLOAT32 I; /* 0x0088 */
  FB_FLOAT32 D; /* 0x008C */
  FB_FLOAT32 MaxError; /* 0x0090 */
  FB_FLOAT32 MaxSumError; /* 0x0094 */
  FB_FLOAT32 MaxPTerm; /* 0x0098 */
  FB_FLOAT32 MaxITerm; /* 0x009C */
  FB_FLOAT32 MaxYawToApplySprint; /* 0x00A0 */
  FB_FLOAT32 MaxAngleDiffToApplySprint; /* 0x00A4 */
  FB_FLOAT32 MaxAngularVelocityToApplySprint; /* 0x00A8 */
  FB_FLOAT32 MinVelocityToApplySprint; /* 0x00AC */
  FB_FLOAT32 LookAheadAimTime; /* 0x00B0 */
  FB_FLOAT32 MinLookAheadDist; /* 0x00B4 */
  FB_BOOLEAN SquareBrakeOutput; /* 0x00B8 */
  FB_BOOLEAN UseSquareVelDiffCurveAcc; /* 0x00B9 */
  FB_BOOLEAN UseSquareVelDiffCurveDec; /* 0x00BA */
  FB_BOOLEAN UseSquareAccDiffCurveAcc; /* 0x00BB */
  FB_BOOLEAN UseSquareAccDiffCurveDec; /* 0x00BC */
  FB_BOOLEAN UsePIDRegulator; /* 0x00BD */
  FB_BOOLEAN IncludeYDifference; /* 0x00BE */
  char pad_00BF[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00C0 */
#pragma pack(pop)

static_assert(sizeof(DriverSettings) == 192);

}
