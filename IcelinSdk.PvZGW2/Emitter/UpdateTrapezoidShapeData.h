#pragma once

#include <IcelinSdk.PvZGW2/PrimitiveTypes.h>
#include <IcelinSdk.PvZGW2/Emitter/ProcessorData.h>

namespace fb
{

/* TypeInfo (Array): 0000000142839C98
   RuntimeId:        0704
   TypeInfo Kind:    DataContainerClassInfo
   ClassId:          08EC
   VfTable:          00000001421FF5F8
   Address (Base):   0000000143115B10
*/
#pragma pack(push, 8)
class UpdateTrapezoidShapeData : public ProcessorData
{
public:
  typedef struct DataContainerClassInfo TypeInfo_t;

  FB_FLOAT32 Scale; /* 0x0030 */
  char pad_0034[0x0004];

private:
  /* Intended for use in Ida. Do not remove. */
  static void IdaForceImport(TypeInfo_t);
}; /* Size: 0x0038 */
#pragma pack(pop)

static_assert(sizeof(UpdateTrapezoidShapeData) == 56);

}
