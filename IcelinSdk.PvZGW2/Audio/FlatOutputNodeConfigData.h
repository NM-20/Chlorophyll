#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/OutputNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurve.h>

namespace fb
{

/* TypeInfo (Array): 0000000142837160
   RuntimeId:        0490
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DFF
   VfTable:          00000001421FA390
   Address (Base):   0000000143117DF0
*/
#pragma pack(push, 8)
class FlatOutputNodeConfigData : public OutputNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 WorldAngle; /* 0x0058 */
  FB_FLOAT32 Angle; /* 0x005C */
  AudioCurve ReverbAttenuationCurve; /* 0x0060 */
  FB_FLOAT32 ReverbGain; /* 0x0070 */
  FB_BOOLEAN IsWorldAligned; /* 0x0074 */
  char pad_0075[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0078 */
#pragma pack(pop)

static_assert(sizeof(FlatOutputNodeConfigData) == 120);

}
