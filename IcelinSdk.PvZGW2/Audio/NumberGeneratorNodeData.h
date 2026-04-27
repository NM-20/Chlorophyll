#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Audio/NumberGeneratorMode.h>
#include <IcelinSdk.PvZGW2/Audio/NumberGeneratorNodeVersion.h>

namespace fb
{

/* TypeInfo (Array): 0000000142835B98
   RuntimeId:        0339
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1261
   VfTable:          00000001421F1758
   Address (Base):   0000000143100570
*/
#pragma pack(push, 8)
class NumberGeneratorNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort Trigger; /* 0x0010 */
  FB_FLOAT32 Min; /* 0x0018 */
  FB_FLOAT32 Max; /* 0x001C */
  NumberGeneratorMode Mode; /* 0x0020 */
  AudioGraphNodePort Y; /* 0x0024 */
  NumberGeneratorNodeVersion Version; /* 0x002C */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(NumberGeneratorNodeData) == 48);

}
