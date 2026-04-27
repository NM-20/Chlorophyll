#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284BCF0
   RuntimeId:        0FCC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BB160
   Default Value:    000000014284BD08
*/
#pragma pack(push, 4)
struct SimpleMovementActionTimeData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0000 */
  FB_FLOAT32 MaxVariation; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(SimpleMovementActionTimeData) == 8);

}
