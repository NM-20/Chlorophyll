#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 00000001428399D8
   RuntimeId:        06D8
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08C7
   VfTable:          00000001421FF858
   Address (Base):   00000001430F1F20
*/
#pragma pack(push, 8)
class AirResistanceData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 DragFactor; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(AirResistanceData) == 56);

}
