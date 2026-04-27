#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CD38
   RuntimeId:        10B2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C91C8
   Default Value:    000000014284CD50
*/
#pragma pack(push, 4)
struct CameraRelativeControlPerSpeedData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 SpeedThreshold; /* 0x0000 */
  FB_FLOAT32 WorldSpaceLockEfficiency; /* 0x0004 */
  FB_FLOAT32 WorldSpaceLockEfficiencyAway; /* 0x0008 */
  FB_FLOAT32 ThrottleForSteeringHelp; /* 0x000C */
  FB_FLOAT32 ThrottleForSteeringHelpStrength; /* 0x0010 */
  FB_FLOAT32 ThrottleHold; /* 0x0014 */
  FB_FLOAT32 MinInputMagnitude; /* 0x0018 */
  FB_FLOAT32 ThrottleExponent; /* 0x001C */
  FB_FLOAT32 TurningExponent; /* 0x0020 */
  FB_FLOAT32 FullTurningThreshold; /* 0x0024 */
  FB_FLOAT32 FullTurningBlending; /* 0x0028 */
  FB_FLOAT32 ExtraForwardZoneAngle; /* 0x002C */
  FB_FLOAT32 AngularYawConstraint; /* 0x0030 */
  FB_BOOLEAN UseInForwardAndNeutralGears; /* 0x0034 */
  FB_BOOLEAN UseInReverseGear; /* 0x0035 */
  FB_BOOLEAN UseInBoost; /* 0x0036 */
  FB_BOOLEAN UseNotInBoost; /* 0x0037 */
  FB_BOOLEAN InvertExtraForwardZoneIfBackwards; /* 0x0038 */
  FB_BOOLEAN InvertExtraForwardZoneOnSideFacingCamera; /* 0x0039 */
  char pad_003A[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x003C */
#pragma pack(pop)

static_assert(sizeof(CameraRelativeControlPerSpeedData) == 60);

}
