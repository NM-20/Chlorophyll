#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/PVZShared/StatEvent.h>

namespace fb
{

/* TypeInfo (Array): 00000001428622A0
   RuntimeId:        203A
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C5148
   Default Value:    00000001428622B8
*/
#pragma pack(push, 4)
struct StatSpamSetting
{
  typedef struct ValueTypeInfo TypeInfo_t;

  StatEvent Event; /* 0x0000 */
  FB_UINT32 AmountLimit; /* 0x0004 */
  FB_FLOAT32 TimeLimit; /* 0x0008 */
  FB_BOOLEAN PlayerToPlayer; /* 0x000C */
  char pad_000D[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(StatSpamSetting) == 16);

}
