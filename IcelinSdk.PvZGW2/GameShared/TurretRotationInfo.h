#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/RotationAxis.h>
#include <IcelinSdk.PvZGW2/GameShared/RotationChannel.h>

namespace fb
{

/* TypeInfo (Array): 000000014284CBF0
   RuntimeId:        10A0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C91E8
   Default Value:    000000014284CC08
*/
#pragma pack(push, 4)
struct TurretRotationInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  RotationAxis RotationAxis; /* 0x0000 */
  RotationChannel Channel; /* 0x0004 */
  FB_FLOAT32 MaxRotation; /* 0x0008 */
  FB_FLOAT32 MinRotation; /* 0x000C */
  FB_FLOAT32 PhaseOffset; /* 0x0010 */
  FB_BOOLEAN NormalizeRotation; /* 0x0014 */
  FB_BOOLEAN InvertRotation; /* 0x0015 */
  char pad_0016[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(TurretRotationInfo) == 24);

}
