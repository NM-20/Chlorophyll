#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/IntensityEvent.h>
#include <IcelinSdk.PvZGW2/PVZShared/IntensityAction.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurve.h>

namespace fb
{

/* TypeInfo (Array): 0000000142873868
   RuntimeId:        2BF6
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C0F88
   Default Value:    0000000142873880
*/
#pragma pack(push, 8)
struct IntensityInfluence
{
  typedef struct ValueTypeInfo TypeInfo_t;

  IntensityEvent Event; /* 0x0000 */
  IntensityAction Action; /* 0x0004 */
  FB_FLOAT32 NormalValue; /* 0x0008 */
  char pad_000C[0x0004];
  AudioCurve IntensityCurve; /* 0x0010 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(IntensityInfluence) == 32);

}
