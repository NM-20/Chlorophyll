#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837750
   RuntimeId:        04EA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1220
   VfTable:          00000001421FA180
   Address (Base):   00000001430FFAF0
*/
#pragma pack(push, 8)
class SoundBusData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_CSTRING BusName; /* 0x0010 */
  FB_UINT8 ChannelCount; /* 0x0018 */
  SoundGraphPluginRef SubmixPlugin; /* 0x0019 */
  char pad_001C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0020 */
#pragma pack(pop)

static_assert(sizeof(SoundBusData) == 32);

}
