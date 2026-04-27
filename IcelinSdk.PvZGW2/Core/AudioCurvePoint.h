#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142832DD0
   RuntimeId:        00D0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD848
   Default Value:    0000000142BEA4A8
*/
#pragma pack(push, 4)
struct AudioCurvePoint
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 X; /* 0x0000 */
  FB_FLOAT32 Y; /* 0x0004 */
  FB_FLOAT32 K; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(AudioCurvePoint) == 12);

}
