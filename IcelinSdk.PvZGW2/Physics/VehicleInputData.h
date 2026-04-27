#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142850E60
   RuntimeId:        141A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BA620
   Default Value:    0000000142850E90
*/
#pragma pack(push, 4)
struct VehicleInputData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 ThrottleDeadzone; /* 0x0000 */
  FB_FLOAT32 BrakeDeadzone; /* 0x0004 */
  FB_FLOAT32 YawDeadzone; /* 0x0008 */
  FB_FLOAT32 PitchDeadzone; /* 0x000C */
  FB_FLOAT32 RollDeadzone; /* 0x0010 */
  FB_FLOAT32 ThrottleInertiaOutDuration; /* 0x0014 */
  FB_FLOAT32 ThrottleInertiaInDuration; /* 0x0018 */
  FB_FLOAT32 ThrottleInertiaMinRatio; /* 0x001C */
  FB_FLOAT32 BrakeInertiaOutDuration; /* 0x0020 */
  FB_FLOAT32 BrakeInertiaInDuration; /* 0x0024 */
  FB_FLOAT32 BrakeInertiaMinRatio; /* 0x0028 */
  FB_FLOAT32 YawInertiaOutDuration; /* 0x002C */
  FB_FLOAT32 YawInertiaInDuration; /* 0x0030 */
  FB_FLOAT32 YawInertiaMinRatio; /* 0x0034 */
  FB_FLOAT32 PitchInertiaOutDuration; /* 0x0038 */
  FB_FLOAT32 PitchInertiaInDuration; /* 0x003C */
  FB_FLOAT32 PitchInertiaMinRatio; /* 0x0040 */
  FB_FLOAT32 RollInertiaOutDuration; /* 0x0044 */
  FB_FLOAT32 RollInertiaInDuration; /* 0x0048 */
  FB_FLOAT32 RollInertiaMinRatio; /* 0x004C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(VehicleInputData) == 80);

}
