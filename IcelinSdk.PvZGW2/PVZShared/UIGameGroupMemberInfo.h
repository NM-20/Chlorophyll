#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142870A28
   RuntimeId:        29DB
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C1968
   Default Value:    0000000142870A40
*/
#pragma pack(push, 8)
struct UIGameGroupMemberInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT64 MemberId; /* 0x0000 */
  FB_CSTRING MemberName; /* 0x0008 */
  FB_BOOLEAN IsLeader; /* 0x0010 */
  FB_BOOLEAN IsLocal; /* 0x0011 */
  char pad_0012[0x0006];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0018 */
#pragma pack(pop)

static_assert(sizeof(UIGameGroupMemberInfo) == 24);

}
