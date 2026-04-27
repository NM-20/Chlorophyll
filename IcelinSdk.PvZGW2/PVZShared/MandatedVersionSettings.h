#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142868800
   RuntimeId:        23F7
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430B9080
   Default Value:    0000000142868818
*/
#pragma pack(push, 4)
struct MandatedVersionSettings
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 Current; /* 0x0000 */
  FB_INT32 Required; /* 0x0004 */
  FB_BOOLEAN ExactMatch; /* 0x0008 */
  char pad_0009[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(MandatedVersionSettings) == 12);

}
