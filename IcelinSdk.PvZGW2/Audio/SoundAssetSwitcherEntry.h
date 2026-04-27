#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837C10
   RuntimeId:        0536
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCF28
   Default Value:    0000000142B88CD0
*/
#pragma pack(push, 8)
struct SoundAssetSwitcherEntry
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_INT32 VoiceOverLabelNameHash; /* 0x0000 */
  char pad_0004[0x0004];
  FB_HANDLE(class SoundAsset) Sound; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(SoundAssetSwitcherEntry) == 16);

}
