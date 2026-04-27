#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839958
   RuntimeId:        06D0
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08E9
   VfTable:          00000001421FF8F8
   Address (Base):   00000001430F1FE0
*/
#pragma pack(push, 8)
class GravityData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Gravity; /* 0x0030 */
  FB_FLOAT32 PerParticleRandomness; /* 0x0034 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(GravityData) == 56);

}
