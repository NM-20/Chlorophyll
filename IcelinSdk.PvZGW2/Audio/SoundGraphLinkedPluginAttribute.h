#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>

namespace fb
{

/* TypeInfo (Array): 00000001428376C0
   RuntimeId:        04E4
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCF88
   Default Value:    0000000142BEBE80
*/
#pragma pack(push, 4)
struct SoundGraphLinkedPluginAttribute
{
  typedef struct ValueTypeInfo TypeInfo_t;

  FB_FLOAT32 UnconnectedValue; /* 0x0000 */
  FB_UINT16 ValueIndex; /* 0x0004 */
  FB_UINT16 NodeIndexAndFlags; /* 0x0006 */
  FB_UINT8 VoiceIndex; /* 0x0008 */
  FB_UINT8 PluginIndex; /* 0x0009 */
  FB_UINT8 AttributeIndex; /* 0x000A */
  char pad_000B[0x0001];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x000C */
#pragma pack(pop)

static_assert(sizeof(SoundGraphLinkedPluginAttribute) == 12);

}
