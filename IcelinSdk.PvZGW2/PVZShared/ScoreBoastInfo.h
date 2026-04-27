#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142864E18
   RuntimeId:        225E
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4728
   Default Value:    0000000142BFEBD8
*/
#pragma pack(push, 4)
struct ScoreBoastInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Value; /* 0x0000 */
  FB_UINT32 Index; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(ScoreBoastInfo) == 8);

}
