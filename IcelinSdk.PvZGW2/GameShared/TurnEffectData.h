#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D8E8
   RuntimeId:        114D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BAD20
   Default Value:    000000014284D900
*/
#pragma pack(push, 4)
struct TurnEffectData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 MaxRollAngle; /* 0x0000 */
  FB_FLOAT32 MaxPitchAngle; /* 0x0004 */
  FB_FLOAT32 YawVelocityThreshhold; /* 0x0008 */
  FB_FLOAT32 VelocityThreshhold; /* 0x000C */
  FB_FLOAT32 SafeTime; /* 0x0010 */
  FB_FLOAT32 BeginTime; /* 0x0014 */
  FB_FLOAT32 HoldTime; /* 0x0018 */
  FB_FLOAT32 EndTime; /* 0x001C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(TurnEffectData) == 32);

}
