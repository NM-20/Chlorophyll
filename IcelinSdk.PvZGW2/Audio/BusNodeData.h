#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/SoundBusData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/SoundGraphPluginRef.h>

namespace fb
{

/* TypeInfo (Array): 0000000142836C40
   RuntimeId:        043E
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1221
   VfTable:          00000001421FA5A8
   Address (Base):   00000001430FEEF0
*/
#pragma pack(push, 8)
class BusNodeData : public SoundBusData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Out; /* 0x0020 */
  SoundGraphPluginRef VuPlugin; /* 0x0028 */
  char pad_002B[0x0005];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(BusNodeData) == 48);

}
