#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428375E0
   RuntimeId:        04D8
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CD008
   Default Value:    0000000142B88CA8
*/
#pragma pack(push, 4)
struct SoundGraphPluginConnectionParam
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Value; /* 0x0000 */
  FB_UINT8 Index; /* 0x0004 */
  char pad_0005[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(SoundGraphPluginConnectionParam) == 8);

}
