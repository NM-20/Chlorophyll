#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142854B28
   RuntimeId:        17A1
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C7848
   Default Value:    0000000142BF6E80
*/
#pragma pack(push, 4)
struct BoolKeyframe
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 Time; /* 0x0000 */
  FB_BOOLEAN Value; /* 0x0004 */
  char pad_0005[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(BoolKeyframe) == 8);

}
