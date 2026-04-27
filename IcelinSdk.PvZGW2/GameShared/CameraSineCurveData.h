#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D8B8
   RuntimeId:        114B
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C90C8
   Default Value:    000000014284D8D0
*/
#pragma pack(push, 4)
struct CameraSineCurveData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Frequency; /* 0x0000 */
  FB_FLOAT32 Amplitude; /* 0x0004 */
  FB_FLOAT32 PhaseShift; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(CameraSineCurveData) == 12);

}
