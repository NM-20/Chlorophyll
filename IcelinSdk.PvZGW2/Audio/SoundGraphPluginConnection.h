#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginConnectionType.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837620
   RuntimeId:        04DC
   TypeInfo Kind:    ValueTypeInfo
   VfTable:          0000000000000000
   Address:          00000001430CCFE8
   Default Value:    0000000142837638
*/
#pragma pack(push, 8)
struct SoundGraphPluginConnection
{
  typedef struct ValueTypeInfo TypeInfo_t;

  SoundGraphPluginConnectionType ConnectionType; /* 0x0000 */
  char pad_0004[0x0004];
  FB_HANDLE(class SoundBusData) Bus; /* 0x0008 */
  FB_STDARRAY(struct SoundGraphPluginConnectionParam) Parameters; /* 0x0010 */
  FB_UINT8 VoiceIndex; /* 0x0018 */
  FB_UINT8 PluginIndex; /* 0x0019 */
  FB_UINT8 SignalIndex; /* 0x001A */
  char pad_001B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoundGraphPluginConnection) == 32);

}
