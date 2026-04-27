#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142862A30
   RuntimeId:        20A8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C4FC8
   Default Value:    0000000142BF51C4
*/
#pragma pack(push, 4)
struct FootStepTrigger
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0000 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0004 */
#pragma pack(pop)

static_assert(sizeof(FootStepTrigger) == 4);

}
