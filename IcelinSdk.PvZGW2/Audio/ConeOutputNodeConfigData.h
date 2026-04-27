#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Audio/OutputNodeConfigData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>
#include <IcelinSdk.PvZGW2/Core/AudioCurve.h>

namespace fb
{

/* TypeInfo (Array): 00000001428371A0
   RuntimeId:        0494
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0E00
   VfTable:          00000001421FA370
   Address (Base):   0000000143117D90
*/
#pragma pack(push, 16)
class ConeOutputNodeConfigData : public OutputNodeConfigData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 OutsideGain; /* 0x0058 */
  FB_FLOAT32 PanSize; /* 0x005C */
  FB_FLOAT32 BleedMinDistance; /* 0x0060 */
  char pad_0064[0x000C];
  Vec3 Direction; /* 0x0070 */
  FB_FLOAT32 BleedMaxDistance; /* 0x0080 */
  FB_FLOAT32 HFDampingAngle; /* 0x0084 */
  AudioCurve ReverbAttenuationCurve; /* 0x0088 */
  FB_FLOAT32 ReverbGain; /* 0x0098 */
  char pad_009C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x00A0 */
#pragma pack(pop)

static_assert(sizeof(ConeOutputNodeConfigData) == 160);

}
