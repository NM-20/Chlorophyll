#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428398F8
   RuntimeId:        06CA
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08D4
   VfTable:          00000001421FF958
   Address (Base):   00000001430F2040
*/
#pragma pack(push, 8)
class SpawnRotationSpeedData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 RotationSpeed; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(SpawnRotationSpeedData) == 56);

}
