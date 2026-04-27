#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurveType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832E10
   RuntimeId:        00D4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B5748
   Default Value:    0000000142832E28
*/
#pragma pack(push, 8)
struct AudioCurve
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_STDARRAY(struct AudioCurvePoint) Points; /* 0x0000 */
  AudioCurveType CurveType; /* 0x0008 */
  char pad_000C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(AudioCurve) == 16);

}
