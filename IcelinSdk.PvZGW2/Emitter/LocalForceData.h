#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>
#include <IcelinSdk.PvZGW2/Core/Vec3.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839978
   RuntimeId:        06D2
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08E5
   VfTable:          00000001421FF898
   Address (Base):   00000001430F1F80
*/
#pragma pack(push, 16)
class LocalForceData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 PerParticleRandomness; /* 0x0030 */
  FB_BOOLEAN EmitterLocalSpaceForce; /* 0x0034 */
  char pad_0035[0x000B];
  Vec3 LocalForce; /* 0x0040 */

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0050 */
#pragma pack(pop)

static_assert(sizeof(LocalForceData) == 80);

}
