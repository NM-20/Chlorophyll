#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 000000014284AA80
   RuntimeId:        0EC9
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C9548
   Default Value:    0000000142BA4850
*/
#pragma pack(push, 4)
struct VoiceOverConversationEntityTrackInfo
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_UINT32 TakeControlId; /* 0x0000 */
  FB_UINT32 SourceId; /* 0x0004 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0008 */
#pragma pack(pop)

static_assert(sizeof(VoiceOverConversationEntityTrackInfo) == 8);

}
