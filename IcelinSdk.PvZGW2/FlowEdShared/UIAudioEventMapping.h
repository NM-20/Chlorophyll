#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142856BB8
   RuntimeId:        193F
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430C7108
   Default Value:    0000000142856BD0
*/
#pragma pack(push, 8)
struct UIAudioEventMapping
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_CSTRING EventName; /* 0x0000 */
  FB_HANDLE(class SoundAsset) SoundAsset; /* 0x0008 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0010 */
#pragma pack(pop)

static_assert(sizeof(UIAudioEventMapping) == 16);

}
