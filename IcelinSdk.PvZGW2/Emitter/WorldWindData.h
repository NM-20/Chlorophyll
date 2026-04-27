#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839998
   RuntimeId:        06D4
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08C2
   VfTable:          00000001421FF8B8
   Address (Base):   0000000143115C90
*/
#pragma pack(push, 8)
class WorldWindData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 WindMultiplier; /* 0x0030 */
  FB_FLOAT32 PerParticleRandomness; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(WorldWindData) == 56);

}
