#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839898
   RuntimeId:        06C4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08DE
   VfTable:          00000001421FF9B8
   Address (Base):   00000001430F2160
*/
#pragma pack(push, 8)
class SpawnAnimationFrameData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_UINT32 AnimationFrame; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SpawnAnimationFrameData) == 56);

}
