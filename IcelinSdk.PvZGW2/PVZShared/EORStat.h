#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428704F8
   RuntimeId:        298D
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C19A8
   Default Value:    0000000142BF8FBC
*/
#pragma pack(push, 4)
struct EORStat
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Value; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(EORStat) == 4);

}
