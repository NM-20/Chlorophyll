#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428399B8
   RuntimeId:        06D6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08EA
   VfTable:          00000001421FF878
   Address (Base):   0000000143115C30
*/
#pragma pack(push, 8)
class WorldForcesData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 ForcesMultiplier; /* 0x0030 */
  FB_FLOAT32 PerParticleRandomness; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(WorldForcesData) == 56);

}
