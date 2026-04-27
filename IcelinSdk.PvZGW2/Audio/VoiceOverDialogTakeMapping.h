#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142838800
   RuntimeId:        05F2
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCE28
   Default Value:    0000000142BEBEA0
*/
#pragma pack(push, 4)
struct VoiceOverDialogTakeMapping
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 TakeControlMin; /* 0x0000 */
  FB_FLOAT32 TakeControlMax; /* 0x0004 */
  FB_UINT8 TakeIndex; /* 0x0008 */
  char pad_0009[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(VoiceOverDialogTakeMapping) == 12);

}
