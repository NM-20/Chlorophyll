#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014286AFF8
   RuntimeId:        2604
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C3228
   Default Value:    000000014286B010
*/
#pragma pack(push, 4)
struct PunchAnimBehaviorData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 AllowChainInputAfterTime; /* 0x0000 */
  FB_FLOAT32 AnimLength; /* 0x0004 */
  FB_BOOLEAN AllowSkip; /* 0x0008 */
  FB_BOOLEAN AllowChainInput; /* 0x0009 */
  char pad_000A[0x0002];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(PunchAnimBehaviorData) == 12);

}
