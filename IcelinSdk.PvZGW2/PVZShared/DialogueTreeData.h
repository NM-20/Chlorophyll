#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428617A0
   RuntimeId:        1FA3
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C53A8
   Default Value:    00000001428617B8
*/
#pragma pack(push, 8)
struct DialogueTreeData
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING Dialogue; /* 0x0000 */
  FB_CSTRING A_Text; /* 0x0008 */
  FB_CSTRING B_Text; /* 0x0010 */
  FB_INT32 A_NextIndex; /* 0x0018 */
  FB_INT32 B_NextIndex; /* 0x001C */
  FB_INT32 Character; /* 0x0020 */
  FB_INT32 Emotion; /* 0x0024 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0028 */
#pragma pack(pop)

static_assert(sizeof(DialogueTreeData) == 40);

}
