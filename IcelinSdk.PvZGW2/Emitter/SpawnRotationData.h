#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428398B8
   RuntimeId:        06C6
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08CF
   VfTable:          00000001421FF978
   Address (Base):   00000001430F2100
*/
#pragma pack(push, 8)
class SpawnRotationData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Rotation; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SpawnRotationData) == 56);

}
