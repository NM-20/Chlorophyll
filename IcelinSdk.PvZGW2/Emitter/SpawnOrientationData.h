#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428398D8
   RuntimeId:        06C8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08EB
   VfTable:          00000001421FF938
   Address (Base):   00000001430F20A0
*/
#pragma pack(push, 8)
class SpawnOrientationData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0030 */
#pragma pack(pop)

static_assert(sizeof(SpawnOrientationData) == 48);

}
