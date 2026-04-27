#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837680
   RuntimeId:        04E0
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430BBF00
   Default Value:    0000000142B88C6C
*/
#pragma pack(push, 1)
struct SoundGraphPluginRef
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_BOOLEAN IsValid; /* 0x0000 */
  FB_UINT8 VoiceIndex; /* 0x0001 */
  FB_UINT8 PluginIndex; /* 0x0002 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0003 */
#pragma pack(pop)

static_assert(sizeof(SoundGraphPluginRef) == 3);

}
