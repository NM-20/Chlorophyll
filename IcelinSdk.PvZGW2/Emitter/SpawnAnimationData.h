#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839878
   RuntimeId:        06C2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08DF
   VfTable:          00000001421FF998
   Address (Base):   00000001430F21C0
*/
#pragma pack(push, 8)
class SpawnAnimationData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 AnimationSpeed; /* 0x0030 */
  FB_BOOLEAN BasedOnLifetime; /* 0x0034 */
  char pad_0035[0x0003];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SpawnAnimationData) == 56);

}
