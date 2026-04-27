#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodeData.h>
#include <IcelinSdk.PvZGW2/Audio/AudioGraphNodePort.h>
#include <IcelinSdk.PvZGW2/Core/MultiPointLine.h>

namespace fb
{

/* TypeInfo (Array): 00000001428594D0
   RuntimeId:        1B1A
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          1243
   VfTable:          00000001422DC1F8
   Address (Base):   00000001430FA030
*/
#pragma pack(push, 8)
class PointEnvelopeNodeData : public AudioGraphNodeData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  AudioGraphNodePort X; /* 0x0010 */
  AudioGraphNodePort Y; /* 0x0018 */
  AudioGraphNodePort Region; /* 0x0020 */
  MultiPointLine Envelope; /* 0x0028 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(PointEnvelopeNodeData) == 48);

}
