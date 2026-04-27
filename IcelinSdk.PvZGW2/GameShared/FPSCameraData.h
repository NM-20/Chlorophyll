#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/GameShared/TargetCameraData.h>
#include <IcelinSdk.PvZGW2/GameShared/TurnEffectData.h>
#include <IcelinSdk.PvZGW2/GameShared/BlurEffectData.h>

namespace fb
{

/* TypeInfo (Array): 000000014284D9D8
   RuntimeId:        1157
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          0DC9
   VfTable:          0000000142273BB8
   Address (Base):   00000001430EC3A0
*/
#pragma pack(push, 16)
class FPSCameraData : public TargetCameraData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  TurnEffectData TurnEffectSettings; /* 0x00D0 */
  BlurEffectData BlurEffectSettings; /* 0x00F0 */
  FB_FLOAT32 FOV; /* 0x0108 */
  char pad_010C[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0110 */
#pragma pack(pop)

static_assert(sizeof(FPSCameraData) == 272);

}
