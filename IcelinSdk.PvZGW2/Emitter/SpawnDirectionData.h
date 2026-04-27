#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428397F8
   RuntimeId:        06BA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08DB
   VfTable:          00000001421FFA58
   Address (Base):   00000001430F2340
*/
#pragma pack(push, 8)
class SpawnDirectionData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DirectionFromEmitterOrigin; /* 0x0030 */
  FB_FLOAT32 InheritSpeedAmount; /* 0x0034 */
  FB_FLOAT32 InheritSpeedSmoothingFactor; /* 0x0038 */
  FB_FLOAT32 InheritSpeedRandomness; /* 0x003C */
  FB_BOOLEAN InheritSpeedAndDirectionFromEmitter; /* 0x0040 */
  char pad_0041[0x0007];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0048 */
#pragma pack(pop)

static_assert(sizeof(SpawnDirectionData) == 72);

}
