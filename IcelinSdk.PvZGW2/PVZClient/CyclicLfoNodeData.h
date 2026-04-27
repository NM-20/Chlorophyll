#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/PVZClient/TimeMode.h>
#include <IcelinSdk.PvZGW2/PVZClient/LfoWaveMode.h>

namespace fb
{

/* TypeInfo (Array): 00000001428594B0
   RuntimeId:        1B18
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          126C
   VfTable:          00000001422DC1C8
   Address (Base):   00000001430FA090
*/
#pragma pack(push, 8)
class CyclicLfoNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Start; /* 0x0010 */
  AudioGraphNodePort Stop; /* 0x0018 */
  AudioGraphNodePort Time; /* 0x0020 */
  AudioGraphNodePort Amp; /* 0x0028 */
  AudioGraphNodePort Phase; /* 0x0030 */
  AudioGraphNodePort Min; /* 0x0038 */
  AudioGraphNodePort Max; /* 0x0040 */
  AudioGraphNodePort Skew; /* 0x0048 */
  AudioGraphNodePort Tick; /* 0x0050 */
  AudioGraphNodePort Out; /* 0x0058 */
  AudioGraphNodePort PhaseOut; /* 0x0060 */
  AudioGraphNodePort Delay; /* 0x0068 */
  TimeMode TimeMode; /* 0x0070 */
  LfoWaveMode Mode; /* 0x0074 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(CyclicLfoNodeData) == 120);

}
